#include <iostream>
using namespace std;
int main() {
	string user_name, password;
	string correctname = "haram";
	string correctpassword = "haram123";
	int attempts;
	cout << "Welcome to Login System" << endl;
	for ( attempts = 0; attempts < 3; attempts++) {
		cout << "Enter Username ...... ";
		cin >> user_name;
		cout << "User Password .....";
		cin >> password;
		if (user_name == correctname && password == correctpassword) {
			cout << "Login Successful! You Entered Correct UserName and Password";
			break;
		}
		else {
			cout << "\nYou Entered incorrect UserName and Password"<<endl;
			
		}
		
	}
	if (attempts == 3)
	{
		cout << "Too many failed attempts. Accout locked!" << endl;
	}
}

