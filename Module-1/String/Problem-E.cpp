//Problem Link: https://atcoder.jp/contests/abc327/tasks/abc327_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    bool flag = false;
    for(int i = 0;i<strlen(str)-1;i++){
        if((str[i] == 'a' && str[i+1] =='b') ||(str[i] == 'b' && str[i+1] == 'a'))
        {
            flag = true;
            break;
        }
    }
    if(flag)
        printf("Yes\n");
    else
         printf("No\n");
    return 0;
}