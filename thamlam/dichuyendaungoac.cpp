/*

Cho một xâu kí tự S chỉ bao gồm các kí tự '(' hoặc kí tự ')'. S có độ dài là số chẵn có giá trị N. Xâu S gồm N / 2 kí tự mở ngoặc và N / 2 kí tự đóng ngoặc. Ở mỗi thao tác các bạn được lựa chọn 1 kí tự bất kì của S để đưa về vị trí đầu tiên hoặc vị trí cuối cùng của dãy. Các bạn hãy xác định số thao tác tối thiểu cần thực hiện để tạo được 1 xâu dấu ngoặc hợp lệ. Một số ví dụ về xâu hợp lệ : (), (((()))), ()((()))...

Input Format

Một dòng duy nhất chứa xâu S

Constraints

1<=N<=1000;

Output Format

In ra số thao tác tối thiểu cần thực hiện

Sample Input 0

)))((((())
Sample Output 0

3

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define el cout << endl
#define se second
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for (int i = 0; i < (a); i++)
#define vll vector<ll>
#define vi vector<int>
#define ms(a) memset(a, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll MOD = 1e9 + 7;

int main()
{
    faster;
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty()&& st.top()=='(')
            {
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    cout<<st.size()/2;
    
}