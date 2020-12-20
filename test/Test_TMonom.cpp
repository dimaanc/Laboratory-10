#include "TMonom.h"
#include <gtest.h>

TEST(TMonom, can_create_monom)
{
	ASSERT_NO_THROW(TMonom a(new double[3]{ 2, 2, 1 }, 1, 1));
	ASSERT_NO_THROW(TMonom b(new double[3]{ 2, 2, 1 }, 1, 1));
	ASSERT_NO_THROW(TMonom c(new double[3]{ 2, 2, 1 }, 1, 1));
}

TEST(TMonom, can_copy_monom)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(TMonom b(a));
}

TEST(TMonom, can_assign_monom)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(TMonom b = a);
}

TEST(TMonom, can_compare_monom_operator_equally_and_not_equally)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom d(new double[3]{ 1, 2, 1 }, 1, 1);

	EXPECT_EQ(a == b, true);
	EXPECT_EQ(a != d, true);
}

TEST(TMonom, can_get_elem_data)
{
	TMonom a(new double[3]{ 1, 2, 3 }, 3, 1);

	EXPECT_EQ(a[2], 3);
}

TEST(TMonom, operator_multiplication)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom d(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(b * a);
}

TEST(TMonom, operator_division)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(a / b);
}

TEST(TMonom, operator_plus)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(a + b);
}

TEST(TMonom, operator_minus)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);

	ASSERT_NO_THROW(b - a);
}

TEST(TMonom, operator_more_less)
{
	TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
	TMonom d(new double[3]{ 3, 2, 3 }, 3, 3);

	EXPECT_EQ(a > b, false);
	EXPECT_EQ(d > b, false);
}
