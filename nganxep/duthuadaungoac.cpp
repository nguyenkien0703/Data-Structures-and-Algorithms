/*

Cho một biểu thức số học đúng nhưng có thể dư thừa dấu ngoặc, nhiệm vụ của bạn là kiểm tra xem biểu thức này có dư thừa dấu đóng mở ngoặc hay không.

Input Format

Dòng duy nhất chứa biểu thức cần kiểm tra

Constraints

Biểu thức chỉ chứa kí tự đóng mở ngoặc, các chữ cái in thường và các phép toán + - * / không quá 100 kí tự

Output Format

In ra YES nếu biểu thức dư thừa dấu ngoặc, ngược lại in ra NO

Sample Input 0

((x+y))
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

string s;
ll check(char c){
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}
ll solve(string s ){
    stack<char> st;
    for(char x : s ){
        if(x!=')'){
            st.push(x);
        }else{
            int ok = 0;
            while(st.top()!='('){
                if(check(st.top())){
                    ok = 1;
                }
                st.pop();
            }
            st.pop();
            if(ok ==0){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    
    faster;
    cin >> s;
    if(solve(s)){
        cout << "YES";
    }else cout << "NO";
}
