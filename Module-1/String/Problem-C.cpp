//Problem Link : https://atcoder.jp/contests/abc329/tasks/abc329_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1] ;
    scanf("%s",str);

    for(int i = 0;i<strlen(str);i++){
        printf("%c ",str[i]);
    }
    printf("\n");
    return 0; 
}