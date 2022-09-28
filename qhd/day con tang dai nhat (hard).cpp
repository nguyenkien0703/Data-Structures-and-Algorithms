/*

Bạn được cung cấp một mảng chứa n số nguyên. Nhiệm vụ của bạn là xác định dãy con dài nhất tăng dần trong mảng, tức là dãy con dài nhất mà mọi phần tử đều lớn hơn phần tử trước đó. Một dãy con là một dãy có thể được dẫn xuất từ mảng bằng cách xóa một số phần tử mà không làm thay đổi thứ tự của các phần tử còn lại.

Input Format

Dòng đầu tiên chứa số nguyên n: kích thước của mảng. Sau đó có n số nguyên x1, x2,…, xn: nội dung của mảng.

Constraints

1≤n≤2⋅10^5; 1≤xi≤10^9;

Output Format

In ra chiều dài của dãy con tăng dài nhất

Sample Input 0

6
1 2 4 1 5 2
Sample Output 0

4
Sample Input 1

5
1 1 1 1 1
Sample Output 1

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
#define rep(a) for(ll i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<ll >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;



int main()
{

    // faster;
    // int t ;
    // cin >> t;
    // while(t--){

        ll n ;
        cin>> n;    
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vll v;
        v.pb(a[0]);
        for(ll i=0;i<n;i++){
            auto  it=lower_bound(all(v),a[i]);
            if(it!=v.end()){
                *it=a[i];
            }else {
                v.pb(a[i]);
            }
        }
        cout<<v.size()<<endl;
        v.clear();
    // }

}
