//Problem Link: https://codeforces.com/contest/1873/problem/D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n,k;
    scanf("%d%d",&n,&k);
    char str[n+1];
    scanf("%s",str);
    int count = 0;
    for(int i = 0;i<strlen(str);i++){
        if(str[i] == 'B'){
            count++;
            i+= k - 1;
        }
    }
    printf("%d\n",count);
    }

    return 0;
}