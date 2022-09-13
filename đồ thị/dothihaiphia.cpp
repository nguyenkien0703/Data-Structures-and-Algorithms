/*


Trong Lý thuyết đồ thị, đồ thị hai phía là một đồ thị đặc biệt, trong đó tập các đỉnh có thể được chia thành hai tập không giao nhau thỏa mãn điều kiện không có cạnh nối hai đỉnh bất kỳ thuộc cùng một tập. Cho đồ thị vô hướng G = (V, E), hãy kiểm tra xem đồ thị đã cho có phải là đồ thị 2 phía hay không?image

Input Format

Dòng đầu tiên gồm 2 số n và m tương ứng với số đỉnh và số cạnh của đồ thị. M dòng tiếp theo là cạnh u-v, trong đó u khác v.

Constraints

1<=N<=1000; 1<=M<=N*(N-1)/2; 1<=u,v<=N;

Output Format

In ra YES nếu G là đồ thị 2 phía, ngược lại in NO

Sample Input 0

5 4
1 2
3 2
4 3
4 5
Sample Output 0

YES
Sample Input 1

6 5
2 1
2 3
3 4
5 4
1 6
Sample Output 1

YES
*/


// its gặp vc or là  làm mà chưa thấy bao giừo


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
vll ke[1001];
ll color[1001];
bool dfs(int u, int par){
    color[u]= 3 - color[par];
    for(int x : ke[u]){
        if(!color[x]){
            if(!dfs(x,u)){
                return false;
            }
        }else if(color[x]==color[u]){
            return false;
        }
    }
    return true;
}
void solve(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(color, 0);
    color[0] = 2;
    for (int i = 1; i <= n;i++){
        if( color[i] == 0&& !dfs(i,0)){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}

int main()
{
    
    faster;
    solve();
}
