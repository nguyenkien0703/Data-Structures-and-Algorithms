/*
Yêu cầu bạn xây dựng một stack với các truy vấn sau đây: “push x”: Thêm phần tử x vào stack. “top”: In ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”. “pop”: Xóa phần tử đầu tiên của stack. Nếu stack rỗng, không làm gì cả.

Input Format

Dòng đầu tiên là số lượng truy vấn T T≤ 1000). Mỗi truy vấn có dạng như trên.

Constralls

N/A

Output Format

Với mỗi truy vấn “top”, hãy in ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”.

Sample Input 0

8
push 815
push 30
top
push 242
push 502
top
push 876
top
Sample Output 0

30
502
876
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
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(ll i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;



void solve(){
    

}
int  main()
{
    
    faster;
    ll t ;
    cin>> t ;
    stack<ll> st;

    while(t--){
        string s;
        cin >> s;
        if(s=="push"){
            ll x;
            cin >> x;
            st.push(x);
        }else if(s=="top"){
            if(!st.empty()){

            cout << st.top() << endl;
            // st.pop();
            }else {
                cout << "NONE\n";
            }
        }else {
            if(st.empty()==false){
                st.pop();
            }
        }
    }
    

}
