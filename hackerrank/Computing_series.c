#include <stdio.h>
int main()
{
    int n;
    float a=1, value=0;
    scanf("%d",&n);
    if(n<=0)
      printf(" Invalid input");
    else{  
      while (a<=n)
      {
        value=value+1/a;
        a++;
      }
      printf("Harmonic Progression is %f",value);
    }
}