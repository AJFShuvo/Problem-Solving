//Problem Link: https://atcoder.jp/contests/abc236/tasks/abc236_b?lang=en

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    n = (n * 4) - 1;
    int freq[n] =  {};
    
    for(int i = 0;i<n;i++)
    {   int r;
        
        scanf("%d",&r);
        freq[r]++; 
    }

    for(int i = 1;i<=n;i++){
        if( freq[i] <= 3){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}