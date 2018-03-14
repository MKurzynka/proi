/*
Maciej Szulik
293159
Wiktor Kusmirek
Project 2(1) - Hash Array based on vector
*/

//HEADER FILE FOR: HashArray class

#ifndef HASHARRAY_H
#define HASHARRAY_H
#include <vector>

class HashArray
{
	std::vector<int> arr;
	int hash(int);//handles hashing number
	void increase();//handles increasing all hashes by 1
	void decrease();//handles decreasing all hashes by 1
public:
	bool add(int);//handles adding new one number, returning true means success (number was not in array)
	bool add(std::vector<int>);//handles adding many numbers, returning true means all numbers were added
	bool remove(int);//handles removing one number, returning true means success (number was in array)
	bool remove(std::vector<int>);//handles removing many numbers, returning true means all numbers were removed
	bool contain(int);//handles checking if number is contained in array
	void show();//show content of array
	HashArray& operator++();//handles increasing all hashes by 1
	HashArray& operator--();//handles decreasing all hashes by 1
};
#endif // HASHARRAY_H
