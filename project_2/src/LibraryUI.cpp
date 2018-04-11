/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/


#include "LibraryUI.h"
#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

LibraryUI::LibraryUI(Library& lib) : library_(lib) {};

LibraryUI::~LibraryUI() {}
void LibraryUI::run() {
    int action_choice = 0;
    while (1)
    {
      cout << "Choose what you would like to do:" << endl;
      cout << "0. Exit" << endl;
      cout << "1. Add item" << endl;
      cout << "2. Remove item" << endl;
      cout << "3. Show items" << endl;
      cout << "4. Show items by name" << endl;
      cout << "5. Increase number of copies of the book" << endl;
      cout << "6. Decrease number of copies of the book" << endl;
      cin >> action_choice;
      switch (action_choice)
      {
      case 0:
        return;
        break;
      case 1:
        addItem();
        break;
      case 2:
        removeItem();
        break;
      case 3:
        show();
        break;
      case 4:
        showByName();
        break;
      case 5:
        increaseCopies();
        break;
      case 6:
        decreaseCopies();
        break;
      }
    }
}

void LibraryUI::show() {
    library_.showItems();
}

void LibraryUI::showByName() {
    string name;
    cout<<"Type in a name: ";
    cin>>name;
    library_.showItems(name);
}

void LibraryUI::addItem() {
    bool type;
    string name, author;
    int num_of_pages, num_of_copies;
    cout<<"Does the book have more than 255 pages? (0 - no, 1 - yes): ";
    cin>>type;
    cout<<"Name: ";
    cin>>name;
    cout<<"Author: ";
    cin>>author;
    cout<<"Number of copies: ";
    cin>>num_of_copies;
    cout<<"Number of pages: ";
    cin>>num_of_pages;
    if(type) {
        library_.addItem<unsigned short int>(name, author, num_of_copies ,num_of_pages);
    } else {
        library_.addItem<uint8_t>(name, author, num_of_copies, num_of_pages);
    }
}

void LibraryUI::removeItem() {
    int id;
    cout<<"Id: ";
    cin>>id;
    library_.removeItem(id);
}

void LibraryUI::increaseCopies() {
    int id, n;
    cout<<"Id: ";
    cin>>id;
    cout<<"Increase the number of copies by: ";
    cin>>n;
    library_.increaseCopies(id,n);
}

void LibraryUI::decreaseCopies() {
    int id, n;
    cout<<"Id: ";
    cin>>id;
    cout<<"Decrease the number of copies by: ";
    cin>>n;
    library_.decreaseCopies(id,n);
}
