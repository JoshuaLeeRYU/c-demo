#include <stdio.h>
int main() {
    int cm,inch=0,foot=0;
    scanf("%d",&cm);
    inch=cm*0.393701;
    foot=inch/12;
    inch=inch%12;
    printf("%d %d",foot,inch);
    return 0;
}