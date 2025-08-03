//Problem Link: https://atcoder.jp/contests/abc289/tasks/abc289_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1];
    scanf("%s",str);
    for(int i = 0;i<strlen(str);i++){
       if(str[i] == '0'){
        str[i] = '1';
       }
       else {
        str[i] = '0';
       }
    }
    printf("%s\n",str);
    return 0;
}