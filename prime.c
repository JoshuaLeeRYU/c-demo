#include<stdio.h>

    int main() {
        long num=0, i=1, isprime, n, a=0;
        printf("Please enter a number,and I will output all primes below it: ");
        scanf("%ld", &n);
        for(;num<n;num++)
    {
        i=1;
        isprime=1;
        if(num<2) {
            isprime=0;
        }
        while(i<num-1) {
            i++;
            if(num%i==0) {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
        printf("%ld\n", num);
        a++;
        }
    }
    printf("There are %ld prime numbers below %ld.\n", a, n);
}