#include <iostream>

using namespace std;

int main()  //find min & max simaltaneosly 
{
    int n = 6;
    int arr[] = {5,6,1,4,9,2};
    int min, max;
    //3n/2 operations (optimal solution)
    if(n%2 == 1){  
        min = max = arr[0];
        for(int i=1;i<n;i+=2){
            if(arr[i] < arr[i+1]){
                if(arr[i] < min) min = arr[i];
                if(arr[i+1] > max) max = arr[i+1];
            }
            else if(arr[i] > arr[i+1]){
                if(arr[i] > max) max = arr[i];
                if(arr[i+1] < min) min = arr[i+1];
            }
        }
    }
    else if(n%2 == 0){
        for(int i=0;i<n;i+=2){
            if(arr[i] < arr[i+1]){
                if(i==0) {min = arr[i]; max = arr[i+1];}
                else {
                    if(arr[i] < min) min = arr[i];
                    if(arr[i+1] > max) max = arr[i+1];
                }
            }
            else if(arr[i] > arr[i+1]){
                if(i==0) {min = arr[i+1]; max = arr[i];}
                else {
                    if(arr[i+1] < min) min = arr[i+1];
                    if(arr[i] > max) max = arr[i];
                }
            }
        }
    }
    cout<<min<<"  "<<max;
    return 0;
}
