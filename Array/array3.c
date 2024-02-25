/**
 * The function takes user input to create an array, checks for overflow, and then prints the elements
 * of the array.
 */

#include <stdio.h>
// operations on arrays 
// traversing of array

int main(){
    int a[50]; // declaring size of array
    int size, i;
    printf("Enter the size of array(less than 50)\n"); //asking the user to input his/her array size
    scanf("%d",&size); // taking size from input
    if (size>50)
        printf("Overflow enter number less than 50\n"); //if user enter size more than 50 overflow will take place as array is fixed
    else{
        printf("Enter the elements int the array\n");
        for (i=0; i<size; i++){
            scanf("%d",&a[i]);
        // used for loop to take the input from user 
        }
        
        //  traversing begins
        //i=0; //setting i value again to 0
        printf("The elements in array are\n");
        for (i=0;i<size-1; i++){
            printf("%d,",a[i]); //using loop to access all elements for array and printing them one by one
        }
        printf("%d",a[size-1]); // this helps us to print last element of array without succeeding comma ","
        }
    return 0;
    }

    //in array4.c inserting of element at a given postion