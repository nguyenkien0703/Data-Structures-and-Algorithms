/*

Cho mảng số nguyên gồm N phần tử, các phần tử trong mảng không quá 100. Hãy liệt kê các hoán vị của các phần tử khác nhau trong mảng theo thứ tự ngược.

Input Format

Dòng đầu tiên là N; Dòng thứ 2 là các phần tử trong mảng;

Constraints

1<=N<=15;

Output Format

In ra các hoán vị ngược của các phần tử khác nhau trong mảng.

Sample Input 0

2
1 2
Sample Output 0

2 1
1 2
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    int b[n + 1];
    set<int> se;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        se.insert(b[i]);
    }
    for (auto x : se)
        v.push_back(x);
    for (int i = 1; i <= v.size(); i++)
    {
        a[i] = v.size() - i + 1;
    }
    do
    {
        for (int i = 1; i <= v.size(); i++)
        {
            cout << v[a[i]-1] << " ";
        }
        cout << endl;
    } while (prev_permutation(a + 1, a + v.size() + 1));
    return 0;
}