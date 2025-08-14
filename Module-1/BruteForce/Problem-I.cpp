//Problem Link:https://codeforces.com/problemset/problem/1931/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    cin>>n;
    int ans = 0,f = 0, s = 0, th = 0;
    
    for(int i = 1;i<=26;i++){
        for(int j = 1;j<=26;j++){
            for(int k = 1;k<=26;k++){
                ans = i + k + j;
                if(ans == n){
                    f = k;
                    s = j;
                    th = i;
                    break;
                }
            }
        }
    }
    printf("%c%c%c\n",((char)(96+f)),((char)(96+s)),((char)(96+th)));
   // cout<<"f = "<<f<<endl<<"s = "<<s<<endl<<"th = "<<th<<endl;

    }
    return 0;
}