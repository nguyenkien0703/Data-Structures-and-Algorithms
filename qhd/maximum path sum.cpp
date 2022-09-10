/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới về bên phải. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j]. Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là lớn nhất.

Input Format

Dòng 1 gồm số nguyên dương N và M; N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j];

Constraints

1<=N,M<=500; 1<=A[i][j]<=1000;

Output Format

In ra kết quả của bài toán

Sample Input 0

5 5
1 0 31 5 25 
28 26 32 46 7 
26 40 36 13 16 
7 26 14 6 11 
42 45 11 10 21 
Sample Output 0

208

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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
//const ll INT_MAX = 1e9;
ll n, s;


int main()
{
    faster;
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    ms(a, 0);
    FOR(i,1,n){
        FOR(j,1,m){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n;i++){
        for(int j = 1; j <= m; j++){
            if(i==1){
                a[i][j] = a[i][j - 1] + a[i][j];
            }else if(j==1)
                a[i][j] = a[i - 1][j] + a[i][j];
            else {
                a[i][j]=max(a[i-1][j],a[i][j-1])+a[i][j];
            }
        }
    }
    cout << a[n][m] << endl;
}