/*

Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là lớn nhất

Input Format

Dòng 1 chứa số nguyên N; Dòng 2 chứa N số nguyên là độ dài các sợ dây

Constraints

1<=N<=10^5; Các sợi dây có độ dài không quá 10^9;

Output Format

Đáp án của bài toán chia dư với 10^9 + 7

Sample Input 0

9
10 1 5 7 4 8 7 7 1 
Sample Output 0

305
Sample Input 1

3
5 6 1
Sample Output 1

23
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll MOD=1e9+7;
int  main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    priority_queue<ll> pq;

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
        ans%=MOD;
        pq.push(top1 + top2);
    }
    cout << ans%MOD << endl;
}