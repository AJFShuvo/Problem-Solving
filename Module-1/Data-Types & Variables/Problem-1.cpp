// Problem Link:- https://vjudge.net/contest/684650#problem/F

#include<bits/stdc++.h>
using namespace std;

int main() {
    double r;
    cin >> r;
    //double PI = 3.141592653589793;
    double PI = acos(-1);
    double circumference = 2 * PI * r; //M_PI is from <cmath>  Library . 
    double area = PI * r * r;
    //cout<<"PI = "<<PI<<endl;
    cout  <<fixed<<setprecision(6)<< area << " " << circumference << endl;
    return 0;
}