#include <stdio.h>
int main() {
    int a=0;
    int sum=0;
    int i=0;
    while (1) {
        scanf("%d", &a);
        if (a == -1) {
            break;
        }
        sum = sum + a;
        i++;
    }
    sum= sum / i;
    printf("%d\n", i);
    printf("%d", sum);
    return 0;
}