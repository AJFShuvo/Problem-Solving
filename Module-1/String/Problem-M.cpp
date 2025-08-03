//Problem Link: https://atcoder.jp/contests/abc303/tasks/abc303_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str1[n+1];
    char str2[n+1];
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i = 0;i<n;i++){
        if(str1[i] == '0')
        str1[i] = 'o';
        if(str1[i] == 'l')
        str1[i] = '1';
        if(str2[i] == '0')
        str2[i] = 'o';
        if(str2[i] == 'l')
        str2[i] = '1';
    }
    // printf("First String = %s\n",str1);
    // printf("Second String = %s\n",str2);
    // printf("Result = %d\n",strcmp(str2,str1));
    if(strcmp(str2,str1) == 0)
    printf("Yes\n");
    else 
    printf("No\n");
    return 0;
}