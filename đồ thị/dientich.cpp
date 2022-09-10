/*
Bạn được cung cấp một lưới 2D. Dấu '#' đại diện cho chướng ngại vật và dấu '.' đại diện cho không gian trống. Bạn cần tìm các khu vực của các thành phần bị ngắt kết nối. Các ô (i + 1, j), (i, j + 1), (i-1, j), (i, j-1) là các ô liền kề với ô (i, j).

Input Format

Dòng đầu tiên là n và m, tương ứng với số dòng và số cột của lưới 2D. N dòng tiếp theo, mỗi dòng là m kí tự '#'' hoặc '.'.

Constraints

1<=N,M<=1000;

Output Format

In ra diện tích các vùng không gian trống liền kề trên 1 dòng.

Sample Input 0

10 10
###.#.#..#
.######...
###..##.#.
.##...###.
##....#..#
.#..###...
..####.##.
...##.....
..#...####
.#..##.##.
Sample Output 0

1 1 8 1 11 1 17 9 1 1 
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

int n, m;
char a[10001][10001];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int dfs(int i, int j ){
    a[i][j] = '#';
    int dem = 1;
    for (int k = 0; k < 4;k++){
        int i1= i+dx[k];
        int j1= j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='.'){
            dem+=dfs(i1,j1);
        }
    }
    return dem;
}
void solve(){
    cin >> n >> m;
    for (int i = 1; i <= n;i++){
        for(int j = 1; j <= m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j]=='.'){
                int cnt = dfs(i, j);
                cout << cnt << ' ';
            }
        }
    }

}
int main()
{
    
    faster;
    solve();

}
