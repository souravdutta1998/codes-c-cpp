#include<iostream>
using namespace std;

int n = 3; //length of the string
char *arr = new char[n];

void knary(int n, int k) {
  if(n < 1) {
    cout<<arr<<endl;
    return ;
  }
  else {
    for(int j =0, c='0'; j<k ; j++, c++){
      arr[n - 1] = c;
      knary(n - 1, k);
    }
  }
}

int main(){
  int k = 3; //change k
  knary(n, k);
  return 0;
}
