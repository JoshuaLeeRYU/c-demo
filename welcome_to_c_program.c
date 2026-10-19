    #include <stdio.h>
    #include <stdlib.h>
    int main() {
        int a=0,b=19;
        char arr1[20]={"welcome to c program"};
        char arr2[20]={"####################"};
        for(int a=0;a<11;a++&b--)
        {
            for(int j=0;j<20;j++)
            {
                printf("%c",arr2[j]);
            }
            printf("\n");
            _sleep(100);
            if(a!=10)
            {
                system("cls");
            }
            arr2[a]=arr1[a];
            arr2[b]=arr1[b];
        }
        return 0;
    }