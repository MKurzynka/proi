#include "../include/HashArray.hpp"
#include "../include/HashArrayUI.hpp"
#include <iostream>
using namespace std;

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

int HashArray::hash(int n)
{
	return n % 997;
}

bool HashArray::add(int n)
{
	if (contain(n))
		return false;
	arr.push_back(hash(n));
	return true;
}

bool HashArray::add(std::vector<int> v)
{
	bool check_if_all_ok = true;
	for (auto el : v)
		if (!add(el))
			check_if_all_ok = false;
	return check_if_all_ok;
}

bool HashArray::remove(int n) {
	int tmp_hash = hash(n);
	for (auto it = arr.begin(); it != arr.end(); ++it)
		if (*it == tmp_hash)
		{
			arr.erase(it);
			return true;
		}
	return false;
}

bool HashArray::remove(std::vector<int> v)
{
	bool check_if_all_ok = true;
	for (auto el : v)
		if (!remove(el))
			check_if_all_ok = false;
	return check_if_all_ok;
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
		std::cout << el << std::endl;
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



