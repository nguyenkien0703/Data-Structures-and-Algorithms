/*

Thành phố Vice được xây dựng trên một nhóm các hòn đảo, với những cây cầu nối giữa chúng. Như bất kỳ ai ở Vice City đều biết, nỗi sợ hãi lớn nhất của các phó thành phố là một ngày nào đó các hòn đảo sẽ bị nhấn chìm. Vấn đề lớn của việc này là một khi các hòn đảo bị nhấn chìm, một số hòn đảo khác có thể bị ngắt kết nối. Bạn đã được thị trưởng thành phố Vice thuê để nói cho ông ta biết có bao nhiêu hòn đảo, khi bị nhấn chìm, sẽ ngắt kết nối các bộ phận của thành phố Vice. Bạn nên biết rằng ban đầu tất cả các hòn đảo của thành phố đều được kết nối với nhau.

Input Format

Dòng đầu tiên là N và M, tương ứng với số lượng đảo và cầu; M dòng tiếp theo của mỗi test case mô tả cầu nối giữa 2 hòn đảo u, v;

Constraints

1<=N<=1000; 1<=M<=N*(N-1)/2; 1<=u,v<=N;

Output Format

In ra số lượng hòn đảo khi bị ngập sẽ làm thành phố Vice bị ngắt kết nối.

Sample Input 0

6 8
1 3
6 1
6 3
4 1
6 4
5 2
3 2
3 5
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
set<ll> tru;
ll used[1001];
vll ke[1001];
ll low[1001], dics[1001];
int timer = 0;


int dfs(int u,int par){
    low[u]=dics[u]=++timer;
    int cnt = 0;
    for(int v : ke[u]){
        if(v== par)
            continue;
        if(dics[v]==0){
            dfs(v, u);
            ++cnt;
            if(par!=-1 && low[v] >=dics[u]){
                tru.insert(u);
            }
            low[u] = min(low[u], low[v]);
        }else {
            low[u] = min(low[u],dics[v]);
        }
    }
    return cnt;
}

void solve(){
    cin >> n >> m;
    
    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);

    }
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    ms(used, 0);
    FOR(i,1,n){
        if(dics[i]==0){
            int dem =dfs(i,-1);
            if(dem>=2){
                tru.insert(i);
            }
        }
    }
    cout<< tru.size()<<endl;
}
int main()
{
    
    faster;
    solve();

}
