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
    LibraryUI* ui = new LibraryUI(new Library);
    ui->run();
    delte ui;
    return 0;
}
