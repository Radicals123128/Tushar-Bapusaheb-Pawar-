//Write C program to find maximum of four integers by defining function
#include <stdio.h>
int max(int a, int b, int c, int d)
 {
    if (a > b && a > c && a > d)
        return a;
    else if (b > a && b > c && b > d)
        return b;
    else if (c > a && c > b && c > d)
        return c;
    else
        return d;
}

int main() {
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int final_max = max(a, b, c, d);
    printf("Maximum number is: %d\n", final_max);

    return 0;
}

