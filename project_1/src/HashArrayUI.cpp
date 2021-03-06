/*
Maciej Szulik
293159
Wiktor Kusmirek
Project 2(1) - Hash Array based on vector
*/

//SOURCE FILE FOR: Functions required for handling HashArray class via text UI

#include <iostream>
#include "../include/HashArray.hpp"
#include "../include/HashArrayUI.hpp"

using namespace std;


void showMenu(HashArray& arr) //displays possible actions to be made on HashArray passed as parameter
{
	int action_choice = 0;
	while (1)
	{
		cout << "Choose what you would like to do:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Add number" << endl;
		cout << "2. Add many numbers" << endl;
		cout << "3. Remove number" << endl;
		cout << "4. Remove many numbers" << endl;
		cout << "5. Check if array contains number" << endl;
		cout << "6. Show array" << endl;
		cout << "7. Increase array elements by 1" << endl;
		cout << "8. Decrease array elements by 1" << endl;
		cin >> action_choice;
		switch (action_choice)
		{
		case 0:
			return;
			break;
		case 1:
			add(arr);
			break;
		case 2:
			addMany(arr);
			break;
		case 3:
			remove(arr);
			break;
		case 4:
			removeMany(arr);
			break;
		case 5:
			contain(arr);
			break;
		case 6:
			arr.show();
			break;
		case 7:
			++arr;
			break;
		case 8:
			--arr;
			break;
		}
	}
}
void add(HashArray& arr) //handles adding one number to array
{
	int n;
	cout << "Please enter number to be added: ";
	cin >> n;
	showActionResult(arr.add(n));
}
void addMany(HashArray& arr) //handles adding many numbers to array
{
	int n;//number of numbers to be added
	cout << "Please enter how many numbers you would like to add:";
	cin >> n;
	showActionResult( arr.add( getVector(n) ) );
}
void remove(HashArray& arr)//handles removing one number from array
{
	int n;
	cout << "Please enter number to be removed: ";
	cin >> n;
	showActionResult( arr.remove(n) );
}
void removeMany(HashArray& arr)//handles removing many numbers from array
{
	int n;//number of numbers to be removed
	cout << "Please enter how many numbers you would like to remove:";
	cin >> n;
	showActionResult( arr.remove( getVector(n) ) );
}
void contain(HashArray& arr)//handles checking if array contains number
{
	int n;
	cout << "Please enter number you would like to check: ";
	cin >> n;
	cout << ((arr.contain(n)) ? "HashArray contains this number." : "HashArray does not contain this number.") << endl;
}
void showActionResult(bool res)//handles showing action result when some function returns bool
{
	cout << ((res) ? "Operation success." : "Operation failure.") << endl;
}

vector<int> getVector(int n)//handles typing in multiple numbers to be removed or added, n - number of numbers, returns vector of entered numbers
{
	vector<int> v;
	cout << "Enter numbers: ";
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	return v;
}
