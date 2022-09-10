/*


Nhiệm vụ của bạn ở bài tập này là sinh ra các xâu chỉ bao gồm 2 kí tự A và B theo thứ tự từ điển giảm dần.

Input Format

Dòng duy nhất chứa số nguyên dương N là độ dài của xâu.

Constraints

1<=N<=10;

Output Format

In ra các xâu AB, mỗi xâu được in trên 1 dòng.

Sample Input 0

3
Sample Output 0

BBB
BBA
BAB
BAA
ABB
ABA
AAB
AAA
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
int ok, n;
string s;
vector<string> ans;
void ktao(){
    s=string(n,'B');
}
void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == 'A')
    {
        s[i] = 'B';
        --i;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] = 'A';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>> n;
    ktao();
    ok = 1;
    while (ok)
    {
       cout<<s;
        cout << endl;
        sinh();
    }
}