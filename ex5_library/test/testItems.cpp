#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err58-cpp"

#include <gtest/gtest.h>
#include "../src/item/psxgame.h"
#include "../src/item/wiigame.h"
#include "../src/item/book.h"
#include "../src/item/journal.h"

TEST(ItemTests, GameTest) {
    auto *psx = new PSXGame("My Game", 2001);
    EXPECT_EQ(psx->getName(), "My Game");
    delete psx;
    auto *wii = new WiiGame("My Game Wii", 2001);
    EXPECT_EQ(wii->getName(), "My Game Wii");
    EXPECT_EQ(wii->getDate(), 2001);
    delete wii;
}

TEST(ItemTests, LectureTest) {
    auto *book = new Book("My Book", 2001);
    EXPECT_EQ(book->getName(), "My Book");
    delete book;
    auto *j = new Journal("My Journal", 2001);
    EXPECT_EQ(j->getName(), "My Journal");
    EXPECT_EQ(j->getDate(), 2001);
    delete j;
}