#include "../STL/STL.h"
#include "../qtest/gtest.h"

TEST(test_add, can_min_max) {
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
TEST(test_add, can_min_max2) {
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
TEST(test_add, can_min_max3) {
	// Arrange
	std::vector<int> a;
	std::pair<int, int> res, true_res;
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < 17; i++) {
		a.push_back(i * pow(-1, i) * 3);
		if (a[i] < min) { min = a[i]; }
		if (a[i] > max) { max = a[i]; }
	}
	// Act
	res = min_max_vec(a);
	true_res = { min, max };
	// Assert
	EXPECT_EQ(res, true_res);
}

