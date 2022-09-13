/*

Tý đang xây dựng một mạng xã hội và mời các bạn của mình dùng thử. Bạn của bạn cũng là bạn. Vì vậy, Tý muốn mạng xã hội của mình là hoàn hảo, tức với mọi bộ ba X, Y, Z, nếu X kết bạn với Y, Y kết bạn với Z thì X và Z cũng phải là bạn bè của nhau trên mạng xã hội. Các bạn hãy xác định xem mạng xã hội hiện tại của Tý có là hoàn hảo hay không? Nếu có hãy in ra “YES”, “NO” trong trường hợp ngược lại.

Input Format

Mỗi test bắt đầu bởi 2 số nguyên N và M. M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết u và v là kết bạn với nhau trên mạng xã hội của Tý.

Constraints

1<= N, M ≤ 100 000)

Output Format

In ra kết quả của bài toán

Sample Input 0

4 3
1 3
3 4
1 4
Sample Output 0

YES
Sample Input 1

4 4
3 1
2 3
3 4
1 2
Sample Output 1

NO

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
#define sz(a) a.size();
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
int used[1001];
vll ans;
void dfs(int u ){
    used[u] = 1;
    ans.pb(u);
    for(int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}

void solve(){

    cin >> n >> m;
    FOR(i,1,m){
        int x, y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    ms(used, 0);
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    for (int i = 1; i <= n;i++){
        int kien =ke[i].size();
        for(int x : ke[i] ){
            if(ke[x].size()!=kien){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
int main()
{
    
    faster;
    solve();
}
