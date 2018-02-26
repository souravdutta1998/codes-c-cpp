#include <stdio.h>
#include<string.h>
int main()
{
    char n[1000];
    scanf("%s", n);
    int len = strlen(n);
    int i=0, pc=0, zc=0;
    while(i<len){
        if(n[i]=='1') pc++;
        else if(n[i]=='0') zc++;
        i++;
    }
    if(pc >= zc){
        pc++;
        zc--;
    }
    else if(pc < zc){
        pc--;
        zc++;
    }
    if(pc==0 || zc ==0) printf("YES");
    else printf("NO");
    return 0;
}
