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
void push_back_mass_to_vec_sort(std::vector<int>& vec, int* mass, int mass_size) { 
	//в интернете прочитал, что отловить ошибку выхода за границы массива
	//отловить и обрабоать это отдельная нетривиальная задача, поэтому тут обработки такого случая нет
	for (int i = 0; i < mass_size; i++) {
		vec.push_back(mass[i]);
	}
	std::sort(vec.begin(), vec.end());
}
void null_low_vec(std::vector<int>& vec, int a) {
	for (auto i = vec.begin(); i < vec.end(); i++) {
		if (*i < a) { *i = 0; }
	}
}
std::vector<int> elem_higer_vec(std::vector<int> vec, int a) {
	std::vector<int> res;
	for (auto i = vec.begin(); i < vec.end(); i++) {
		if (*i > a) { res.push_back(*i); }
	}
	return res;
}
void blend_vec(std::vector<int> &vec) {
	srand(time(0));
	for (auto i = vec.begin(); i < vec.end(); i++) {
		auto x = vec.begin() + rand() % (vec.begin() - vec.end() + 1);
		int c = *x;
		*x = *i;
		*i = c;
	}
}
//for (auto i = vec.begin(); i < vec.end(); i++) { std::cout << *i << " "; }
