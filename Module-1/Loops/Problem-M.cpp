//Problem Link: https://www.codechef.com/problems/HATTRICK
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
char a,b,c,d,e,f;
        scanf(" %c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);
    if(a == 'W' && b == 'W' && c == 'W')printf("Yes\n");

    else if(b == 'W' && c == 'W' && d == 'W')printf("Yes\n");

    else if(c == 'W' && e == 'W' && d == 'W')printf("Yes\n");

    else if(e == 'W' && f == 'W' && d == 'W')printf("Yes\n");

    else printf("No\n");
    
    }
    return 0;
}