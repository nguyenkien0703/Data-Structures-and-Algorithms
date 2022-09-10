/*
Cho 2 số nguyên dương N và K. Nhiệm vụ của bạn là sinh ra chỉnh hợp lặp chập K của N phần tử gồm các số tự nhiên từ 1 đến N. Ví dụ N = 3, K = 2 bạn sẽ có các kết quả là : 11, 12, 13, 21, 22, 23, 31, 32, 33. Số chỉnh hợp lặp chập K của N sẽ là N^K.

Input Format

1 dòng duy nhất chứa 2 số nguyên dương N và K.

Constraints

1<=K,N<=8

Output Format

In ra các cấu hình của chỉnh hợp lặp chập K của N

Sample Input 0

2 4
Sample Output 0

1111
1112
1121
1122
1211
1212
1221
1222
2111
2112
2121
2122
2211
2212
2221
2222
Submissions: 98
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More
 

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

int n, k,ok,  a[100];
void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n)
    {
        --i;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ok =1;
    ktao();
    while(ok){
        for(int i=1;i<=k;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
    }
}