/*

Cho một xâu kí tự chỉ bao gồm các kí tự '(', ')', '{', '}', ']', "]", hãy xác định xem các dấu ngoặc trong xâu có cân bằng hay không. Một vài ví dụ về xâu cân bằng : ((())), {{((()))}}[][][], (())(()())...

Input Format

Xâu kí tự S trên 1 dòng

Constraints

1<=len(S)<=10000

Output Format

In ra YES hoặc NO nếu xâu kí tự cân bằng hoặc không.

Sample Input 0

((((()))))
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


bool check(string s ){

    bool ok = true;
    stack<char> st;
    
    for(char x : s){
        if(st.empty()){
            st.push(x);
        }else if(x==')'){
            if(st.top()=='('){
                st.pop();
            }else return false;
        }else if(x=='}'){
            if(st.top()=='{'){
                st.pop();
            }else return false;
        }else if(x==']'){
            if(st.top()=='['){
                st.pop();
            }else return false;
        }else st.push(x);
    }
    return st.size() == 0;
}
int main()
{
    
    faster;
    string s;
    cin >> s;
    if(check(s)){
        cout << "YES\n";
    }else
        cout << "NO\n";
}
