/*  
    Maciej Szulik
    293159
    Wiktor Kusmirek
    Project 2: Library
*/

#include <iostream>
#include <LibraryUI.h>
#include <Library.h>

using namespace std;

int main()
{
    Library lib = Library();
    LibraryUI ui = LibraryUI(lib);
    ui.run();
    return 0;
}
