/*
Cho 2 xâu kí tự S và T, hãy tìm xâu con chung dài nhất của S và T. Các kí tự của xâu con không nhất thiết phải liền kề nhau.

Input Format

Dòng đầu tiên là xâu S; Dòng thứ 2 là xâu T;

Constraints

S và T chỉ gồm các chữ cái in hoa và có độ dài không quá 1000

Output Format

In ra độ dài xâu con chung dài nhất của S và T

Sample Input 0

ZHFTDFHF
TFISHROV
Sample Output 0

3

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
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
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

string s , t ;
void solve(string s, string t ){
    int  n=s.size(),m=t.length();

    vector<vector<int>> dp(n+5,vector<int>(m+5,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][m]<<endl;
}
int main()
{

    faster;
    cin>> s >> t ;
    solve(s,t);

}
