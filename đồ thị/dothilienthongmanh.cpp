/*
Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra đồ thị có liên thông mạnh hay không? Bài này các bạn thử cài đặt bằng 3 cách là : brute force, thuật toán Tarjan, thuật toán Kosaraju.

Input Format

Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

Constraints

1=<=n<=1000; 1<=m<=n*(n-1)/2;

Output Format

In ra 1 nếu đồ thị liên thông mạnh, ngược lại in ra 0.

Sample Input 0

6 14
3 4
3 1
2 5
2 6
4 6
2 3
5 6
1 5
1 2
3 5
4 5
6 3
4 2
1 4
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

int n, m;
vll ke[1001],T_ke[1001];
ll used[1001];
stack<int> st;

void dfs(int u){
    used[u] = 1;
    for (int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
    st.push(u);

}

void T_dfs(int u ){
    // cout << u << ' ';
    used[u] = 1;

    for(int x : T_ke[u]){
        if(!used[x]){
            T_dfs(x);
        }
    }
}


void solve(){
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        T_ke[y].pb(x);
    }
    ms(used, 0);
    for (int i = 1; i <= n;i++){
        if(!used[i]){
            dfs(i);
        }
    }
    int cnt = 0;
    ms(used, 0);
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!used[top]){
            ++cnt;
            T_dfs(top);
            // cout << endl;
        }
    }
    cout << (cnt == 1 ? 1 : 0);
}
int main()
{
    
    faster;
        solve();
    
    

}
