#include <stdio.h>
void main()
{
    int i=0,a=0,b=1,c=0;
    printf("%d\n%d\n",a,b);
    while(i<8)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
      i++;

    }
}
