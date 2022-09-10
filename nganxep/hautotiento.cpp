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
Cho biểu thức S ở dạng hậu, hãy biến đổi S về dạng tiền tố và in ra màn hình

Input Format

Dòng duy nhất chứa biểu thức S

Constraints

1<=len(S)<=1000

Output Format

In ra biểu thức tiền tố tương ứng

Sample Input 0

AB+UV-/
Sample Output 0

/+AB-UV

*/
string s;
int main()
{
    
    faster;
    cin >> s;
    // string ans = "";
    stack<string > st;
    for (int i = 0;i<s.length();i++){
        if(isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }else {
            string top1 = st.top();
            st.pop();
            string top2 = st.top();
            st.pop();
            string tmp = s[i]+top2 + top1;
             st.push(tmp);
        }


    }
    cout << st.top();
}
