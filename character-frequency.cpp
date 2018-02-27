#include <iostream>
#include<string>
using namespace std;

int main()
{
   string c;
   getline(cin, c);
   int len = c.length(), count;
   for(int i=97;i<=113;i++)
   {
       count = 0;
       for(int j=0;j<len;j++){
           if(c[j] == i) count++;
       }
       
       cout<<(char)i<<" occurs "<<count<<" times in the entered string.\n";
   }
   return 0;
}
