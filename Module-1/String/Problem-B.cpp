//Problem Link : https://atcoder.jp/contests/abc335/tasks/abc335_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[256+1] ;
    scanf("%s",str);

    str[strlen(str)-1] =str[strlen(str)-1] + 1;
    
    printf("%s\n",str);
    
    return 0; 
}