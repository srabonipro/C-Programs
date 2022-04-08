#include <stdio.h>

void checkPrimeNumber();

int main()
{
    checkPrimeNumber();
    return 0;
}


// return type is void means does not return any value
void checkPrimeNumber()
{
    int n, i, flag = 0; // flag 0 = prime
                        // flag 1 = not prime

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if(n == 0 || n == 1)
    {
        flag = 1;       // not prime
    }

    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number");
    }


}
