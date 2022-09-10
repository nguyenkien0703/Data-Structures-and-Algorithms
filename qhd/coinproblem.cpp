/*
Ngân hàng XYZ hiện có N tờ tiền có mệnh giá khác nhau được lưu vào mảng C[], bạn hãy tìm cách đổi số tiền là S sao cho số tờ tiền cần dùng là ít nhất. Bạn được sử dụng một mệnh giá không giới hạn số lần.

Input Format

Dòng đầu tiên chứa 2 số N và S; Dòng thứ 2 chưa N số là mệnh giá các tờ tiền;

Constraints

1<=N<=100; 1<=S<=10^6; 1<=C[i]<=10^6;

Output Format

In ra số tờ tiền nhỏ nhất cần đổi. Nếu không thể đổi được số tiền đúng bằng S thì in ra -1.

Sample Input 0

3 10
4 5 8
Sample Output 0

2

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll n,s ;

int main(){
    ios_base::sync_with_stdio(0);;
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s;
    vector<ll> a(n),dp(s+1,INT_MAX);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    dp[0]=0;
    for(int i=1;i<=s;i++){
        for(int j=0;j<n;j++){
            if(i-a[j]>=0){
                dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    cout<<(dp[s]==INT_MAX? -1 : dp[s]);


}