/*

Tí vào Tèo cùng chơi một trò chơi với xâu nhị phân S. Xâu nhị phân S chỉ bao gồm các kí tự 0 và 1. Ở mỗi bước đi, 2 bạn nhỏ có thể chọn 1 xâu con liên tiếp các kí tự giống nhau ở xâu S và xóa nó khỏi xâu S. Sau khi xóa 1 xâu thì 2 xâu bên trái và phải của xâu vừa xóa sẽ trở thành liền kề. Ban đầu Tí là người đi trước, sau đó 2 bạn lần lượt thực hiện bước đi của mình cho tới khi xâu S trở thành xâu rỗng. Bạn hãy xác định xem Tí có thể xóa tối đa bao nhiêu kí tự 1 biết rằng cả 2 bạn đều chơi tối ưu

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=100000;

Output Format

In ra số lượng số 1 tối đa mà Tí có thể xóa được

Sample Input 0

1000101110011111
Sample Output 0

6
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define el cout << endl
#define se second
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for (int i = 0; i < (a); i++)
#define vll vector<ll>
#define vi vector<int>
#define ms(a) memset(a, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll MOD = 1e9 + 7;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.first > b.first;
}

int main()
{
    faster;
    string s;
    cin >> s;
    s+="a";
    vector<int> res;
    int cnt = 0, ans = -1e9;
    string tmp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            ++cnt;
            // i++;
        }
        else
        {

            res.push_back(cnt);
            cnt = 0;
        }
    }
    sort(res.begin(), res.end(), greater<int>());
    // for(auto x : res){
    //     cout<<x<<endl;
    // }
    int kien = 0;
    for (int i = 0; i < res.size(); i += 2)
    {
        kien += res[i];
    }
    // cout<<"KIEN\n";
    cout << kien;
}


