#include<stdio.h>
void delete_element(int *arr,int n, int loc)
{
    int i,new[20];
    for(i=0;i<n;i++)
    {
        if(i<loc-1)
            new[i]=arr[i];
        else if(i>=loc-1)
            new[i]=arr[i+1];
    }
    n=n-1;
    for(i=0;i<n;i++)
        printf("%d  ",new[i]);
}
int main()
{
    int arr[20],n,loc,i;
    n=5;  //change
    printf("Enter %d values:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    loc=2;  //change
    delete_element(arr,n,loc);
    return 0;
}