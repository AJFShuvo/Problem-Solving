//Problem Link: https://atcoder.jp/contests/abc332/tasks/abc332_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,g,m;
    scanf("%d%d%d",&k,&g,&m);
    int glass = 0,mug = 0;
    while(k--){
        if(glass == g){
            glass = 0;
        }
        else if(mug == 0){
            mug = m;
        }
        else {
            int empty = g-glass;
            if(empty >= mug){
                glass+=mug;
                mug = 0;
            }
            else {
                mug-=empty;
                glass = g;
            }
        }

    }
    printf("%d %d\n",glass, mug);

    return 0;
}