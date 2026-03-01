// Smart student Calculator Sustem 
// Calcultes the total, average, percentage and grade using user input, varaibles, and arithmetic operators.
#include <iostream>
#include <string>

using namespace std;
int subject(string name, int choose) {
	int subj , Total_Marks;
	int sum = 0;
	double average = 0;
	if (choose < 1 || choose > 4) {
		cout << "\nInvalid choice! Please enter 1 to 4.\n";
		return 0;
	}
	cout << "How many subject do you have? ";
	cin >> subj;
	int* marks = new int[subj];
	for (int i = 0; i < subj; i++) {
		cout << "Enter marks for subject " << i + 1 << ": ";
		cin >> marks[i];
		sum += marks[i];		
	}
	if (choose == 1) {
		cout << name << " Your total sum of " << subj << " subject is " << sum;
	}
	else if (choose == 2) {

		double average = sum /(double) subj;
		cout << name << " Your average of " << subj << " subject is " << average;

	}
	else if (choose == 3) {
		cout << "Your Obtained Marks is " << sum << endl;
		cout << "Enter your Total_Marks of all " << subj << " subject is ";
		cin >> Total_Marks;
		if (Total_Marks > sum) {
			double percentage = ((double)sum / Total_Marks) * 100;
			cout << name << " Your percentage of " << subj << " subject is " << percentage;
		} else if (choose == 4){
			cout << "You Entered wrong " << subj << "Subject Total Marks ";
		} else{
			cout << "\nInvalid choice! Please enter 1 to 4.\n";
		}
		
	}
	else {
		cout << "Your Obtained Marks is " << sum <<endl;
		cout << "Now Enter your Total_Marks of all subject is ";
		cin >> Total_Marks;
		if (Total_Marks > sum) {
			double percentage = ((double)sum / Total_Marks) * 100;
			int gradeCategory = percentage / 10;  

			switch (gradeCategory) {
			case 10:
			case 9:
				cout << "Grade: A+" << endl;
				break;

			case 8:
				cout << "Grade: A" << endl;
				break;

			case 7:
				cout << "Grade: B" << endl;
				break;

			case 6:
				cout << "Grade: C" << endl;
				break;

			case 5:
				cout << "Grade: D" << endl;
				break;

			default:
				cout << "Grade: F (Fail)" << endl;
			}

			
		}
		else {
			cout << "You Entered wrong " << subj << "Subject Total Marks ";
		}
	}
	delete[] marks;
	return sum;
}
int main() {
	string name;
	int choose;
	int sum = 0;
	char again = 'y';

	while (again == 'y' || again == 'Y')
	{
		cout << "Welcome to calculator. What is your name? ";
		cin >> name;
		cout << "Hi " << name << "! what you want \n Enter 1 for Total of your  marks. \n Enter 2 for Average of your marks. \n Enter 3 for Percentage of your marks. \n Enter 4 for Grade of your marks.\n";
		cin >> choose;

		subject(name, choose);
		cout << "\nDo you want to calculate again? (y/n): ";
		cin >> again;
	}
	return 0;
}
