#include "STL.h"
void null_vec(std::vector<int> &vec) {
	int i = 0;
	while (i < vec.size()) {
		vec[i] = 0;
		i++;
	}
	if (vec.size() < 20) {
		while (i < 20) {
			vec.push_back(0);
			i++;
		}
	}
	else {
		while (i > 20) {
			vec.pop_back();
			i--;
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
void del_higer_vec(std::vector<int>& vec, int b) {
	for (auto i = 0; i < vec.size(); i++) {
		if (vec[i] > b) {
			vec.erase(vec.begin() + i);
			i--;
		}
	}
}
int func_vec(std::vector<int>& vec) {
	if (vec.size() % 2 == 1) {
		vec.pop_back();
		return vec.size();
	}
	else {
		for (int i = 0; i < vec.size() / 2; i++) {
			std::swap(vec[i], vec[vec.size() - i - 1]);
		}
		return vec.size();
	}
}
void clear_vec(std::vector<int>& vec) { vec.clear(); }

void add_mass_list(std::list<int>& list, int* mass, int mass_size) {
	for (int i = 0; i < mass_size; i++) {
		list.push_back(mass[i]);
	}
}
std::vector<int> n_vector_list(std::list<int>& list, int n) {
	if (n - 1 > list.size()) { throw 0; }
	else {
		std::vector<int> res;
		auto list_i = list.begin();
		for (int i = 0; i < n; i++) {
			res.push_back(*list_i);
			std::advance(list_i, 1);
		}
		return res;
	}
}
void del_elem_list(std::list<int> &list, int pos) {
	if (pos - 1 > list.size()) { throw 0; }
	else {
		auto i = list.begin();
		if(pos > 0){ 
			std::advance(i, pos);
			list.erase(i);
		}
		else { list.pop_front(); }
		
	}
}