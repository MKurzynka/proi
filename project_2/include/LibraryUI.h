#ifndef LIBRARYUI_H
#define LIBRARYUI_H

#include <string>
#include "Library.h"

class LibraryUI
{
    Library& library_;
    void show();
    void showByName();
    void addItem();
    void removeItem();
    void increaseCopies();
    void decreaseCopies();
    public:
        LibraryUI(Library* lib) : library_(*lib){};
        ~LibraryUI(){};
        void run();
};

#endif // LIBRARYUI_H
