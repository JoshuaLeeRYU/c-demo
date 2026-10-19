#include<stdio.h>
    int main() {
        long num=0, i=1;
        scanf("%ld", &num);
        printf("%ld\n", num);
        if(num<2) {
            printf("N");
            return 0;
        }
        while(i<num-1) {
            i++;
            if(num%i==0) {
                printf("N");
                return 0;
            }
        }
        printf("Y");
        return 0;
    }