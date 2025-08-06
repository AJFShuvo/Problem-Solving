//Problem link: https://atcoder.jp/contests/abc233/tasks/abc233_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int p = a-1,q =  b - 1;
    char str[100000];
    scanf("%s",str);
    while( p <= q){
        char ch = str[p];
        str[p] = str[q];
        str[q] = ch;
        p++;
        q--;
    }
    printf("%s",str);
    return 0;
}