/*
Cho mảng số nguyên A[] gồm N phần tử và số nguyên dương S, nhiệm vụ của bạn hãy xác định xem có thể tạo ra một tập con các phần tử trong mảng có tổng bằng S hay không? Chú ý mỗi phần tử trong mảng chỉ được sử dụng một lần.

Input Format

Dòng đầu tiên gồm 2 số N và S; Dòng thứ 2 gồm N số của mảng A;

Constraints

1<=N<=200; 1<=S<=50000; 1<=A[i]<=500;

Output Format

In ra 1 nếu có tập con của A có tổng bằng S, ngược lại in ra 0

Sample Input 0

8 92
69 16 82 170 31 24 45 112 
Sample Output 0

1
*/
========
    /*
    ll n, s;
void solve(){
	 cin>>n>>s;
    vector<ll> v(n+1);
    for(int i=0;i<n;i++) cin>>v[i];
   	map<ll,ll> mp;
   ll sum =0;
   for(int i=0;i<n;i++){
   		sum +=v[i];
   		// neu tong bang s va da ton tai so co tong la sum - s,
   		if(sum == s || mp[sum-s]){
   			cout<<"YES";el;
   			return;
   		}
   		mp[sum]=1;
   }
   cout<<"NO";el;

}
    */

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<int,int>
ll n,s;

int main(){

    cin>>n>>s;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    vector<vector<ll>> dp(n+5,vector<ll>(s+5,false));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int sum =0;sum<=s;sum++){
            if(sum<v[i]){
                dp[i][sum]=dp[i-1][sum];
            }
            else dp[i][sum]=dp[i-1][sum]||dp[i-1][sum-v[i]];
        }
    }
    cout<<(dp[n][s]?"1":"0")<<endl;



}

