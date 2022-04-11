// C program to find cube of any number using function

#include <stdio.h>
double cube(double num);

int main()
{
    int num;
    double c;

    printf("Enter a number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d = %.2f", num, c);

    return 0;
}


double cube(double num)
{
    return (num * num * num);
}
