#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, k;
    cin>>n>>k;
    int *l = new int[n];
    int *t = new int[n];
    int *arr = new int[n];
    int totalluck =0;
    int count = 0;
    for(i=0;i<n;i++){
        cin>>l[i]>>t[i]; 
        totalluck += l[i];
        if(t[i]==1) arr[count++] = l[i];
    }
    sort(arr, arr+count);
    i=0;
    while(i<(count - k)){
        totalluck -= (2* arr[i]); 
        i++;
    }
    cout<<totalluck;
    return 0;
}
