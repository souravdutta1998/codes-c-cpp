#include <iostream>

using namespace std;

int main()
{
   int x, y;
   cin>>x>>y;
   int rem; 
   int n1 = x;
   int n2 = y;
   while(n2!=0){
       rem = n1 % n2;
       n1 = n2;
       n2 = rem;
   }
   cout<<"gcd: "<<n1<<endl;
   cout<<"lcm: "<<(x*y)/n1;
   return 0;
}
