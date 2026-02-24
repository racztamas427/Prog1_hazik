#include <stdio.h>

int main()
{
    int ossz=0;
    for (int i=1;i<1000;i++)
    {
      if(i%3==0 || i%5==0)
      ossz=ossz+i;
    }


    printf("Az összeg:%d\n",ossz);

    return 0;
}