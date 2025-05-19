//Problem Link:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int passed = (x*y) / 2;
        if(z > passed)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}