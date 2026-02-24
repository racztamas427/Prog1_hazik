#include <stdio.h>

int main()
{ 
 int szam;
 printf("Adjon be egy számot:");
 scanf("%d",&szam);

 for (int i=szam;i>=1;i--)
 {
    if(i%2==1)
    {
        printf("%d\n",i);
    }
 }


    return 0;
}