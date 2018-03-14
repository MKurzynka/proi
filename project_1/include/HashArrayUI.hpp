/*
Maciej Szulik
293159
Wiktor Kusmirek
Project 2(1) - Hash Array based on vector
*/

//HEADER FILE FOR: Functions required for handling HashArray class via text UI

#ifndef HASHARRAYUI_H
#define HASHARRAYUI_H
#include "../include/HashArray.hpp"
#include <vector>
void showMenu(HashArray&);//displays possible actions to be made on HashArray passed as parameter
void add(HashArray&);//handles adding one number to array
void addMany(HashArray&);//handles adding many numbers to array
void remove(HashArray&);//handles removing one number from array
void removeMany(HashArray&);//handles removing many numbers from array
void contain(HashArray&);//handles checking if array contains number
void showActionResult(bool);//handles showing action result when some function returns bool
std::vector<int> getVector(int);//handles typing in multiple numbers to be removed or added, n - number of numbers, returns vector of entered numbers
#endif // HASHARRAYUI_H
