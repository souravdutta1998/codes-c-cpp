#include <iostream>

using namespace std;
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
void selectionSort(int *arr, int start, int n){
    int i,min_index;
    if(start>= n-1)
        return;
    min_index = start;
    for(i=min_index + 1;i<n;i++){
        if(arr[i]>= arr[min_index])
            min_index = i;
        swap(&arr[min_index], &arr[i]);
    }
    selectionSort(arr, start+1, n);
}
int main()
{
   int arr[10], n, i,j;
   cout<<"Total number of elements in the array? ";
   cin>>n;
   
   cout<<"Enter "<<n<<" values: ";
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   selectionSort(arr, 0, n);
   cout<<"Sorted array: \n";
   for(i=0;i<n;i++)
    cout<<*(arr+i)<<endl;
   
   return 0;
}
