/*
Cho một biểu đồ gồm các cột với chiều cao H[i], nhiệm vụ của bạn là tìm hình chữ nhật có diện tích lớn nhất che phủ bởi các cột trong biểu đồ.image

Input Format

Dòng đầu tiên là N : số lượng cột trong biểu đồ. Dòng thứ 2 gồm N số là chiều cao các cột trong biểu đồ.

Constraints

1<=N<=10^5; 1 <= H[i]<=10^6

Output Format

In ra diện tích lớn nhất tìm được.

Sample Input 0

7
6 2 5 4 5 1 6
Sample Output 0

12


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

ll n;
/*
idea là cứ duyệt về sau , duy trì thêm 1 chỉ số i để biết xem mình đg duyệt đến cột nào ròi 
nếu côt ké tiếp mà có chiều cao lớn hơn chiều của của st.top
thì mình lưu vào 
còn nếu nhỏ hơn,nghĩa là bị đứt quãng thì ta phải tính thôi 

*/
int main()
{
    
    faster;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n;i++){
        cin>>a[i];
    }
    stack<ll> st;
    ll ans = 0;
    int i = 0;
    while(i< n ){
        if(st.empty()|| a[st.top()]<=a[i]){
            st.push(i);
            ++i;
        }else {
            // đây là case nếu đg duyệt mà gặp thằng ngắn tủnthì ta phải tính ngay 
            int pos = st.top();
            st.pop();
            ll tmp;
            if(st.empty()){
                tmp =a[pos]* i ;
            }else {
                tmp = a[pos] * (i - st.top() - 1);
            }
            ans = max(ans,tmp);
        }
    }
    // còn đây là toàn các thằng lớn dần dc push vào trong mảng
    while(!st.empty()){
        int pos = st.top();
        st.pop();
        ll tmp;
        if(st.empty()){
            tmp =a[pos]* i ;
        }else {
            tmp = a[pos] * (i - st.top() - 1);
        }
        ans = max(ans,tmp);
    }
    cout << ans;
}
