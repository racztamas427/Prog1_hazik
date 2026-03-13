#include <stdio.h>


int contains(int tomb[],int meret,int szam)
{
  for (int i=0;i<=meret-1;i++)
  {
    if (szam==tomb[i])
    {
        return 1;
    }
  }
   return 0;
}
int main()
{
    int n;int szam[]={1,2,3,4};int meret=4;
    printf("Add megy egy számot:");
    scanf("%d",&n);
    if (contains(szam,meret,n)==1)
    {
        printf("Benne van a tömben.\n");
    }
    else{
        printf("Nincs benne tömben.\n");
    }






    return 0;
}