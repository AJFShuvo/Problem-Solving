//Problem Link: https://atcoder.jp/contests/abc323/tasks/abc323_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1];
    scanf("%s",str);
    bool flag = true;
    for(int i = 1;i<strlen(str);i+=2){
        if(str[i] == '1'){
            flag = false;
            break;
        }
    }
    if(flag)printf("Yes\n");
    else printf("No\n");
    return 0;
}