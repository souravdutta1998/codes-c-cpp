#include <stdio.h>
#include <string.h>
int main()
{
    char s[30], n[30];
    scanf("%s",s);
    int i=0,j=0,k, flag=0;
    i=strlen(s); 
    while(s[j]!='\0'){
        if(s[j]=='.' && s[i-1-j]=='.'){
            s[j] = 'a';
            s[i-1-j] = 'a';
        }
        else if(s[j]=='.' && s[i-1-j]!='.'){
            s[j] = s[i-1-j];
        }
        j++;
    }
    j=0; k=i;
    while(j<=i)
    {
        n[j] = s[k-1];
        j++;
        k--;
    }
    if(strcmp(s,n)) printf("%d",-1);
    else printf("%s", n);
    return 0;
}
