/*

Cho một bảng kích thước NxM, được chia thành lưới ô vuông đơn vị N dòng M cột. Trên các ô của bảng ghi số 0 hoặc 1. Nhiệm vụ của bạn là tìm hình chữ nhật gồm các ô của bảng thoả mãn các điều kiện sau: - Hình chữ nhật đó chỉ gồm các số 1. - Cạnh hình chữ nhật song song với cạnh bảng. - Diện tích hình chữ nhật là lớn nhất.

Input Format

Dòng đầu tiên là N và M; N dòng tiếp theo mỗi dòng gồm M số 0 hoặc 1.

Constraints

1<=N, M<=500; Các phần tử trong bảng là 0 hoặc 1.

Output Format

In ra đáp án của bài toán

Sample Input 0

6 6
1 0 0 1 1 0 
0 1 0 0 0 0 
0 0 1 0 0 1 
0 0 1 1 0 1 
0 1 1 0 0 1 
0 0 1 1 0 1 
Sample Output 0

4


*/
//tmp [i]: luu chieu cao toi da cua cot thu i co cac chu so 1 lien ke 


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
ll check(ll a[],int n ){
    ll res = 0;
    int i = 0;
    stack<ll> st;
    while(i< n){
        if(st.empty()|| a[st.top()]<=a[i]){
            st.push(i);
            ++i;
        }else {
            int pos = st.top();
            st.pop();
            ll tmp;
            if(st.empty()){
                tmp = a[pos] * i;
            }else {
                tmp = a[pos] * (i - st.top() - 1);
            }
            res = max(res, tmp);
        }
    }
    while(!st.empty()){
        int pos = st.top();
        st.pop();
        ll tmp;
        if(st.empty()){
            tmp = a[pos] * i;
        }else {
            tmp = a[pos] * (i - st.top() - 1);
        }
        res = max(res, tmp);
    }
    return res;
}
int main()
{
    
    faster;
    cin>>n>>m;
    ll a[n][m];
    FOR(i,0,n-1){
        FOR(j,0,m-1){
            cin>>a[i][j];
        }
    }
    ll tmp[n][m];
    FOR(i,0,n-1){
        FOR(j,0,m-1){
            if(i==0){
                tmp[i][j] = a[i][j];
            }else if(a[i][j]){
                tmp[i][j] = tmp[i - 1][j] + a[i][j];
            }else
                tmp[i][j] = 0;
        }

    }
    ll res = 0;
    for(int i=0;i<n;i++){
        res= max(res,check(tmp[i],m));
    }
    cout << res;
}
