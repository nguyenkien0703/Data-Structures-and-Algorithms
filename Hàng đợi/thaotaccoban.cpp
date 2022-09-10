/*
Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau: 1. Trả về kích thước của queue 2. Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”. 3. Cho một số nguyên và đẩy số nguyên này vào cuối queue. 4. Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện. 5. Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1. 6. Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.

Input Format

Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000) N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 10^6.

Constraints

N/A

Output Format

In ra kết quả của các truy vấn trên từng dòng

Sample Input 0

7
2
6
2
5
6
3 495
5
Sample Output 0

YES
-1
YES
-1
-1
495
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
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
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;




int main()
{
    
    faster;
    int t;
    cin >> t;
        queue<int> q;
    while(t--){
        int n;
        cin >> n;

            if(n==1){
                cout << q.size() << endl;
                
            }else if(n==2){
                if(q.empty()){
                    cout << "YES\n";
                }else cout << "NO\n";
            }else if(n==3){
                int x;
                cin >> x;
                q.push(x);

            }else if(n==4){
                if(!q.empty()){
                    q.pop();
                }
            }else if(n==5){
                if(!q.empty()){
                    cout << q.front() << endl;
                }else
                    cout << -1 << endl;
            }else if(n==6){
                if(!q.empty()){
                    cout<< q.back() << endl;
                }else cout<< -1 << endl;
            }
        
    }
}
