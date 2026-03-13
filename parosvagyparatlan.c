#include <stdio.h>


int is_even(int n)
{
    if (n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }


}
int is_odd(int n)
{
   if(is_even(n)==0)
   {
    return 1;
   }
   else{
    return 0;
   }

}

int main()
{   
    int szam,eredmeny1,eredmeny2;
    printf("Adjon meg egy számot:");
    scanf("%d",&szam);
    
    eredmeny1=is_even(szam);
    eredmeny2=is_odd(szam);

    printf("%d    %d\n",eredmeny1,eredmeny2);




    return 0;
}