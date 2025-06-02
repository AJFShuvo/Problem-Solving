//Problem Link: https://cses.fi/problemset/task/1083
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    scanf("%d",&n);
    int  freq[n+1] = {};
    for(int i = 0;i<n-1;i++){
        int r;
        scanf("%d",&r);
        freq[r]++;
    }

    for(int i = 1;i<=n;i++)
    {
        if(freq[i] == 0){
            printf("%d\n",i);
            break;
        }
    }


    return 0;
}