#include<stdio.h>
int main()
{
  int r,c,i,j;
  
  scanf("%d%d",&r,&c);
  int a[r][c], b[c][r];
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
  {	scanf("%d",&a[i][j]); b[j][i] = a[i][j]; }
  
  for(i=0;i<c;i++)
  { for(j=0;j<r;j++)
    	printf("%d ",b[i][j]);
   	printf("\n");
  }
  
}
