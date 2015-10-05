#include <stdlib.h>
#include<list>
#ifndef MAIN_H_
#define MAIN_H_

std::list<int> mergesort(std::list<int>& list_a);
std::list<int> merge(std::list<int>& a, std::list<int>& b);
std::list<int> random_list();
std::list<int> input_list();

#endif