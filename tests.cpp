//
// Created by martas on 22.07.18.
//

#include "whattotest.h"
#include <gtest/gtest.h>

TEST(WektorTest, WektorTest_WektorDefaultConstructor_Test ) {
    Wektor wektor;
    EXPECT_EQ(1, wektor.getX());
    EXPECT_EQ(1, wektor.getY());
    EXPECT_DOUBLE_EQ(std::sqrt(2.), wektor.getLength());

}

TEST(WektorTest, WektorTest_WektorConstructorWithValues_Test) {
    Wektor wektor(5, 1);
    EXPECT_EQ(5, wektor.getX());
    EXPECT_EQ(1, wektor.getY());
    EXPECT_DOUBLE_EQ(std::sqrt(26.), wektor.getLength());

}
TEST(WektorTest, sumaXY_test){
    Wektor wektor(1,1);
    EXPECT_EQ(2, wektor.sumaXY());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}