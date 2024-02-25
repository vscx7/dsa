/**
 * The program allows the user to input the size of an array, elements for the array, and 
 * "then insert a new element at a specified position in the array."
 */

#include <stdio.h>
// operations on arrays 
// inserting in array at a given position by user

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

        //insertion begins: inserting an element at a position in array
        //i=0; // resetting i value to initial value (or we can take a new variable to run loop)

        int pos, item; // declaring variable for item to be inserted and it's position

        // asking and taking values of pos and item form the user
        printf("Enter the postion of element\n");
        scanf("%d",&pos);
        printf("Enter the element\n");
        scanf("%d",&item);
        if (pos>size || pos<0)
        printf("Error position is more than size or less than 0");

        else {
            for (i=size-1; i>=pos-1; i--){  // running for loop from last element to element at pos
                a[i+1]=a[i]; // moving values to next index from last element till position
            }
            a[pos-1]= item; // writing item at given position
            size++;
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
    //in array5.c  we will