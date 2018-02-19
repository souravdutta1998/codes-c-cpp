#include<stdio.h>
int main()
{
  int m,n,i,j;
  scanf("%d%d",&m, &n);
  int a[m][n] , b[m][n];
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
  {	scanf("%d",&a[i][j]); b[i][j] = 0; }
   
 for(i=0;i<m;i++)
    for(j=0;j<=i;j++)
    	b[i][j]=a[i][j];
    
  for(i=0;i<m;i++)
  {  for(j=0;j<n;j++)
    	printf("%d ",b[i][j]);
   	printf("\n");
  }
  return 0;
}
