#include<stdio.h>
    int main() {
        int i=0,sum=1;
        for(scanf("%d", &i); i>0; i--)
        {
            sum=i*sum;
        }
        printf("%d", sum);
        return 0;
    }