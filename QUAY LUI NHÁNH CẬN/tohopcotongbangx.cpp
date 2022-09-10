/*
Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A[] có tổng bằng X. Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A[] được in ra theo thứ tự không giảm các số. Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau: {2, 2, 2, 2}, {2, 2, 4}, {2, 6}, {4, 4}, {8}.

Input Format

Dòng thứ nhất là hai số N và X; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống

Constraints

1<=N<=20; 1<=X,A[i]<=100;

Output Format

In ra số tổ hợp thỏa mãn sau đó in ra các tổ hợp thỏa mãn trên từng dòng. Xem output để rõ hơn cách in. Trong trường hợp không có tổ hợp thỏa mãn thì in ra -1.

Sample Input 0

3 10
4 2 3 
Sample Output 0

5
{2 2 2 2 2}
{2 2 2 4}
{2 2 3 3}
{2 4 4}
{3 3 4}

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define foru(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;
int n, s, a[1000], b[1000], ok;
int cnt = 0;
vector<vector<int>> ans;
void in(int n)
{
    vector<int> tmp;
    for (int i = 1; i <=n ; i++)
    {
        tmp.pb(b[i]);
    }

    ans.pb(tmp);
}
void Try(int i, int sum, int cur)
{
    if (sum == s)
    {
        in(i-1);
        ok = 1;
        return;
    }
    foru(j, cur, n)
    {
        sum += a[j];
        b[i] = a[j];
        if (sum <= s)
        {
            Try(i + 1, sum, j);
        }
        sum -= a[j];
    }
}
void solve()
{
    ans.clear();
    cin >> n >> s;
    ok = 0;
    foru(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    Try(1, 0, 1);

    if (!ok)
    {
        cout << -1;
        // cout << endl;
    }else 
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<'{';
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
            if(j!=ans[i].size()-1){
                cout<<' ';
            }
        }
        cout<<'}';
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}