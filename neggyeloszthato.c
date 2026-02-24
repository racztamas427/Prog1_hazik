#include <stdio.h>


int main()
{
    int szam;
    printf("Adjon be egy számot:");
    scanf("%d",&szam);
    for (int i=1;i<szam;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }



    return 0;
}