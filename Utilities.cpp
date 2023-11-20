//
// Created by mauricio on 11/19/23.
//

#include "Utilities.h"
void enter() {
    cout<< "Preciona enter para continuar...";
#ifdef _WIN32
    system("pause");
#elif __linux__
    std::cout << std::flush;
    cin.get();
#endif
}

void clean() {
#ifdef _WIN32
    std::system("cls");
#elif __linux__
    // Assume POSIX
    //enter();
    std::system ("clear");
#endif
}

void clear() {
    cin.clear();
    cin.ignore(1024, '\n');
}

void ignoreCin() {
    cin.ignore(); // opcion para evitar error en getlines
}

