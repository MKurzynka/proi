/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/

#ifndef LIBRARY_H
#define LIBRARY_H

#include "ItemInterface.h"
#include "Item.h"

#include <vector>
#include <string>

class Library {
        std::vector<ItemInterface *> items_list_;
        int id_; //  the id of the last added book
    public:
        Library();
        ~Library();
        template <typename T> int addItem(std::string name, std::string author, int num_of_copies, T num_of_pages) // adds a new item to the list with a specific type
        {
            id++;
            Item<T>* new_item = new Item<T>(id, name, author,num_of_copies, num_of_pages);
            items_list_.push_back(new_item);
            return id_;
        }
        void removeItem(int id); // removes the item with id passed as the parameter 
        int increaseCopies(int id, int n); // increases the number of copies of the item with id passes as the parameter by n
        int decreaseCopies(int id, int n); // decreases the number of copies of the item with id passes as the parameter by n
        void showItems(); // shows all items stored in the items_list_
        void showItems(std::string name); // shows items stored in the items_list_ with the specific name passed as the parameter
        ItemInterface * findItemPointerByID(int id); // returns the pointer to the item with specific id passes as the parameter
        std::vector<ItemInterface *> findItems(std::string name); // returns a vector of pointers to items with the specific name passes as the parameter 
        std::vector<ItemInterface *>::iterator findItemIteratorByID(int id); // returns an iterator of the item with the specific id stored in items_list_
};
#endif // LIBRARY_H
