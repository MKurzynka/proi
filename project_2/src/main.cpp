/*  Maciej Szulik
    293159
    Wiktor Kuśmirek
    Project 2: Library
*/

#include <iostream>
#include <LibraryUI.h>
#include <Library.h>

using namespace std;

int main()
{
    LibraryUI ui(new Library);
    ui.run();
    return 0;
}
