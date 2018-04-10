/*  Maciej Szulik
    293159
    Wiktor Kuśmirek
    Project 2: Library
*/

#include "ItemInterface.h"
#include <iostream>

int ItemInterface::getID() const {
    return id_;
}
std::string ItemInterface::getName() const {
    return name_;
}

int ItemInterface::increaseCopies(int n) {
    num_of_copies_ += n;
    return num_of_copies_;
}
int ItemInterface::decreaseCopies(int n) {
    num_of_copies_ -= n;
    return num_of_copies_;
}

int ItemInterface::operator+ (int n) {
    return increaseCopies(n);
}

int ItemInterface::operator- (int n) {
    return decreaseCopies(n);
}

std::ostream& operator<< (std::ostream& stream, const ItemInterface& item ) {
    item.show(stream);
    return stream;
}
