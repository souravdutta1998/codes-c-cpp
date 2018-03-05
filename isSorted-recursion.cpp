#include <iostream>

using namespace std;
int sorted(int *arr, int n){
    if(n == 1) return 1;
    return ((arr[n] < arr[n-1]) ? 0 : sorted(arr, n - 1)); 
}

int main(){
    int n = 6;
    int arr[] ={ 1,3, 5, 7, 8,9};
    (sorted(arr, n-1)) ? cout<<"sorted": cout<<"unsorted";
}
