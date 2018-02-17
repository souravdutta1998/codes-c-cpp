#include <iostream>
using namespace std;

void reversenum(int n){
    int i=10, temp=0;
    while(n!=0)
    {
        temp= (temp*i) + (n%10);
        n=n/10;
    }
    cout<<"The reversed number is: "<<temp;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    reversenum(n);
    return 0;
}
