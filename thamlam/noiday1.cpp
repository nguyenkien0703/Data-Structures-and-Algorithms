/*

Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là nhỏ nhất

Input Format

Dòng 1 chứa số nguyên N; Dòng 2 chứa N số nguyên là độ dài các sợ dây

Constraints

1<=N<=10^5; Các sợi dây có độ dài không quá 10^5;

Output Format

In ra chi phí nối dây tối thiểu

Sample Input 0

7
7 7 6 10 4 8 3 
Sample Output 0

124
Sample Input 1

4
4 3 2 6
Sample Output 1

29
*/


#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    priority_queue<ll, vector<ll>, greater<ll>> pq;

    for (ll x : a)
        pq.push(x);
    ll ans = 0;
    while (pq.size() > 1)
    {
        ll top1 = pq.top();
        pq.pop();
        ll top2 = pq.top();
        pq.pop();
        ans += top1 + top2;
        pq.push(top1 + top2);
    }
    cout << ans << endl;
}