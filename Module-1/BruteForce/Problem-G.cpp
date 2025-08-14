//Problem Link: https://atcoder.jp/contests/abc320/tasks/abc320_b
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    scanf("%s",str);
    int n = strlen(str);
    
        int mx = 1;
        for(int center = 0;center<n;center++){
            //even length palindrom
            int l = center,r = center+1;
            while( l >= 0 && r < n && str[l] == str[r]){
                mx = max(mx,r- l +1);
                l--;
                r++;
            }
            //odd length palindrom
            l = center , r = center;
            while( l >= 0 && r < n && str[l] == str[r]){
              mx =  max(mx,r-l+1);
              l--;
              r++;
            }
        }
        

        printf("%d\n",mx);
    
    return 0;
}