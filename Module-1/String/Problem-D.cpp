//Problem Link: https://codeforces.com/contest/1873/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[4];
        scanf("%s",str);
        if(strcmp(str,"abc") == 0){
            printf("Yes\n");
        }
        else if(str[1] == 'a' && str[2] == 'b'){
            printf("No\n");
        }
        else if(str[1] == 'c' && str[2] == 'a'){
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }
    
    return 0;
}