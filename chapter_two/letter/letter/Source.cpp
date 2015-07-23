#include <iostream>
#include <string>


using namespace std;

int main(){
	string first_name;
	string  friend_name;
	char friend_sex = 0;
	string a = "";
	int age = 0;

	cout << "please type your friends first name" << endl;
	cin >> first_name;
	cout << "Dear " << first_name<<","<<  endl;
	cout << "    I hope you are doing well.";
	cout << " Also that this letter finds you in good health.";
	cout << " Please enter the name of out mutual friend." << endl;
	cin >> friend_name;
	cout << " Have you seen " << friend_name << " lately?";
	cout << " Are they m or f?" << endl;
	cin >> friend_sex;
	if (friend_sex == 'm'){
		a = "him";
	}
	else{
		a = "her";
	}
	cout << "If you see " << friend_name << " please ask " << a << " to call me ";
	cout << "How old are you again?" << endl;
	cin >> age;
	if (age <= 0 || age >= 110){
		cout << "You're kidding me" << endl;
	}
	if (age <= 12){
		cout << "Next year you will be " << age + 1 << endl;
	}
	if (age == 17){
		cout << "Next year you will be able to vote.";
	}
	if (age >= 70){
		cout << "How are you enjoying retirement?" << endl;
	}
	else{
		cout << "Thanks for telling me you are " << age << endl;
	}
	system("PAUSE");
	return 0;
}