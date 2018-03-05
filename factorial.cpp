#include <iostream>

using namespace std;
int fact(int n){
    if(n < 0) return 0;
    if(n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}
int main()
{
    int n = 0;
    cout<<fact(n);
    return 0;
}
