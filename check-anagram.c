#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  scanf("%s",a);
  scanf("%s",b);
  int len1=0,len2=0,flag=0,i,j;
  while(a[len1]!='\0') len1++;
  while(b[len2]!='\0') len2++;
  if(len1!=len2) printf("NO");
  else
  {
    for(i=0;i<len1;i++)
    {
      for(j=0;j<len2;j++)
      {
        if(a[i]==b[j])
        {
          flag++; // break;
        }
      }
    }
    if(flag>=len1) printf("YES");
    else printf("NO");
  }
}

