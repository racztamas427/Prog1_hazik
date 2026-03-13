#include <stdio.h>

int rendzett(int tomb[],int meret)
{ 
if (meret==0)
{
    return 1;
}
else{
    for(int i=0;i<meret-1;i++)
    {
        if (tomb[i]>tomb[i+1])
        return 0;
    }
    return 1;
}

}

int main()
{
   int szam[]={1,2,3,5,4};
   int meret=5;
   if(rendzett(szam,meret)==1)
   {
    printf("A tömb rendezett.");
   }
   else{
    printf("A több nem rendezett.");
   }






    return 0;
}