#include <gtest/gtest.h>
#include "../src/library/library.h"

#include "../src/item/psxgame.h"
#include "../src/item/wiigame.h"
#include "../src/item/book.h"
#include "../src/item/journal.h"

#include "../src/matcher/and.h"
#include "../src/matcher/contains_name.h"
#include "../src/matcher/date_gt.h"
#include "../src/matcher/date_lt.h"
#include "../src/matcher/exact_date.h"
#include "../src/matcher/exact_name.h"
#include "../src/matcher/or.h"

class TestMatcher : public ::testing::Test {
protected:
    Library *lib{};

    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
        this->lib = new Library();

        // Add items
        this->lib->add_item(new PSXGame("GTA SA", 2004));
        this->lib->add_item(new PSXGame("Tomb Raider", 1998));
        this->lib->add_item(new WiiGame("Zelda", 2008));
        this->lib->add_item(new WiiGame("MarioBros", 2001));
        this->lib->add_item(new WiiGame("Willy The Game", 2001));
        this->lib->add_item(new WiiGame("Starcraft", 1998));
        this->lib->add_item(new WiiGame("Starcraft", 2021));

        this->lib->add_item(new Book("Dan Brown", 2010));
        this->lib->add_item(new Book("Danae", 2000));
        this->lib->add_item(new Book("Harry Potter", 2003));
        this->lib->add_item(new Book("1984", 1984));
        this->lib->add_item(new Journal("The very cool journal", 1950));
        this->lib->add_item(new Journal("American Aircrafts", 1977));
    };

    void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
        delete this->lib;
    };
};

TEST_F(TestMatcher, TestLibrary) {
    EXPECT_EQ(lib->size(), 13);
}

TEST_F(TestMatcher, TestNameContains) {
    auto *name = new ContainsNameMatcher("dan");
    auto *results = lib->search(name);
    EXPECT_EQ(results->size(), 2);
    auto *a = results->at(0);
    auto *b = results->at(1);
    EXPECT_EQ(a->getName(), "Dan Brown");
    EXPECT_EQ(b->getName(), "Danae");
    delete results;
    delete name;

    name = new ContainsNameMatcher("dana");
    results = lib->search(name);
    EXPECT_EQ(results->size(), 1);
    delete results;
    delete name;
}

TEST_F(TestMatcher, TestExactName) {
    auto *name = new ExactNameMatcher("Dana");
    auto *results = lib->search(name);
    EXPECT_EQ(results->size(), 0);
    delete name;
    delete results;
    name = new ExactNameMatcher("Danae");
    results = lib->search(name);
    EXPECT_EQ(results->size(), 1);
}

TEST_F(TestMatcher, TestExactDate) {
    auto *date = new ExactDateMatcher(2001);
    auto *results = lib->search(date);
    EXPECT_EQ(results->size(), 2);
    delete date;
    delete results;
}

TEST_F(TestMatcher, TestDateGT) {
    auto *date = new DateGTMatcher(2000);
    auto *results = lib->search(date);
    EXPECT_EQ(results->size(), 7);
    delete date;
    delete results;
}

TEST_F(TestMatcher, TestDateLT) {
    auto *date = new DateLTMatcher(2000);
    auto *results = lib->search(date);
    EXPECT_EQ(results->size(), 5);
    delete date;
    delete results;
}

TEST_F(TestMatcher, OrMatcher) {
    // Test date >= 2000
    auto *date1 = new ExactDateMatcher(2000);
    auto *date2 = new DateGTMatcher(2000);
    auto *q1 = new OrMatcher(date1, date2);
    auto *results = lib->search(q1);
    EXPECT_EQ(results->size(), 8);
    delete date1;
    delete q1;
    delete results;

    // Test date > 2000 and contains "dan"
    auto *name = new ExactNameMatcher("Starcraft");
    auto *date3 = new ExactDateMatcher(2021);
    auto *q2 = new OrMatcher(name, date3);
    results = lib->search(q2);
    EXPECT_EQ(results->size(), 2);
    delete name;
    delete date3;
    delete q2;
}

TEST_F(TestMatcher, AndMatcher) {
    auto *name = new ExactNameMatcher("Starcraft");
    auto *date1 = new ExactDateMatcher(1998);
    auto *date2 = new ExactDateMatcher(2021);
    auto *q1 = new OrMatcher(date1, date2);
    auto *q2 = new AndMatcher(name, q1);
    auto *results = lib->search(q2);
    EXPECT_EQ(results->size(), 2);
}