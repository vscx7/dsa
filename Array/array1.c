#include <stdio.h>
//introduction to array
// array def: an array is a fixed size collection of more than 1 element of same data type

int  main(){
 
   // int a[10]; // int is data type and a is array name and 10 is size of array
   // initialising of array compile time vs run time

    int a[5] = {2,3,4,6,5}; //initialising array at compile time, the size is fixed and index starts from 0 by default
    // data items are stored in continuous locations 
    
    printf("Successfully array initialised at compile time"); // prints text if array is initialised
    return 0;
}

// run time in array2.c