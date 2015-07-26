#include <iostream>
#include "game.h"
#include <vector>
using namespace std;

int main(){
	cout << "Please enter your code." << endl;

	vector<int> game = combo_vector(game_input(), game_input(), game_input(), game_input());
	
	// Used to prove that it prints out correctly.
	/*for (int i = 0; i < game.size(); ++i){
		cout << game[i] << ' ';
	}*/
	cout << string(100, '\n');

	vector<int> game_guess;
	
	while (game != game_guess){
		cout << "Please guess the code. "<< endl;
		game_guess = combo_vector(game_input(), game_input(), game_input(), game_input());

		int bull =compare_pos_and_num(game, game_guess);
		int fox = compare_num(game, game_guess);
		cout << "You have " << bull << " with the correct value, and position" << endl;
		cout << "You have " << fox << " with just the correct value." << endl;
	}
	cout << "You cracked the code!!!" << endl;
	return 0;
}