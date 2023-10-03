#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() 
{
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() 
{
	int x;
	long factorial = 1.0;

	cout << "Enter a Positive Number: ";
	cin >> x;

	if (x < 0) 
	{
		cout << "Error! Must Be a Positive Number. Enter Postive Number.";
		cin >> x;
	}
	else 
	{
		for (int i = 1; i <= x; ++i) //loops the factorial until the number of loops equal x
		{ 
			factorial *= i;

			cout << i;

			if (i < x)  // outputs a * symbol while i is less than x
			{
				cout << " * ";
			}
		}
		cout << " = " << factorial << endl;
	}
} // need to loop when number is negative and show the equation
void arithmetic()
{
	int AP = 0; // AP = arithemtic process
	int s;
	int a;
	int e;
	int sum = 0;
	int sum2 = 0;
	cout << "Enter a number to start at: ";
	cin >> s; // s = start
 	cout << "Enter a number to add each time: ";
	cin >> a; // a = add
	cout << "Enter the number of elements in the series: ";
	cin >> e; // e = elements
	cout << s << " + ";
	AP = AP + s; // Starts AP as the value of s
	sum = sum + AP; // Adds AP to sum to get s into the sum
	for (int i = 1; i < e; ++i) 
	{
		AP = AP + a; // A to be added to AP and stores the value for the next loop
		cout << AP;
		sum = sum + AP; //Stores the value of each AP into a single sum

		if (i < (e - 1)) // add a plus after if i is less than e - 1
		{
			cout << " + ";
		}
	}
	cout << " = " << sum << endl;
	cout << "The Answer: " << sum;
}
void geometric() 
{
	int s;
	int m;
	int e;
	float i;
	int sum = 0;
	float sum2;
	cout << "Enter a number to start at: ";
	cin >> s; // s = start
	cout << "Enter a number to multiply by each time: ";
	cin >> m; // m = multiply
	cout << "Enter the number of elements in the series: ";
	cin >> e; // e = elements
	cout << s << " + ";
	for (int i = 1; i < e; ++i) // keeps looping until i equals the number of elements in the series
	{
		sum2 = s * pow(m, i); // gets s to be multiplied by m to whatever numeber i equals
		cout << sum2;

		if (i < (e - 1)) // outputs a + symbol until i is less than e - 1
		{
			cout << " + ";
		}

		sum = sum + sum2; // stores the value of sum 2 into one place
	}
	cout << " = " << sum + s; // sum + the starting number
}
int main() 
{
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << endl << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}