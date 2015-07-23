#include <iostream>

using namespace std;

int main(){
	int correct_num = 0, num_guess=50;
	int i = 0, w = 0, range = 26;
	char response;;
	cout << "Enter a number between 1 and 100" << endl;
	cin >> correct_num;
	cout << "Now can I guess the number just by asking yes or no questions?" << endl;
	cout << "is your number bigger than " << num_guess << endl;
	while (cin >> response){
		
		if (response == 'y'){
			num_guess += range+w;
			range /= 2;
			i++;
		}
		if (response == 'n'){
			num_guess -= range+w;
			range /= 2;
			i++;
		}
		if (i == 5){
			w = 1;

		}
		if (i == 7){
			break;
		}
		cout << "is your number bigger than " << num_guess << endl;
	}
	cout << "is your number " << num_guess << endl;
	system("PAUSE");
}