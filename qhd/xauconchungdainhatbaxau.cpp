/*

Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.

Input Format

3 dòng lần lượt chứa X, Y, Z;

Constraints

1<=len(X), len(Y), len(Z) <= 100;

Output Format

In ra độ dài của xâu con chung dài nhất của 3 xâu

Sample Input 0

AGLEHHGE
GLGHLALB
DDLBLEHGD
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
string s, t, k;


void solve(string s,string t,string k){
    int n =s.length(),m=t.length(),y=k.length();
    vector<vector<vector<int>>> dp(n + 5, vector < vector<int>>(m + 5, vector<int>(y + 5, 0)));
    FOR(i,1,n){
        FOR(j,1,m){
            FOR(z,1,y){
                if(s[i-1]==t[j-1]&& s[i-1]==k[z-1]){
                    dp[i][j][z] = dp[i - 1][j - 1][z - 1] + 1;
                }else {
                    dp[i][j][z] = max({dp[i - 1][j][z], dp[i][j - 1][z], dp[i][j][z - 1]});
                }

            }
        }
    }
    cout << dp[n][m][y] << endl;
}
int main()
{
    faster;
    cin >> s >> t >> k;
    solve(s, t, k);
}