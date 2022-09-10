/*
Cho một số tự nhiên N được biểu diễn như một xâu kí tự, bạn hãy tính tổng của tất cả các số tạo bởi các xâu con liên tiếp của N, ví dụ N = 235 thì ta có tổng = 2 + 3 + 5 + 23 + 35 + 235.

Input Format

Dòng duy nhất chứa số nguyên dương N

Constraints

1<=N<=10^12

Output Format

In ra kết quả của bài toán

Sample Input 0

1807
Sample Output 0

2915

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
string s;
// ll dp[1000];

int main()
{
    faster;
    
    cin>>s;
    int n =s.length();
    ll dp[n];
    dp[0]=s[0]-'0'; 
    ll sum =dp[0];
    for(int i=1;i<n;i++){
        dp[i]=10*dp[i-1]+(s[i]-'0')*(i+1);
        sum+=dp[i];
    }    
    cout<<sum<<endl;


    
}