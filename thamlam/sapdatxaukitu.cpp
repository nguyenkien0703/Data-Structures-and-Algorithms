/*

Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

Input Format

Dòng 1 chứa số nguyên K; Dòng 2 chứa xâu S;

Constraints

1<=K<=100000; 1<=len(S)<=100000;

Output Format

In ra đáp án của bài toán

Sample Input 0

2
adrwda
Sample Output 0

4

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    map<char, int> mp;
    for (char x : s)
    {
        mp[x]++;
    }
    priority_queue<int> pq;
    for (auto it : mp)
    {
        pq.push(it.second);
    }
    while (k > 0)
    {
        int top = pq.top();
        pq.pop();
        --top;
        --k;
        pq.push(max(top, 0));
    }
    ll ans = 0;
    while (!pq.empty())
    {
        ans += 1ll * pq.top() * pq.top();
        pq.pop();
    }
    cout << ans << endl;
}