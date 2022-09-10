/*
Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

Input Format

Số nguyên dương N mô tả số bước con ếch cần di chuyển để nhảy tới đỉnh

Constraints

1<=N<=40

Output Format

In ra kết quả của bài toán

Sample Input 0

5
Sample Output 0

13
Sample Input 1

10
Sample Output 1

274
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;
int main(){
    cin>>n;
    ll dp[n+5];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n]<<endl;
    
    
}