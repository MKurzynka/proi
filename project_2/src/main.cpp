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
