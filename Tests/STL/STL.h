#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

void null_vec(std::vector<int> &vec);
void random_vec(std::vector<int>& vec);
std::pair<int, int> min_max_vec(const std::vector<int> vec);
void push_back_mass_to_vec_sort(std::vector<int>& vec, int* mass, int mass_size);
void null_low_vec(std::vector<int>& vec, int a);
std::vector<int> elem_higer_vec(std::vector<int> vec, int a);