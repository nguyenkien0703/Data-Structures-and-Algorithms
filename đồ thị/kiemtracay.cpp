/*


Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng. Cho một đồ thị vô hướng N đỉnh và M cạnh, hãy kiểm tra đồ thị đã cho có phải là một cây hay không?

Input Format

Dòng đầu tiên là số n, m tương ứng với số lượng đỉnh, cạnh của đồ thị. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

Constraints

1<=n<=1000; 1<=m<=n*(n-1)/2;

Output Format

In ra 1 nếu đồ thị đã cho là cây, ngược lại in ra 0.

Sample Input 0

6 5
4 3
2 1
6 5
5 4
3 2
Sample Output 0

1
Sample Input 1

6 4
6 3
3 2
4 2
6 4
Sample Output 1

0
*/


// cây là đồ thị vô hướng, có chu trình


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
int color[1001];

bool dfs(int u,int par ){
    used[u]=1;
    for(int x : ke[u]){
        if(!used[x]){
            parent[x]=u;
            if(dfs(x,u)){
                return true;
            }
        }else if(x!=par){
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
    int cnt =0;
    for(int i=1;i<=n;i++){
        if(!used[i]){
            ++cnt;
            if(dfs(i,0)){
                cout<<0;
                return ;
            }
        }
    }
    cout<<(cnt==1?1:0);

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
