#include "pch.h"
#include "../src/Calculator.hh"

TEST(TestAdd, TestPositive) {
	Calculator calc;
	ASSERT_EQ(3, calc.do_operation(calc.add, 1, 2));
}
TEST(TestAdd, TestNegative) {
	Calculator calc;
	ASSERT_EQ(-3, calc.do_operation(calc.add, -1, -2));
}

TEST(TestAdd, TestAddByZero) {
	Calculator calc;
	ASSERT_EQ(-1, calc.do_operation(calc.add, -1, 0));
}

TEST(TestSubtract, TestPositive) {
	Calculator calc;
	ASSERT_EQ(3, calc.do_operation(calc.subtract, 5, 2));
}
TEST(TestSubtract, TestNegative) {
	Calculator calc;
	ASSERT_EQ(1, calc.do_operation(calc.subtract, -1, -2));
}

TEST(TestSubtract, TestSubtractByZero) {
	Calculator calc;
	ASSERT_EQ(-1, calc.do_operation(calc.subtract, -1, 0));
}

TEST(TestMultiply, TestPositive) {
	Calculator calc;
	ASSERT_EQ(25, calc.do_operation(calc.multiply, 5, 5));
}
TEST(TestMultiply, TestNegative) {
	Calculator calc;
	ASSERT_EQ(25, calc.do_operation(calc.multiply, -5, -5));
}
TEST(TestMultiply, TestMultiplyByZero) {
	Calculator calc;
	ASSERT_EQ(0, calc.do_operation(calc.multiply, 5, 0));
}
TEST(TestDivide, TestPositive) {
	Calculator calc;
	ASSERT_EQ(1, calc.do_operation(calc.divide, 5, 5));
}
TEST(TestDivide, TestNegative) {
	Calculator calc;
	ASSERT_EQ(1, calc.do_operation(calc.divide, -5, -5));
}
TEST(TestDivide, TestDivideByZero) {
	Calculator calc;
	ASSERT_EQ(0, calc.do_operation(calc.divide, 5, 0));
}
TEST(TestModulo, TestPositive) {
	Calculator calc;
	ASSERT_EQ(0, calc.do_operation(calc.modulo, 5, 5));
}
TEST(TestModulo, TestNegative) {
	Calculator calc;
	ASSERT_EQ(0, calc.do_operation(calc.modulo, -5, -5));
}
TEST(TestModulo, TestModuloByZero) {
	Calculator calc;
	ASSERT_EQ(0, calc.do_operation(calc.modulo, 5, 0));
}