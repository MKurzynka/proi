/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/


#ifndef LIBRARYUI_H
#define LIBRARYUI_H

#include <string>
#include "Library.h"

class LibraryUI {
      Library& library_;
      void show(); // shows all items stored in the library_
      void showByName(); // shows items with the name typed in by the user
      void addItem(); // asks the user for information about a new item and calls function adding it
      void removeItem(); // asks the user for id of the item to be removed and calls function removing it
      void increaseCopies(); // asks the user for necessary information to call function increasing number of copies
      void decreaseCopies(); // asks the user for necessary information to call function decreasing number of copies
    public:
        LibraryUI(Library& lib); // the parameter reffering to the library which ui will operate on 
        ~LibraryUI();
        void run(); // runs the menu enabling the user to choose actions
};

#endif // LIBRARYUI_H
