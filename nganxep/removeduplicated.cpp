/*

Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa các kí tự liền kề giống nhau khỏi xâu S. Ví dụ xâu aabbccc sau khi xóa các kí tự liền kề sẽ thành c, xâu abba sau khi xóa các kí tự liền kề sẽ thành xâu rỗng.

Input Format

Dòng duy nhất chứa xâu kí tự S

Constraints

1<=len(S)<=10000;

Output Format

In ra xâu S sau khi xóa các kí tự liền kề giống nhau, nếu xâu sau khi xóa rỗng thì in ra EMPTY.

Sample Input 0

dddbbabcb
Sample Output 0

dabcb

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



int main()
{
    
    faster;
    string s;
    cin >> s;
    stack<char> st;
    for(char  x : s){
        if(st.empty()){
            st.push(x);
        }else if(x ==st.top()){
            st.pop();

        }else st.push(x);
    }
    vector<char> ans;
    while(!st.empty()){
        ans.pb(st.top());
        st.pop();
    }
    if(ans.size()==0){
        cout << "EMPTY";
        return 0;
    }
    reverse(all(ans));
    for(char x : ans){
        cout << x;
    }
}
