#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a,b=0;
    srand(time(NULL));
    b=rand()%100+1;
    scanf("%d",&a);
    while(a!=b)
    {
        if (a>b)
        {
            printf(">");
        }
        else
        {
            printf("<");
        }
        scanf("%d",&a);
        
    }
    printf("==");

    
}