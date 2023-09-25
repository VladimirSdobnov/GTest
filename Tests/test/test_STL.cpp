#include "../STL/STL.h"
#include "../qtest/gtest.h"

TEST(test_add, not_null_vec) {
	// Arrange
	std::vector<int> a, res;
	int c = 8;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	res = { 9, 10, 11, 12, 13, 14};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), res);
}
TEST(test_add, null_vec) {
	// Arrange
	std::vector<int> a, res;
	int c = 8;
	res = {};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), res);
}
TEST(test_add, not_elem) {
	// Arrange
	std::vector<int> a, res;
	for (int i = 0; i < 15; i++) {
		a.push_back(i);
	}
	int c = 20;
	res = {};
	// Act
	// Assert
	EXPECT_EQ(elem_higer_vec(a, c), res);
}

