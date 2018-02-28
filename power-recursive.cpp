#include <iostream>

using namespace std;
int power(int base, int n){
    if(n==1) return base;
    int p = power(base, n/2);
    if(n%2 == 1) return p*p*base;
    else return p*p;
}
int main()
{
   int num, n;
   cin >> num >> n;
   
   cout<<power(num, n);
   
   return 0;
}
