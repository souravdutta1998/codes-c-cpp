#include<stdio.h>
int main()
{
  int temp,N,d, i=0;
  scanf("%d%d",&N,&d);
  while(N!=0)
  {
    temp = N%10;
    N/=10;
    if(temp == d) i++;
  }
  printf("%d", i);
}
