#include "../STL/STL.h"
#include "../qtest/gtest.h"

TEST(test_add, can_blend) {
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


