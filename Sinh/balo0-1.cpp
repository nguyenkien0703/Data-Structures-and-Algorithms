/*

Một tên trộm đột nhập vào 28techland và muốn lấy đi 1 số đồ vật có giá trị lớn nhất. Ở 28techland tồn tại n đồ vật, đồ vật thứ i sẽ có trọng lượng w[i] và có giá trị là v[i], tên trộm mang theo cái balo có thể chứa được trọng lượng tối đa là S, nhiệm vụ của bạn là hãy giúp tên trộm lựa chọn các đồ vật sao cho tổng trọng lượng của chúng không vượt quá S và có giá trị lớn nhất. Chú ý tên trộm chỉ có thể chọn hoặc không chọn 1 đồ vật.

Input Format

Dòng đầu tiên là N và S; Dòng thứ 2 là N số tương ứng với trọng lượng của các đồ vật; Dòng thứ 3 là N số tương ứng với giá trị của các đồ vật;

Constraints

1<=N<=15; 1<=S<=800; 1<=w[i]<=200; 1<=v[i]<=200;

Output Format

In ra tổng giá trị của các đồ vật trong balo.

Sample Input 0

12 356
174 153 127 156 156 5 132 161 170 26 181 50 
103 32 102 85 54 166 187 173 137 54 24 91 
Sample Output 0

617
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
int n, m, ok, a[1000];
struct balo
{
    int kg, val;
};

void ktao()
{
    foru(i, 1, n)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i--] = 0;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
        a[i] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    balo x[200];
    foru(i,1,n){
        cin>>x[i].kg;
    }
    foru(i,1,n){
        cin>>x[i].val;
    }
    ll cnt =0;
    ok =1;
    ktao();
    while(ok){
        ll ans =0, sum =0;
        foru(i,1,n){
            if(a[i]==1){
                ans+=x[i].kg;
                sum+=x[i].val;
            }
        }
        if(ans<=m){
            cnt=max(cnt,sum);
        }
        sinh();
    }
    cout<<cnt;

}