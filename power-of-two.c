#include<stdio.h>
#include<math.h>
int isPowerOf2(int num){
    if(num == 0)
        return 0;
    while(num!=1)
    {
        if(num%2 !=0)
            return 0;
        num =num/2;
    }
    return 1;
}
int main()
{
  int num;
  scanf("%d", &num);
  isPowerOf2(num)?printf("YES"):printf("NO");
  return 0;
}
