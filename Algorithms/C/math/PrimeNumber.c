#include <stdio.h>

int main()
{
    int i, n, flag;

    //Flag is used as notification. Initially we have supposed that the number is prime.
    flag = 1;

    /* Reads a number from user */
    printf("Enter any number between 50 and 100 to check prime: ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++)
    {
        /*
         * If the number is divisible by any number
         * other than 1 and self then it is not prime
         */
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }

    /*
     * If flag contains 1 then it is prime
     */
    if(flag==1)
    {
        printf("\n%d is prime number", n);
    }
    else
    {
        printf("\n%d is not prime number", n);
    }

    return 0;
    }
