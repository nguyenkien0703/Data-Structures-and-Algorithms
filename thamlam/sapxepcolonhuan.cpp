/*

Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương , trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc, Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng thời gian. Thời gian để hoàn toàn mỗi công việc là 1 đơn vị thời gian. Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các việc với giả thiết mỗi việc được thực hiện đơn lẻ.

Input Format

Dòng thứ 1 chứa số nguyên dương N; N dòng tiếp theo mô tả id, deadline, profit của N công việc

Constraints

1<=N<=10^5; 1<=JobID<=N; 1<=Deadline<=N; 1<=Profit<=1000;

Output Format

In ra lợi nhuận lớn nhất

Sample Input 0

4
1 4 20
2 1 10
3 1 40
4 1 30
Sample Output 0

60
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define in(a) cin>>  a;
#define out(a) cout<<  a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for(int i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<int >
#define ms(a) memset(a,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
struct job{
    int id ,dealine ,profit;

};


int main()
{
    faster;
    int n ;
    cin>> n ;
    job a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].id>> a[i].dealine>> a[i].profit;
    }    
    
    sort(a,a+n,[](job x, job y)->bool{
        return x.profit> y.profit;
    });
    bool used[n];
    memset(used,false,sizeof(used));
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=a[i].dealine-1;j>=0;j--){
            if(!used[j]){
                used[j]=true;
                ans+=a[i].profit;
                break;
            }
        }
    }
    cout<< ans ;
    
}