// C program to find maximum and minimum number
#include <stdio.h>

int max(int a, int b);
int min(int c, int d);

int main()
{
    int aa, bb, maxi, mini;

    printf("Input two numbers: ");
    scanf("%d%d", &aa, &bb);

    maxi = max(aa, bb);
    mini = min(aa, bb);

    printf("Maximum = %d\n", maxi);
    printf("Minimum = %d", mini);

    return 0;
}



int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int c, int d)
{
    return (c > d) ? d : c;
}
