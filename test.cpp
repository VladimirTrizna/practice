

#include "pch.h"
#include "../proba/function.h"

TEST(Test1, FInterY) {
  EXPECT_DOUBLE_EQ(-0.07407407407407407, FInterY(4, 5, 6, 1, 8, 2));
  EXPECT_DOUBLE_EQ(-14, FInterY(6, 2, 33, 12, 0, 10));
  EXPECT_DOUBLE_EQ(8.0723981900452486, FInterY(12, 1, 44, 43, 22, 9));
}

TEST(Test2, FInterX) {
	EXPECT_DOUBLE_EQ(-1.4074074074074074, FInterX(4, 5, 6, 1, 8, 2));
	EXPECT_DOUBLE_EQ(-0.83333333333333337, FInterX(6, 2, 33, 12, 0, 10));
	EXPECT_DOUBLE_EQ(-4.3393665158371038, FInterX(12, 1, 44, 43, 22, 9));
}

TEST(Test3, FRad) {
	EXPECT_DOUBLE_EQ(5, FRad(10, 2));
	EXPECT_DOUBLE_EQ(9.2307692307692299, FRad(120, 13));
	EXPECT_DOUBLE_EQ(5, FRad(15, 3));
}

TEST(Test4, FHeigh) {
	EXPECT_DOUBLE_EQ(6, FHeig(30, 10));
	EXPECT_DOUBLE_EQ(4.7999999999999998, FHeig(36, 15));
	EXPECT_DOUBLE_EQ(-70, FHeig(350, -10));
}

TEST(Test5, FMed) {
	EXPECT_DOUBLE_EQ(8.6602540378443873, FMed(10, 10, 10));
	EXPECT_DOUBLE_EQ(7.5498344352707498, FMed(10, 8, 10));
	EXPECT_DOUBLE_EQ(8.8459030064770658, FMed(7, 10, 9));
}

TEST(Test6, FAngle) {
	EXPECT_DOUBLE_EQ(60.000000000000007, FAngle(10, 10, 10));
	EXPECT_DOUBLE_EQ(7.0356236397351442, FMed(10, 7, 10));
	EXPECT_DOUBLE_EQ(7.2111025509279782, FMed(8, 6, 10));
}

TEST(Test7, FDist) {
	EXPECT_DOUBLE_EQ(20.615528128088304, FDist(-10, 15, 10, 20));
	EXPECT_DOUBLE_EQ(11.180339887498949, FDist(12, 7, 10, 18));
	EXPECT_DOUBLE_EQ(24.083189157584592, FDist(-8, -6, -10, -30));
}
