#include <stdio.h>
//Write C program  o pass a one dimensional (1D) array to a function
// Function to display individual array elements
void display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main()
{
    int ageArray[] = {2, 8, 4, 12}; // Initialize an array
    
    display(ageArray[1], ageArray[2]);
    return 0;
}

