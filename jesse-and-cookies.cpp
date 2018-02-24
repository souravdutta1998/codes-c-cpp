#include <iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    long long int n, k, i, j, o, count =0;
    cin>>n>>k;
    long long int *arr = new long long int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n, greater<int>()); //sort in descending order

    while(arr[n-1] < k){
        arr[n-2] = arr[n-1]+(2*arr[n-2]);
        n--;
        sort(arr, arr+n, greater<int>());
        //for(o=n-1;o>=0;o--)        //uncomment these lines to see the current array status
            //cout<<arr[o]<<endl;
        count++;
        if(n==1) break;
    }
    if(arr[n-1] < k) cout<<-1;
    else cout<<count;
    return 0;
}
