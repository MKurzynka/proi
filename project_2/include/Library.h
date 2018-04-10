#ifndef LIBRARY_H
#define LIBRARY_H

#include "ItemInterface.h"
#include "Item.h"

#include <vector>
#include <string>

class Library
{
    private:
        std::vector<ItemInterface *> items_list_ = {};
        int id = 0;
    public:
        ~Library();
        template <typename T> int addItem(std::string name, std::string author, int num_of_copies, T num_of_pages)
        {
            id++;
            Item<T>* new_item = new Item<T>(id, name, author,num_of_copies, num_of_pages);
            items_list_.push_back(new_item);
            return id;
        }
        void removeItem(int id);
        int increaseCopies(int id, int n);
        int decreaseCopies(int id, int n);
        void showItems();
        void showItems(std::string name);
        ItemInterface * findItemByID(int id);
        std::vector<ItemInterface *> findItems(std::string name);
};
#endif // LIBRARY_H
