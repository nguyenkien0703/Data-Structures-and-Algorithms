/*

Cho số nguyên dương N, bạn hãy in ra các cách biểu diễn N dưới dạng tổng của các số tự nhiên không vượt quá N.

Input Format

Số nguyên dương N

Constraints

1<=N<=20;

Output Format

Dòng đầu tiên in ra số lượng cách biểu diễn. Các dòng tiếp theo in ra cách biểu diễn được liệt kê theo thứ tự từ từ điển giảm dần.

Sample Input 0

5
Sample Output 0

7
5
4+1
3+2
3+1+1
2+2+1
2+1+1+1
1+1+1+1+1
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n;
ll a[10000];
vector<vector<int>> res;
void in(int n)
{

    vector<int> b;
    for (int i = 1; i <= n; i++)
    {
        b.push_back(a[i]);
    }
    res.push_back(b);
}

void Try(int i, int cur, int k)
{
    for (int j = k; j >= 1; j--)
    {
        if (cur + j <= n)
        {
            a[i] = j;
            cur += j;
            if (cur == n)
            {
                in(i);
            }
            else
                Try(i + 1, cur, j);

            cur -= j;
        }
    }
}

int main()
{
    res.clear();
    cin >> n;
    Try(1, 0, n);
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] ;
            if(j!=res[i].size()-1){
                cout<<"+";
         
            }
        }
        cout<<endl;
    }
    cout << endl;
}
