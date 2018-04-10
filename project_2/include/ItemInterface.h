/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/

#ifndef ITEMINTERFACE_H
#define ITEMINTERFACE_H

#include <string>
#include <iostream>

class ItemInterface {
    protected:
        int id_;
        std::string name_;
        std::string author_;
        int num_of_copies_;
    public:
        ItemInterface(int id, std::string name, std::string author, int num_of_copies) : id_(id), name_(name), author_(author), num_of_copies_(num_of_copies) {};
        virtual ~ItemInterface() {};
        int getID() const;
        std::string getName() const;
        int increaseCopies(int n);
        int decreaseCopies(int n);
        int operator+ (int n);
        int operator- (int n);
        virtual void show(std::ostream& stream) const = 0;
        friend std::ostream& operator << (std::ostream& stream, const ItemInterface& item );

};

#endif // ITEMINTERFACE_H
