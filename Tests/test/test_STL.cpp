#include "../STL/STL.h"
#include "../qtest/gtest.h"

TEST(test_reand_vec, can_rand) {
	// Arrange
	std::vector<int> a;
	for (int i = 0; i < 37; i++) {
		a.push_back(i);
	}
	// Act
	// Assert
	ASSERT_NO_THROW(random_vec(a));
}
TEST(test_null_vec, can_null_hig_20) {
	// Arrange
	std::vector<int> a, b;
	for (int i = 0; i < 37; i++) {
		a.push_back(i);
	}
	for (int i = 0; i < 20; i++) {
		b.push_back(0);
	}
	// Act
	null_vec(a);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_null_vec, can_null_low_20) {
	// Arrange
	std::vector<int> a, b;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	for (int i = 0; i < 20; i++) {
		b.push_back(0);
	}
	// Act
	null_vec(a);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_null_low, can_null_low) {
	// Arrange
	std::vector<int> a, b;
	int c = 8;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 10, 11, 12, 13, 14 };
	// Act
	null_low_vec(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_min_max, can_min_max) {
	// Arrange
	std::vector<int> a;
	std::pair<int, int> res, true_res;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	// Act
	res = min_max_vec(a);
	true_res = { 0, 14 };
	// Assert
	EXPECT_EQ(res, true_res);
}
TEST(test_min_max, can_min_max2) {
	// Arrange
	std::vector<int> a;
	std::pair<int, int> res, true_res;
	for (int i = 0; i < 30; i++) {
		a.push_back(2 * i);
	}
	// Act
	res = min_max_vec(a);
	true_res = { 0, 58 };
	// Assert
	EXPECT_EQ(res, true_res);
}
TEST(test_min_max, can_min_max3) {
	// Arrange
	std::vector<int> a;
	std::pair<int, int> res, true_res;
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < 15; i++) {
		a.push_back(i * pow(-1, i) * 3);
		if (a[i] > max) { max = a[i]; }
		if (a[i] < min) { min = a[i]; }
	}
	// Act
	res = min_max_vec(a);
	true_res = { min, max };
	// Assert
	EXPECT_EQ(res, true_res);
}
TEST(test_higer, not_null_vec) {
	// Arrange
	std::vector<int> a, b;
	int c = 8;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = {9, 10, 11, 12, 13, 14};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), b);
}
TEST(test_higer, null_vec) {
	// Arrange
	std::vector<int> a, b;
	int c = 8;
	b = {};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), b);
}
TEST(test_higer, not_elem) {
	// Arrange
	std::vector<int> a, b;
	int c = 20;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = {};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), b);
}
TEST(test_add_sort, can_add_sort) {
	// Arrange
	std::vector<int> a, b;
	int mass[15];
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
		mass[i] = i * 2;
	}
	b = {0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10, 11, 12, 12, 13, 14, 14, 16, 18, 20, 22, 24, 26, 28};
	// Act
	push_back_mass_to_vec_sort(a, mass, 15);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_blend, can_blend) {
	// Arrange
	std::vector<int> a, b;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = a;
	// Act
	blend_vec(a);
	// Assert
	EXPECT_NE(a, b);
}
TEST(test_del_hig, can_del_hig_null_vec) {
	// Arrange
	std::vector<int> a = {}, b = {};
	int c = 6;
	// Act
	del_higer_vec(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_del_hig, can_del_hig_not_null_vec) {
	// Arrange
	std::vector<int> a, b;
	int c = 8;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	// Act
	del_higer_vec(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_func, can_func_odd) {
	// Arrange
	std::vector<int> a, b;
	int c = 9;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	// Act
	c = func_vec(a);
	// Assert
	EXPECT_EQ(a, b);
	EXPECT_EQ(c, 14);
}
TEST(test_func, can_func_even) {
	// Arrange
	std::vector<int> a, b;
	int c = 9;
	for (int i = 0; i < 16; i++) {
		a.push_back(i);
	}
	b = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	// Act
	c = func_vec(a);
	// Assert
	EXPECT_EQ(a, b);
	EXPECT_EQ(c, 16);
}
TEST(test_clear, can_clear) {
	// Arrange
	std::vector<int> a, b;
	for (int i = 0; i < 16; i++) {
		a.push_back(i);
	}
	b = {};
	// Act
	clear_vec(a);
	// Assert
	EXPECT_EQ(a, b);
}

TEST(test_add_mass_list, can_add_mass_list) {
	// Arrange
	std::list<int> a, b;
	int mass[15];
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
		mass[i] = i * 2;
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
	// Act
	add_mass_list(a, mass, 15);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_vec_n_list, can_vec_list_n_hig_size) {
	// Arrange
	std::list<int> a;
	std::vector<int> b;
	int n = 38;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3 };
	// Act
	// Assert
	ASSERT_ANY_THROW(n_vector_list(a, n));
}
TEST(test_vec_n_list, can_vec_list_n) {
	// Arrange
	std::list<int> a;
	std::vector<int> b, res;
	int n = 4;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3};
	// Act
	res = n_vector_list(a, n);
	// Assert
	EXPECT_EQ(b, res);
}
TEST(test_del_elem_list, can_del_elem_first) {
	// Arrange
	std::list<int> a, b;
	int c = 0;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	// Act
	del_elem_list(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_del_elem_list, can_del_elem_last) {
	// Arrange
	std::list<int> a, b;
	int c = 14;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	// Act
	del_elem_list(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_del_elem_list, can_del_elem) {
	// Arrange
	std::list<int> a, b;
	int c = 7;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14 };
	// Act
	del_elem_list(a, c);
	// Assert
	EXPECT_EQ(a, b);
}
TEST(test_del_elem_list, can_del_elem_hig_size) {
	// Arrange
	std::list<int> a, b;
	int c = 20;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	b = { 0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14 };
	// Act
	// Assert
	EXPECT_ANY_THROW(del_elem_list(a, c));
}
