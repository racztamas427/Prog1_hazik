#include <stdio.h> 


int main()
{
   int a;int b;
   printf("Adja meg a téglalap egyik oldalát:");
   scanf("%d",&a);
   printf("Adja meg a téglalap másik oldalát:");
   scanf("%d",&b);
   printf("A téglalap kerülete:%d",2*(a+b));
   printf("\n");
   printf("A téglalap területe:%d",a*b);
   return 0;
}