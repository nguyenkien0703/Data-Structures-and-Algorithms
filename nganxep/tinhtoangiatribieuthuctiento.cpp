/*

Cho biểu thức tiền tố S, các số trong biểu thức chỉ là số có 1 chữ số, yêu cầu tính toán giá trị của biểu thức.

Input Format

Dòng duy nhất chứa biểu thức S

Constraints

S có độ dài không quá 1000

Output Format

In ra giá trị của biểu thức S

Sample Input 0

+-7/451
Sample Output 0

8

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
ll calc(int a, int b,char c ){    
    if(c=='+'){
        return a + b;
    }else if(c=='-'){
        return a - b;
    }else if(c=='/'){
        return a / b;
    }else{
        return a * b;
    }
}
string s;
int main()
{
    
    faster;
    stack<int > st;
    cin >> s;
    for (int i = s.length() - 1; i >= 0;i--)
    {
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }else {
            int top1 = st.top();
            st.pop();
            int top2 = st.top();
            st.pop();
            int ans = calc(top1, top2, s[i]);
            st.push(ans);
        }
    }
    cout << st.top();
}
