#include <gtest/gtest.h>
#include "../src/tamagotchi.h"

TEST(TestTamagotchi, TestInitState) {
    auto *tama = new Tamagotchi();
    EXPECT_TRUE(tama->isHappy());
    EXPECT_ANY_THROW(tama->giveFood());
}

TEST(TestTamagotchi, TestStates) {
    auto *tama = new Tamagotchi();
    EXPECT_TRUE(tama->isHappy());
    tama->doSport();
    EXPECT_TRUE(tama->isHungry());
    EXPECT_FALSE(tama->isHappy());
    tama->giveFood();
    EXPECT_TRUE(tama->isSleepy());
    tama->sleep();
    EXPECT_TRUE(tama->isHappy());
}