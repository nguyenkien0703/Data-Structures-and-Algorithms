/*
Cho xâu kí tự S chỉ bao gồm các kí tự in thường, hãy kiểm tra xem có thể sắp đặt lại các kí tự trong xâu sao cho không có 2 kí tự kề nhau nào giống nhau hay không?

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=10000;

Output Format

Nếu có thể sắp đặt lại xâu kí tự in ra YES, ngược lại in ra NO.

Sample Input 0

aqeaaqwq
Sample Output 0

YES
Submissions: 47
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More

*/



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
void solve(string s)
{

    vector<ll> cnt(26, 0);
    for (ll i = 0; i < s.size(); i++)
        cnt[s[i] - 'a']++;
    ll max_count = 0;
    
    for (ll i = 0; i < cnt.size(); i++)
        max_count = max(max_count, cnt[i]);
    ll ans = (ll)s.length() - max_count;
    cout << (ans >= max_count-1  ? "YES" : "NO");
}

int main()
{

    string s;
    cin >> s;
    solve(s);
}