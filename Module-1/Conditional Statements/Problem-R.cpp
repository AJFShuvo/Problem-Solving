//Problem Link: https://atcoder.jp/contests/abc333/tasks/abc333_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1,s2,t1,t2,temp;
    scanf("%c%c%c%c%c", &s1,&s2,&temp,&t1,&t2);
    int diff1 = abs(s1-s2);
    int dif2 = abs(t1-t2);
    if(diff1 > 2) diff1 = 5-diff1;
    if(dif2 > 2) dif2 = 5 - dif2;
    if(diff1 == dif2)printf("Yes\n");
    else printf("No\n");
    return 0;
}