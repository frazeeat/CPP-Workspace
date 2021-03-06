#include <iostream>
#include <algorithm>
#include <vector>
#include "game.h"

std::vector<int> combo_vector(int a, int b, int c, int d){
	//Creates a vector from four ints written in.
	//We are going to assume that the numbers will always be
	// between 0 and 9.
	std::vector<int> combo{ d, c, b, a };
	return combo;
}

int game_input(){
	int a = 0;
	while (!(std::cin >> a) || a<0 || a>9){
		std::cout << "Invaild entry, enter a number between 0 and 9." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return a;
}

int compare_pos_and_num(std::vector<int> a, std::vector<int> b){
	int pos_num = 0;
	for (int i = 0; i < a.size(); i++){
		if (a[i] == b[i]){
			pos_num++;
		}
	}
	return pos_num;
}

/*int compare_num(std::vector<int> a, std::vector<int> b){
int pos_num = 0, temp = -1;

for (int i = 0; i < a.size(); i++){
if (a[i] != b[i] && a[i] != temp){
if (std::find(b.begin(), b.end(), a[i]) == b.end()){
}
else{
pos_num++;
temp = a[i];
}
}
else{
pos_num--;
temp = -1;
}
}
if (pos_num < 0){
return 0;
}
return pos_num;

}*/

int compare_num(std::vector<int> a, std::vector<int> b){
	int pos_num = 0;
	std::vector<int> c, d; // a is c and b is d
	for (int i = 0; i < a.size(); i++){
		if (a[i] != b[i]){
			c.push_back(a[i]);
			d.push_back(b[i]);
		}
	}
	for (int j = 0; j < c.size(); j++){
		if (std::find(d.begin(), d.end(), c[j]) == d.end()){
		}
		else{
			pos_num++;
			d.erase(std::remove(d.begin(), d.end(), c[j]), d.end());
		}
	}
	return pos_num;
}


