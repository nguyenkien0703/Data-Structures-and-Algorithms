/*

Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A[i][j]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất. Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i][j] ≤ 9).
Output: 

Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
 

Ví dụ:

Input:

Output

3

4

5

0 3 1 2 9

7 3 4 9 9

1 7 5 5 3

2 3 4 2 5

1

6

0 1 2 3 4 5

5 5

1 1 1 9 9

9 9 1 9 9

1 1 1 9 9

1 9 9 9 9

1 1 1 1 1

24

15

13

 


*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll>
#define vii vector<pii>
#define pb push_back
#define fi first
#define el cout << endl
#define se second
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for (int i = 0; i < (a); i++)
#define vll vector<ll>
#define vi vector<int>
#define ms(a, n) memset(a, n, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
const ll MOD = 1e9 + 7;
int n , m ;
ll a[1000][1000];
ll d[1000][1000];
ll used[1000][1000];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};

void digit(int i ,int j ){
	priority_queue<pair<int,pii>, vector<pair<int, pii>> , greater<pair<int, pii>>>  q;
	d[i][j]=a[i][j];
	q.push({0,{i,j}});
	while(!q.empty()){
		pair<int,pii>  top  = q.top();q.pop();
		int kc = top.fi;
		int u = top.se.fi, v = top.se.se;
		if(used[u][v]==1) continue;
		used[u][v]=1;
		for(int k =0;k<4;k++){
			int u1= u + dx[k];
			int v1= v + dy[k];
			if(u1>=1 && u1<= n && v1>=1 && v1<= m && !used[u1][v1]){
				if(d[u1][v1] > d[u][v] + a[u1][v1]){
					d[u1][v1]= d[u][v] + a[u1][v1];
					q.push({d[u1][v1], {u1,v1}});
				}
			}
		}
	}
	cout<< d[n][m];el;

}
void solve(){
	cin>> n>> m ;
	ms(a,0);
	ms(used,0);
	FOR(i,1,n){
		FOR(j,1,m){
			cin>> a[i][j];
			d[i][j]=1e9;
		}
	}
	digit(1,1);

}

int main()
{
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif 
    faster;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
