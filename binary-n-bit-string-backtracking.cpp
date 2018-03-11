#include<iostream>
using namespace std;

int n = 3;
char *arr = new char[n];

void binary(int n) {
  if(n < 1) {
    cout<<arr<<endl;
    return;
   }
   else {
    arr[n - 1] = '0';
    binary(n - 1);
    arr[n - 1] = '1';
    binary(n - 1);
    
   }
}
int main(){
  binary(n);
  return 0;
}
