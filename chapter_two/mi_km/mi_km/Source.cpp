#include <iostream>
using namespace std;

int main(){
	
	while (true){
		double miles = 0.0;
		double conversion = 1.609;
		double km = 0.0;
		cout << "Enter in miles to get km" << endl;

		cin >> miles;
		km = miles*conversion;
		cout << km << endl;
	}
	system("PAUSE");
	return 0;
}