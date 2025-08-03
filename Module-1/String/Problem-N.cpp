//Problem Link: https://atcoder.jp/contests/abc301/tasks/abc301_a
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char str[256+1];
    scanf("%s",str);

    int t = 0, a = 0;
    bool flag1 = false, flag2 = false;
    
    for(int i = 0;i<n;i++){
       if(str[i] == 'T'){
        t++;
       }
       else {
        a++;
      
       }
    }
    if(t == a){
        if(str[strlen(str)-1] == 'A')printf("T\n");
        else printf("A\n");
    }
    else if( t > a)printf("T\n");
    else {
        printf("A\n");
    }
    return 0;
}