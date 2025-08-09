//Problem Link: https://codeforces.com/contest/1914/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int freq[27] = {0};

        for(int i = 0;i<strlen(str);i++){
            freq[str[i] - 'A']++;
        }

        int ans = 0;
        //string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i = 1;i<=26;i++){
            if(freq[i-1] >=i){
                ans++;
            }
        }

        // for(int i = 0,j = 1;i<str1.size();i++,j++){
        //     cout<<str1[i] <<" "<<freq[i]<<endl;
        // }
       printf("%d\n",ans);

    }
}