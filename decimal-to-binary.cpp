#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;  //decimal value
   int temp[10]; int i=0;
   while(n){
       temp[i++] =n%2;
       n/=2;
   }
   n=i;
   for(i=n-1;i>=0;i--)
    cout<<temp[i];
   //cout<<temp; //binary value
   return 0;
}
