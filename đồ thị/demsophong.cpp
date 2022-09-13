/*
Bạn được đưa cho một bản đồ của một tòa nhà và nhiệm vụ của bạn là đếm số lượng phòng của tòa nhà đó. 
Kích thước của bản đồ là n × m hình vuông và mỗi hình vuông là sàn hoặc tường. Bạn có thể đi bộ sang trái, phải, lên và xuống qua các ô sàn.

Input Format

Dòng nhập đầu tiên có hai số nguyên n và m:
 chiều cao và chiều rộng của bản đồ. Khi đó có n dòng gồm m ký tự mô tả bản đồ.
  Mỗi ký tự là một trong hai ký tự '.' hoặc '#' tương ứng với sàn nhà và tường.

Constraints

1≤n,m≤1000

Output Format

In ra số nguyên duy nhất là số phòng của tòa nhà

Sample Input 0

6 6
..###.
...#..
#..#..
.##.#.
######
.#.##.
Sample Output 0

7
Sample Input 1

6 6
####.#
.#..##
.#..##
####..
#...##
.##..#
Sample Output 1

6
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
char a[1001][1001];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
void dfs(int i,int j ){
    a[i][j] = '#';
    for (int k = 0; k < 4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 && i1<= n  && j1>=1 && j1<=m && a[i1][j1]=='.'){
            dfs(i1, j1);

        }

    }
}

void solve(){
    cin >> n >> m;
    
    FOR(i,1,n){
        FOR(j,1,m){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    FOR(i,1,n){
        FOR(j,1,m){
            if(a[i][j]=='.'){
                ++cnt;
                dfs(i, j);
            }
        }
    }
    cout << cnt;
}
int main()
{
    
    faster;
    solve();


}
