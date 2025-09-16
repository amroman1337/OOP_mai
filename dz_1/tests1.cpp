#include <gtest/gtest.h>
#include "CPT.h"

// Тест для правильных ответов
TEST(ClosestPairTest, BasicCases) {
    EXPECT_EQ(closest_pair_tonum(10), std::make_pair(5, 4));
    EXPECT_EQ(closest_pair_tonum(30), std::make_pair(29, 20));
    EXPECT_EQ(closest_pair_tonum(50), std::make_pair(45, 36));
}

// Тест для слишком маленьких значений
TEST(ClosestPairTest, EdgeCases) {
    EXPECT_EQ(closest_pair_tonum(1), std::make_pair(0, 0));
    EXPECT_EQ(closest_pair_tonum(2), std::make_pair(0, 0));
}

// Тест для неправильных ответов 
TEST(ClosestPairTest, WrongAnswers) {
    EXPECT_EQ(closest_pair_tonum(20), std::make_pair(13, 12));
    EXPECT_EQ(closest_pair_tonum(40), std::make_pair(99, 99));
}

// Тест для неправильных аргументов функции 
TEST(ClosestPairTest, WrongArguments) {
    EXPECT_EQ(closest_pair_tonum(-10), std::make_pair(5, 4));
    EXPECT_EQ(closest_pair_tonum(0000), std::make_pair(45, 36));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}