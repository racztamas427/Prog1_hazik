#include <stdio.h>


int main()
{   
   int magassag;
   printf("Adja meg a magasságot:");
   scanf("%d",&magassag);

   for (int i=1;i<=magassag;i++)
   {
     for (int j=0;j<magassag-i;j++)
     {
        printf(" ");
     }
     for (int k=0;k<i;k++)
     {
        printf("#");
     }
     printf("  ");
     for (int z=0;z<i;z++)
     {
        printf("#");
     }
     printf("\n");
}

    return 0;
}