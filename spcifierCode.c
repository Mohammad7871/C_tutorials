#include <stdio.h>
int main (){

    // data Stroage in C
    // Data types in C
    // int, float, double, char, void

    // variable --> it can be change   
    // it is container where data is store in memmoer ,, 
    //and other 
    // Costant variable --> it will remain same throughtout the program


    // Keywords in c ----> there is 32 Kewword in C that we cant use in our program for our purpos like int, do , while ,,, use means we cant give to our other purpose name 
    // Identifiers in C ----> it is user defined name that we can use for our purpose like variable name, function name, class name, etc.

    int a, b, c, d;
    a = 10;
    b = 20;
    c = a;
    d = b;
    printf(" \n \n \n a = %d,\n  b = %d, \n c = %d, \n d = %d\n", a, b, c, d);

    //Below swapping
    printf("\n \n fro swapping \n");
    int x = 10;
    int y = 20;
    int temp; // Declare a temporary variable

    printf("Before swap: x = %d, y = %d\n", a, b);

    // Swap logic
    temp = x;
    printf("temp = %d\n", temp);
    x = y;
    printf("x = %d\n", x);
    y = temp;
    printf("y = %d\n", y);

    printf("After swap:  x = %d, y = %d\n", x, y); 
    /*int x = 20;
    int y = 10;*/


}
