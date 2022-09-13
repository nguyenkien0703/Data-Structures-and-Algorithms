/*

Ở 28techland có n thành phố và m đường giữa chúng. Mục tiêu là xây dựng những con đường mới để có một tuyến đường giữa hai thành phố bất kỳ. Nhiệm vụ của bạn là tìm ra số lượng đường tối thiểu cần thiết, đồng thời xác định những con đường nào nên được xây dựng.

Input Format

Dòng đầu tiên có hai số nguyên n và m: số thành phố và đường. Các thành phố được đánh số từ 1 tới n. Sau đó, có m dòng mô tả các con đường. Mỗi dòng có hai số nguyên a và b: có một con đường giữa các thành phố đó, các con đường này là đường 2 chiều. Một con đường luôn nối hai thành phố khác nhau và có nhiều nhất một con đường giữa hai thành phố bất kỳ.

Constraints

1<=n<=1000; 0<=m<=n*(n-1)/2; 1<=a,b<=n;

Output Format

Dòng đầu tiên in ra K là số con đường cần xây dựng. K dòng tiếp theo in ra các con đường được xây dựng, do có nhiều cách xây dựng đường nên bạn sẽ lựa chọn ra các con đường có thứ tự từ điển nhỏ nhất để xây dựng nhưng với một điều kiện đó là, mỗi thành phố được lựa chọn là điểm xuất phát của con đường không quá 1 lần.

Sample Input 0

6 3
4 3
4 1
4 2
Sample Output 0

2
1 5
5 6
Explanation 0

Có thể có nhiều cách xây dựng đường đi ví dụ : xây dựng đường đi giữa thành phố 2 và 5, 1 và 6 sẽ kết nối mọi thành phố. Tuy nhiên do yêu cầu của đầu bài, bạn sẽ phải xây dựng 2 con đường là 1->5, 5->6. Không thể xây dựng 1->5, 1->6 vì như vậy thành phố 1 sẽ 2 lần là điểm khởi đầu của con đường.
\
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
int color[1001];

char a[1001][1001];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
void dfs(int u ){
    used[u]=1;
    for(int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(used,0);
    ms(parent,0);
    ms(color,0);
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    vll ans ;
    FOR(i,1,n){
        if(!used[i]){
            ans.pb(i);
            dfs(i);
        }
    }
    cout<< ans.size()-1<<endl;
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<' '<<ans[i+1]<<endl;
    }
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
