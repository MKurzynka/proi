#ifndef HASHARRAYUI_H
#define HASHARRAYUI_H
#include "../include/HashArray.hpp"
#include <vector>
void showMenu(HashArray&);
void add(HashArray&);
void addMany(HashArray&);
void remove(HashArray&);
void removeMany(HashArray&);
void contain(HashArray&);
void showActionResult(bool);
std::vector<int> getVector(int);
#endif // HASHARRAYUI_H
