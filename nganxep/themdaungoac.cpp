/*

Cho một xâu kí tự chỉ bao gồm dấu đóng mở ngoặc tròn. Hãy tìm số lượng dấu đóng mở ngoặc cần thêm tối thiểu để tạo thành một xâu cân bằng, bạn có thể thêm các kí tự đóng mở ngoặc vào bất kì vị trí nào của xâu.

Input Format

Xâu kí tự S trên 1 dòng

Constraints

1<=len(S)<=10000;

Output Format

In ra số lượng dấu ngoặc cần bổ sung để xâu cân bằng

Sample Input 0

))))()
Sample Output 0

4
Sample Input 1

(((())))
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


string s ;
int main()
{
    
    faster;
    cin >> s;
    stack<char> st,st1;
    int cnt = 0;
    for(char x : s){
        if(st.empty()){
            st.push(x);
        }else if(x==')'){
            if(st.top()=='('){
                cnt +=2;
                st.pop();
            }
        }else st.push(x);
    }
    cout << s.length() - cnt;
}
