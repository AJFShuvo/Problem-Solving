//Problem Link: https://codeforces.com/problemset/problem/1669/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int rating; 
        scanf("%d",&rating);
        if(1900 <= rating) printf("Division 1\n");
        else if(1600 <= rating && rating < 1900)printf("Division 2\n");
        else if(1400 <= rating && rating < 1600)printf("Division 3\n");
        else printf("Division 4\n");
    }
    return 0;
}