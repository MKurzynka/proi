/*
Maciej Szulik
293159
Wiktor Kusmirek
Project 2(1) - Hash Array based on vector
*/

//SOURCE FILE FOR: HashArray class methods definitions

#include "../include/HashArray.hpp"
#include <iostream>
using namespace std;

int HashArray::hash(int n)
{
	return n % 997;//simple hashing method
}
void HashArray::increase()
{
	for (auto it = arr.begin(); it != arr.end(); ++it)
		(*it)++;
}

void HashArray::decrease()
{
	for (auto it = arr.begin(); it != arr.end(); ++it)
		(*it)--;
}

bool HashArray::add(int n)
{
	if (contain(n))//check if number is in the array
		return false;//if is -> not add it and return false
	arr.push_back(hash(n));
	return true;
}

bool HashArray::add(vector<int> v)
{
	bool check_if_all_ok = true;
	for (auto el : v)
		if (!add(el))//if number could not be added -> set temporary variable as false
			check_if_all_ok = false;
	return check_if_all_ok;//if every number was added -> variable is true
}

bool HashArray::remove(int n) {
	int tmp_hash = hash(n);
	for (auto it = arr.begin(); it != arr.end(); ++it)
		if (*it == tmp_hash)//looking for number to be removed
		{
			arr.erase(it);
			return true;
		}
	return false; //number was not found in array
}

bool HashArray::remove(vector<int> v)
{
	bool check_if_all_ok = true;
	for (auto el : v)
		if (!remove(el))//if some number was not in array -> set variable as false
			check_if_all_ok = false;
	return check_if_all_ok;//if every number was removed -> variable is true
}

bool HashArray::contain(int n)
{
	int tmp_hash = hash(n);
	for (auto el : arr)
		if (el == tmp_hash)
			return true;
	return false;
}

void HashArray::show()
{
	cout << "Array contains: " << endl;
	for (auto el : arr)
		cout << el << endl;
}

HashArray& HashArray::operator++()
{
	increase();
	return *this;
}

HashArray& HashArray::operator--()
{
	decrease();
	return *this;
}



