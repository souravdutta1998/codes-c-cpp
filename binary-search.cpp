#include <iostream>

using namespace std;
int binarySearch(int *arr, int n, int find){
    int first, mid, last;
    first = 0;
    last = n-1;
    mid = (first + last)/2;
    while(first<=last){
        if(arr[mid] == find)
            return mid;
        if(find < arr[mid])
            last = mid - 1;
        else if(find > arr[mid])
            first = mid + 1;
        mid = (first+last)/2;
    }
    return -1;
}
int main()
{
   int arr[10], n,find, i,j;
   cout<<"Total number of elements in the array? ";
   cin>>n;
   
   cout<<"Enter "<<n<<" values: ";
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"Enter element to be searched: ";
   cin>>find;
   int result = binarySearch(arr,n,find);
   if(result == -1) cout<<"Not found!";
   else cout<<find<<" found at position "<< result+1 ;
   
   return 0;
}
