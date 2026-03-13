#include <stdio.h>

int legkissebb(int tomb[],int meret)
{
    int kis=tomb[0];
    for (int i=0;i<=meret-1;i++)
    {
        if(tomb[i]<kis)
        kis=tomb[i];
    }
    return kis;
}

int legnagyobb(int tomb[],int meret)
{
    int nagy=tomb[0];
    for (int i=0;i<=meret-1;i++)
    {
        if(tomb[i]>nagy)
        nagy=tomb[i];
    }
    return nagy;
}




int main()
{
    int szam[]={1,2,3,4};
    int meret=4;
    int eredmeny1,eredmeny2;
    eredmeny1=legkissebb(szam,meret);
    eredmeny2=legnagyobb(szam,meret);
    printf("%d   %d\n",eredmeny1,eredmeny2);





    return 0;
}