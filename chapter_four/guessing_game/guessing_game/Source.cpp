#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

using namespace std;

int main(){
	int rand_num = 0,guess_num=0;
	/* initialize random seed: */
	srand(time(NULL));

	/* generate secret number between 1 and 100: */
	rand_num = rand() % 100 + 1;

	cout << "Try and guess my number." << endl;
	while (rand_num != guess_num){
		cin >> guess_num;
		if (rand_num > guess_num){
			cout << "Your guess is to low" << endl;
		}
		if (rand_num < guess_num){
			cout << "Your guess is to high" << endl;
		}
	}
	cout << "You won!!!" << endl;
	system("PAUSE");
}