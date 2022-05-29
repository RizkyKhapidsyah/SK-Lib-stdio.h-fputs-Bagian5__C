#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int rc = fputs("Manusia Biasa", stdout);

    if (rc == EOF) {
        perror("fputs()");
    }
 
    _getch();
    return 0;
}