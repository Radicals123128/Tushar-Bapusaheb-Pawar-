//Write C program using User define function example with no argument and no return type
#include <stdio.h>
void fun1(void) 
{
    int array[10] = {1, 2, 3, 4, 5, 6,7,8,9,0};
    int i, sum = 0;
	for (i = 0; i < 10; i++)
	{
        sum += array[i];
    }
	printf("\nThe sum of all array elements is: %d", sum);
}
int main() 
{
    fun1();
    return 0;
}


