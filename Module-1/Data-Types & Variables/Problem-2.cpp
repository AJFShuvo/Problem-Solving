// Problem-2: https://vjudge.net/contest/684650#problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a =0 ,b = 0,c = 0;
    a = ((str[0] - '0')* 100) + ((str[1] - '0') * 10) + (str[2] - '0') ;
    b = ((str[2] - '0')* 100) + ((str[0] - '0') * 10) + (str[1] - '0') ;
    c = ((str[1] - '0')* 100) + ((str[2] - '0') * 10) + (str[0] - '0') ;
    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;
    // cout<<"c = "<<c<<endl;
    int ans = a + b + c;
    cout<<ans<<endl;
}