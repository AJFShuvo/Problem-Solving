//Problem Link: https://atcoder.jp/contests/abc306/tasks/abc306_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str[256+1];
    scanf("%s",str);
    char str1[256+1];
    int index = 0;
    for(int i = 0;i<n;i++){
        str1[index++] = str[i];
        str1[index++] = str[i];
    }
    str1[index] = '\0';
    printf("%s\n",str1);
    return 0;
}