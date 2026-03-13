#include <stdio.h>


int contains(int tomb[],int meret,int szam)
{
  for (int i=0;i<=meret-1;i++)
  {
    if (szam==tomb[i])
    {
        return i;
    }
  }
   return -1;
}
int main()
{
    int n;int szam[]={1,2,3,4};int meret=4,eredmeny;
    printf("Add megy egy számot:");
    scanf("%d",&n);
    eredmeny=contains(szam,meret,n);

    if (eredmeny==-1)
    {
    
        printf("Nincs benne tömben.\n");
    }
    else{
        printf(" Az index:%d.\n",eredmeny);
    }






    return 0;
}