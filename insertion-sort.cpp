#include <iostream>

using namespace std;
int *insertionSort(int *arr, int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key = arr[i];
        j= i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
   
   int *p = insertionSort(arr,n);
   cout<<"Sorted array: \n";
   for(i=0;i<n;i++)
    cout<<*(p+i)<<endl;
   
   return 0;
}
