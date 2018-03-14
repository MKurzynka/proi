#ifndef HASHARRAY_H
#define HASHARRAY_H
#include <vector>

class HashArray
{
	std::vector<int> arr;
	int hash(int);
	void increase();
	void decrease();
public:
	bool add(int);//True means success (number was not in array)
	bool add(std::vector<int>);//True means all numbers were added
	bool remove(int);//True means success (number was in array)
	bool remove(std::vector<int>);//True means all numbers were removed
	bool contain(int);
	void show();
	HashArray& operator++();
	HashArray& operator--();
};
#endif // HASHARRAY_H
