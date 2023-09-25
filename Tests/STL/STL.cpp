#include "STL.h"
void null_vec(std::vector<int> &vec) {
	if (vec.size() < 20) {
		int i = 0;
		while (i < vec.size()) {
			vec[i] = 0;
			i++;
		}
		while (i < 20) {
			vec.push_back(0);
			i++;
		}
	}
	else {
		int i = 0;
		while (i < 20) {
			vec[i] = 0;
			i++;
		}
		while (i < vec.size()) {
			vec.pop_back();
		}
	}
}
void random_vec(std::vector<int>& vec) {
	srand(time(0));
	for (auto i = vec.begin(); i < vec.end(); i++) {
		*i = -100 + rand() % 201;
		std::cout << *i << " ";
	}
}
std::pair<int, int> min_max_vec(const std::vector<int> vec) {
	std::pair<int, int> res;
	auto i = vec.begin();
	res = { *i, *i };
	for (; i < vec.end(); i++) {
		if (*i < res.first) {
			res.first = *i;
		}
		if (*i > res.second) {
			res.second = *i;
		}
	}
	return res;
}