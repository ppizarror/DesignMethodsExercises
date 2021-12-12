#include <gtest/gtest.h>
#include "../src/library/library.h"
#include "../src/item/book.h"
#include "../src/item/psxgame.h"

TEST(LibraryTests, Library) {
    auto *library = new Library();
    auto *psx = new PSXGame("psx", 2000);
    auto *bk = new Book("BookEpic", 2005);
    EXPECT_EQ(library->size(), 0);

    // Add elements
    library->add_item(psx);
    library->add_item(bk);

    // Check size again
    EXPECT_EQ(library->size(), 2);

    delete library;
}