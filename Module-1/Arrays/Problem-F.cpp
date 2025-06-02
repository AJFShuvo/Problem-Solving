//Problem Link: https://atcoder.jp/contests/abc308/tasks/abc308_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[8];
    
    for(int i = 0;i<8;i++)
    scanf("%d",&arr[i]);

    bool condition1 = true;
    bool condition2 = true;
    bool condition3 = true;

    for(int i = 0;i<7;i++){
        if(arr[i] > arr[i+1]){
           // printf("condition 1\n arr[%d] = %d , arr[%d] = %d\n",i,arr[i],i+1,arr[i+1]);
            condition1 = false;
            break;
        }
        if(arr[i] < 100 || arr[i] > 675){
          //  printf("condition 2\n");
            condition2 = false;
            break;
        }
        if(arr[i] % 25 != 0){
            //printf("condition 3\n");
            condition3 = false;
            break;
        }

        
    }
    if(condition1 && condition2 && condition3)
    printf("Yes\n");
    
    else 
    printf("No\n");
    
    return 0;
}