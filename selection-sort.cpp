#include <iostream>

using namespace std;
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int *selectionSort(int *arr, int n){
    int i,j, min_index;
    for(i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j] <= arr[min_index])
                min_index = j;
        }
        swap(&arr[i],&arr[min_index]);
    }
    return arr;
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
   
   int *p = selectionSort(arr,n);
   cout<<"Sorted array: \n";
   for(i=0;i<n;i++)
    cout<<*(p+i)<<endl;
   
   return 0;
}
