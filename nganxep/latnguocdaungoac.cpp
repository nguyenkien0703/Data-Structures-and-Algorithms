/*
Cho xâu S chỉ bao gồm dấu đóng mở ngoặc, hãy tìm số lượng dấu ngoặc tối thiểu cần phải đổi chiều để tạo thành một xâu hợp lệ.

Input Format

Dòng duy nhất chứa xâu S

Constraints

Xâu S có độ dài là số chẵn và có không quá 1000 kí tự

Output Format

In ra số lượng dấu ngoặc cần phải đổi chiều

Sample Input 0

)))())()()
Sample Output 0

2
Sample Input 1

(())(())()
Sample Output 1

0
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

string s;
int main()
{
    
    faster;
    cin>> s ;
    stack<char> st;
    int cnt = 0;
    
    for (char x : s ){
        if(st.empty()){
            if(x==')')
                ++cnt;
            st.push('(');
        }else if(x==')'){
            if(st.top()=='(')
                st.pop();
        }else
            st.push(x);
    }

    cout << st.size()/2 + cnt;
}
