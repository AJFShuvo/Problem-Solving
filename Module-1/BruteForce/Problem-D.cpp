//Problem Link: https://www.codechef.com/problems/NUM239
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        int count = 0;
        for(int i = l;i<=r;i++){
            int rm = i % 10;
            if(rm == 2|| rm == 3 || rm == 9)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}