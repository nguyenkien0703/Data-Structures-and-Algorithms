/*

Cho biểu thức chỉ bao gồm dấu '(' và ')', nhiệm vụ của bạn là hãy sinh ra các xâu biểu thức cân bằng, ví dụ về biểu thức cân bằng (), ()()(), ((())), (())((())), ví dụ về biểu thức không cân bằng (()))(, ()()))

Input Format

Dòng duy nhất chứa số nguyên dương N là độ dài của biểu thức

Constraints

2<=N<=14, N là số chẵn

Output Format

In ra các biểu thức cân bằng theo thứ tự từ điển. Nếu không tồn tại biểu thức hợp lệ có độ dài N thì in ra NOT FOUND.

Sample Input 0

4
Sample Output 0

(())
()()
*/

#include <bits/stdc++.h>
using namespace std;
string s;
int n, ok, a[1000];
bool check(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (!st.empty() && st.top() == ')')
        {
            return false;
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && st.top() == '(' && s[i] == ')')
            st.pop();
        else if (st.empty() && s[i] == ')')
            return false;
    }
    if (st.size() == 0)
    {
        return true;
    }
    else
        return false;
}
string ans;
void sinh()
{
    int i = ans.size() - 1;
    while (i >= 0 && ans[i] == '1')
    {
        ans[i--] = '0';
    }
    if (i == -1)
        ok = 0;
    else
        ans[i] = '1';
}
int main()
{
    cin >> n;
    ans = string(n, '0');
    ok = 1;
    int isHave = 0;
    while (ok)
    {
        string s = "";
        for (int i = 0; i < ans.length(); i++)
        {
            if (ans[i] == '0')
            {
                s += '(';
            }
            else
            {
                s += ')';
            }
        }
        if (check(s))
        {
            cout << s << endl;

            isHave = 1;
        }
        sinh();
    }
    if (!isHave)
    {
        cout << "NOT FOUND\n";
    }

    return 0;
}
