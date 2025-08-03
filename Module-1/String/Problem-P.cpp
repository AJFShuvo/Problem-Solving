//Problem Link:  https://atcoder.jp/contests/abc296/tasks/abc296_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str[256+1];
    scanf("%s",str);
    bool flag = true;
    for(int i = 1;i<strlen(str);i++){
        if(str[i] == str[i-1]){
            flag = false;
            break;
        }
    }
    if(flag)printf("Yes\n");
    else printf("No\n");
    return 0;
}