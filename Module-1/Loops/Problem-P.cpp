//Problem Link: https://www.codechef.com/problems/ASSIGNMNT
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        x = x*y;
        int total_remaining_time = z * 24 * 60;
        if(total_remaining_time>=x)printf("Yes\n");
        else printf("No\n"); 
    }
    return 0;
}