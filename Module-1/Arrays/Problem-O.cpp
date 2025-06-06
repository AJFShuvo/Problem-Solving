//Problem Link: https://atcoder.jp/contests/abc301/tasks/abc301_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            // print from arr[i] up to arr[i+1] – 1
            printf("%d ", arr[i]);
            for (int j = arr[i] + 1; j <= arr[i + 1] - 1; j++) {
                printf("%d ", j);
            }
        } else {
            // print from arr[i] down to arr[i+1] + 1
            printf("%d ", arr[i]);
            for (int j = arr[i] - 1; j >= arr[i + 1] + 1; j--) {
                printf("%d ", j);
            }
        }
    }

    
    printf("%d\n", arr[n - 1]);
    return 0;
}