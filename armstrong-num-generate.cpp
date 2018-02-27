#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n1, n2, digits, sum, x, temp;
   cin>>n1>>n2;  //enter lower bound and upper bound
   for(int i=n1;i<n2;i++){
       digits =0; sum=0; x=i;
       while(x){
            digits++;
            x/=10;
       }
       x=i;
       while(x){
           temp = x%10;
           sum += pow(temp, digits);
           x/=10;
       }
       if(sum == i) cout<<i<<endl;
   }
   return 0;
}
