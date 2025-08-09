//Problem Link: https://atcoder.jp/contests/abc322/tasks/abc322_b
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char str1[n+1],str2[m+1];
    scanf("%s%s",str1,str2);
    int str = 0;
    for(int i = 0;i<strlen(str1);i++){
        str+=str1[i] ;
    }
    int start  = 0;
    int end = 0;

    for(int i = m-1;i>=(m-n);i--)
    end+=str2[i];
    for(int i = 0;i<n;i++)start+=str2[i];

    if(start == str && end == str) printf("0\n");
    else if(start == str)printf("1\n");
    else if(end == str)printf("2\n");
    else printf("3\n");

    // printf("str = %d\n",str);
    // cout<<"start = "<<start<<endl;
    // cout<<"end = "<<end<<endl;
    return 0 ;
}