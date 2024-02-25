/**
 * The program takes 5 integer inputs from the user and stores them in an array, then displays a
 * success message.
 */

#include <stdio.h>
// initialising at run time that is taking data from user

int main(){
    int a[5];
    for (int i=0; i<5; i++){        //loops to take 5 inputs from user to store in array
        printf("Enter a number \n"); // asks the user to input the number
        scanf("%d",&a[i]);           // takes input from the user
        
    }
    printf("Array initialised successfully \n"); // display text if successfully initialise
    return 0;
}
// in array3.c we look how to traverse an array