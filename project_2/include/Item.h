#ifndef ITEM_H
#define ITEM_H
#include "ItemInterface.h"
#include <string>
#include <iostream>

template <typename T> class Item : public ItemInterface
{
    private:
        T num_of_pages_;
    public:
        Item(int id, std::string name, std::string author, int num_of_copies, T num_of_pages) : ItemInterface(id, name, author, num_of_copies), num_of_pages_(num_of_pages) {};
        ~Item() {};
        void show(std::ostream& stream) const {
            stream<<"________________________________________________\n";
            stream<<"ID: "<<id_<<"\nname: "<<name_<<"\nauthor: "<<author_<<"\nNumber of copies: "<<num_of_copies_<<"\nNumber of pages: "<<num_of_pages_<<'\n';
        }
};
#endif // ITEM_H
