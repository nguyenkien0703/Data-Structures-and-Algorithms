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
/*

Cho biểu thức S ở dạng trung tố, hãy biến đổi S về dạng hậu tố và in ra màn hình

Input Format

Dòng duy nhất chứa biểu thức S chỉ chứa các toán tử +, -, *, / và các chữ cái.

Constraints

1<=len(S)<=1000

Output Format

In ra biểu thức hậu tố tương ứng

Sample Input 0

(X+(Y-Z))
Sample Output 0

XYZ-+
*/
string s;
ll douutien(char x ){
	if(x=='^'){
		return 3;
	}
    else if(x=='*' || x=='/'){
        return 2;
    }else if(x=='+' || x=='-'){
        return 1;
    }else
        return 0;
}
int main()
{
    
    faster;
    cin >> s;
    string res = "";
    stack<char> st;
    for(char x : s ){
        if(x=='('){
            st.push(x);
        }else if(isalpha(x)){
            res += x;

        }else if(x==')'){
            while(!st.empty() && st.top()!='('){
                res += st.top();
                st.pop();
            }
            st.pop();
        }else {
            while(!st.empty() && douutien(st.top())>=douutien(x)){
                res += st.top();
                st.pop();
            }
            st.push(x);

        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    cout << res;
}
