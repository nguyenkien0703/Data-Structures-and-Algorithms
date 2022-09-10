/*
Cho bàn cờ A cỡ nxn, một con mã ở ô (s, t) muốn di chuyển sang ô (u, v). Hãy tìm số bước tối thiểu để con mã có thể đến ô (u, v) hoặc xác định rằng con mã không thể đi tới nơi. Bàn cờ A được mô tả bằng các giá trị 0, 1, trong đó ô có giá trị 1 thì con mã có thể tự do di chuyển đến ô này, ngược lại nếu giá trị tại một ô của bàn cơ là 0 thì con mã không thể di chuyển đến ô này.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 gồm 4 số nguyên s, t, u, v. Dữ liệu đảm bảo ô (s, t) có giá trị 1. N dòng tiếp theo, mỗi dòng gồm N số nguyên mô tả bàn cờ.

Constraints

2<=n<=1000; 0<=A[i][j]<=1;

Output Format

In ra số bước đi tối tiểu của con mã hoặc in ra -1 nếu con mã không thể đi đến nơi.

Sample Input 0

10
6 7 8 9
0 1 1 0 1 0 1 0 1 0 
1 1 0 0 1 1 0 0 1 0 
1 1 0 1 1 0 0 1 0 0 
0 1 1 1 1 1 1 1 1 0 
0 0 1 0 0 1 1 1 1 1 
1 1 0 1 1 0 1 0 0 0 
1 0 0 0 0 1 1 0 1 1 
1 1 1 1 1 1 1 0 1 1 
1 0 0 1 1 1 0 1 1 1 
1 0 0 1 1 0 0 1 0 1 
Sample Output 0

4

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
int n, s, t, u, v;
int a[1001][1001];
int d[1001][1001];
int dx[8] = {-2,-1,1,2,-2,-1,1,2};
int dy[8] = {-1,-2,-2,-1,1,2,2,1};
void bfs(int i, int j){
    queue<pii> q;
    q.push({i, j});
    a[i][j] = 0;
    d[i][j] = 0;
    while(q.size()){
        pii top=q.front();q.pop();
        for (int k = 0; k < 8;k++){
            int i1=top.first+dx[k];
            int j1=top.se+dy[k];
            if(i1>=1 && i1<=n && j1>=1 && j1<=n&& a[i1][j1]==1){
                q.push({i1,j1});
                d[i1][j1] = d[top.first][top.se] + 1;
                a[i1][j1] = 0;
            }
        }
    }

}

void solve(){
    cin >> n >> s >> t >> u >> v;
    
    FOR(i,1,n){
        FOR(j,1,n){
            cin>>a[i][j];
        }
    }
    if(a[u][v]==1){
        bfs(s, t);
        if(a[u][v]==1){
            cout << -1;
        }else
            cout << d[u][v];
    }else {
        cout << -1;
    }

}
int main()
{
    
    faster;
        solve();
    

}
