#include <stdlib.h>
#include <list>
#include <string>
#include <iostream>
#include "main.h"
#include <time.h>       /* time */

int main(){
	std::list<int> return_list, list;
	std::string logic;
	std::list<int>::iterator it;
	std::cout << "Enter \"create\" - input a series of space seperated ints. Terminated by anyhthing other than a blank space or int. \n";
	std::cout << "Enter \"random\"- creates a randm sized array as well as random positve only data.\n";
	std::cin >> logic;

	if (logic == "create"){
		return_list = input_list();
	}
	if (logic == "random"){
		return_list = random_list();
	}
	std::cout << "The inut contains:";
	for (it = return_list.begin(); it != return_list.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	list = mergesort(return_list);

	std::cout << "The return contains:";
	for (it = list.begin(); it != list.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	bool flag = true;
	system("PAUSE");
	return 0;
}
std::list<int> input_list(){
	std::list<int> r_list;
	int a;
	while (std::cin >> a){
		r_list.push_back(a);
	}
	return r_list;


}

std::list<int> random_list(){
	std::list<int> list;
	srand(time(NULL));
	int rand_num = rand()%50;

	for (int i = 0; i < rand_num; i++){
		int push_num = rand() % 9999999;
		list.push_back(push_num);
	}
	return list;
}

std::list<int> mergesort(std::list<int> & list_a){
	std::list<int> left,right;
	std::list<int>::iterator it;
	int size = list_a.size();
	//spilt down to a certain size.
	it = list_a.begin();
	if (list_a.size() == 1){
		return list_a;
	}
	while (list_a.size() > 1){
		for (int i = 0; i < size / 2; i++){
			left.push_back(list_a.front());
			list_a.pop_front();
		}
		left = mergesort(left);
		right = mergesort(list_a);

		return merge(left,right);
	}


}

std::list<int> merge(std::list<int>& a ,std::list<int>& b){
	std::list<int> list_c;
	std::list<int>::iterator it_a, it_b;
	it_a = a.begin();
	it_b = b.begin();
	while (a.size() != 0 && b.size() != 0){
		if (a.front() < b.front()){
			list_c.push_back(a.front());
			a.pop_front();
		}
		else{
			list_c.push_back(b.front());
			b.pop_front();
		}
	}
	while (a.size() !=0){
		list_c.push_back(a.front());
		a.pop_front();
	}
	while (b.size() != 0){
		list_c.push_back(b.front());
		b.pop_front();
	}
	return list_c;
}
