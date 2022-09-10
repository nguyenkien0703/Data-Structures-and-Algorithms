/*

Một số được coi là số đẹp nếu nó chỉ bao gồm 2 số là 8 và 0. Bạn được cấp một số nguyên dương X, nhiệm vụ của bạn là tìm bội dương nhỏ nhất của X thỏa mãn bội này là số đẹp.

Input Format

Dòng đầu tiên là số bộ test T. T dòng tiếp theo mỗi dòng là một số nguyên dương N.

Constraints

1<=T<=300; 1<=N<=300;

Output Format

Mỗi test in kết quả trên 1 dòng

Sample Input 0

6
240
19
55
47
287
247
Sample Output 0

8880
88008
880
80088
8088808
8000000008
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define foru(i, a, b) for (int i = a; i < b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;
ll n, k, ok, a[1000];
string s;
ll res[310];
void ktao()
{
    s = string(n, '0');
    s[n - 1] = '8';
}
void sinh()
{
    ll i = n;
    while (i >= 0 && s[i] == '8')
    {
        s[i--] = '0';
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] = '8';
    }
}

int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    n =19;
    vector<string > ans ;
    ok =1;
    ktao();
    while(ok ){
        ans .pb(s);
        sinh();
    }
    for(ll i=1;i<=300 ;i++){
        for(auto x :  ans){
            if(stoll(x)%i==0){
                res[i]=stoll(x);
                break;
            }
        }
    }
    ll t ;
    cin>> t;
    while(t--){
        ll x ;
        cin>> x ;
        cout<<res[x]<<endl;
    }
}