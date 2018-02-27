#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int temp, x=n, digits=0;
   while(x){
       digits++;
       x/=10;
   }
   int sum = 0;
   x=n;
   while(x){
       temp = x%10;
       sum += pow(temp, digits);
       x/=10;
   }
   if(sum == n) cout<<"Armstrong number";
   else cout<<"Not an armstrong number";
   return 0;
}
