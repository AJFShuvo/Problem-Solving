//Problem Link: https://www.codechef.com/problems/DONDRIVE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);

        printf("%d\n",abs(x-y));
    }
    return 0;
}