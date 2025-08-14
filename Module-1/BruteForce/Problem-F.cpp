//Problem Link:https://www.codechef.com/problems/SHOEFIT
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int zero = 0, one = 0;
        for(int i = 0;i<3;i++){
            int r;
            scanf("%d",&r);
            if(r == 0)zero++;
            else one++;
        }
        if(one == 3 || zero == 3)printf("0\n");
        else {
            printf("1\n");
        }
        
    }
    return 0;
}