/*
Bạn được cung cấp một ma trận nhị phân có N dòng và M cột chỉ bao gồm các số 0 và 1, hãy tìm hình vuông lớn nhất trong ma trận mà chỉ chứa toàn số 1.

Input Format

Dòng đầu tiên gồm 2 số N và M; N dòng tiếp theo mỗi dòng M số nguyên;

Constraints

1<=N,M<=500; 0<=A[i][j]<=1;

Output Format

In ra kết quả đáp án của bài toán

Sample Input 0

4 4
1 1 0 0
1 1 1 1
1 1 0 1
1 0 1 0
Sample Output 0

2
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define in(a) cin>>  a;
#define out(a) cout<<  a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for(int i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<int >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;

ll n,m;
ll a[1000][1000];
ll dp[1000][1000];
int main()
{
    faster;
    cin>>n>>m;
    ms(a,0);
    ms(dp,0);
    FOR(i,0,n-1){
        FOR(j,0,m-1){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        dp[i][0]=a[i][0];
    }
    for(int i=0;i<m;i++){
        dp[0][i]=a[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]==1){
                dp[i][j]=min({dp[i][j-1],dp[i-1][j-1],dp[i-1][j]})+1;
        
            }
        }
    }
    ll res=-1;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            res=max(res,dp[i][j]);
;        }
    }

 cout<<res;  
    
}