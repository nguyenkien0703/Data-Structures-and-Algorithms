/*


Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy xác định xem đồ thị có tồn tại chu trình hay không? Bài này các bạn cài đặt bằng 3 phương pháp : DFS, BFS và DSU.

Input Format

Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

Constraints

1<=n<=1000; 1<=m<=n*(n-1)/2;

Output Format

In ra 1 nếu đồ thị tồn tại chu trình, ngược lại in ra 0.

Sample Input 0

10 11
10 5
10 4
10 1
10 3
5 2
5 4
10 8
5 3
5 1
10 6
10 9
Sample Output 0

1

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






int n , m ;
int used[1001];
vll ke[1001];
int parent[1001];
bool bfs(int u ){
    // ton tai cann nnguoc

    queue<int> q;
    q.push(u);
    used[u]=1;
    while(!q.empty()){
        int top =q.front();q.pop();
        for(int x : ke[top]){
            if(!used[x]){
                q.push(x);
                used[x]=1;
                parent[x]=top;
                //x da duoc tham , va x ko la con truc tiep cua top
            }else if(x!=parent[top]){
                return true;
            }

        }
    }
    return false;
}
bool dfs(int u){
    used[u]=1;
    for(int x : ke[u]){
        if(!used[x]){
            parent[x]=u;
            if(dfs(x)){
                return true;
            }
        }else if(x!=parent[u]){
            return true;
        }
    }
    return false;
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        ke[a].pb(b);
        ke[b].pb(a);

    }
    ms(used,0);
    ms(parent,0);
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            if(bfs(i)){
                cout<<1;
                return ;
            }
        }
    }
    cout<< 0;

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    faster;
    solve();
    

}
