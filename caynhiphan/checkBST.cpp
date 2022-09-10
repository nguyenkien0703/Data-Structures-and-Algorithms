/*
Cho thự tự duyệt Inorder của một cây nhị phân, hãy xác định xem thứ tự này có phải là thứ tự duyệt inorder của một cây nhị phân tìm kiếm hay không.

Input Format

Dòng đầu tiên là N : số lượng node trên cây; Dòng thứ 2 gồm N node theo thứ tự duyệt inorder

Constraints

1<=N<=1000; 1<=A[i]<=10^6;

Output Format

In ra YES nếu cây nhị phân đã cho là cây nhị phân tìm kiếm, ngược lại in ra NO.

Sample Input 0

8
1 3 5 7 9 11 14 16 
Sample Output 0

YES

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



int main()
{
    
    faster;
    ll n;
    cin >> n;
    ll a[n];
    FOR(i,0,n-1){
        cin >> a[i];
    }
    if(is_sorted(a,a+n)){
        cout << "YES";
    }else cout << "NO";
}
