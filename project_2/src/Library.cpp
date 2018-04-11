/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/


#include "Library.h"
#include <iostream>

Library::Library() {
   id=0;
}

Library::~Library() {
    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
        delete (*it);
    }
}

void Library::removeItem(int id) {
    std::vector<ItemInterface *>::iterator index = findItemIteratorByID(id);
    if (index != items_list_.end()) { // index == .end() means the element was not found
        items_list_.erase(index);
    }
}

int Library::increaseCopies(int id, int n) {
    ItemInterface *item = findItemPointerByID(id);
    if(item==NULL) {
        return -1;
    }
    return (*item)+n;
}

int Library::decreaseCopies(int id, int n) {
    ItemInterface *item = findItemPointerByID(id);
    if(item==NULL) {
        return -1;
    }
    return (*item)-n;
}

void Library::showItems() {
    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
        std::cout << (*(*it));
    }
}

void Library::showItems(std::string name) {
    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
            if((*it)->getName()==name) {
                std::cout << (*(*it));
            }
    }
}

std::vector<ItemInterface*>::iterator Library::findItemIteratorByID(int id) {
    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
          if(id==(*it)->getID()) {
              return it;
          }
    }
    return items_list_.end();
}


ItemInterface* Library::findItemPointerByID(int id) {
    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
        if(id==(*it)->getID()) {
            return (*it);
        }
    }
    return NULL;
}

std::vector<ItemInterface *> Library::findItems(std::string name) {

    std::vector <ItemInterface*> tmp = {};

    for(auto it = items_list_.begin(); it != items_list_.end(); it++) {
        if(name==(*it)->getName()) {
            tmp.push_back((*it));
        }
    }

    return tmp;
}

