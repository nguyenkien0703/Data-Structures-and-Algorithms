/*
Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show. Trong đó thao tác push kèm theo một giá trị cần thêm . Hãy viết chương trình ghi ra kết quả của các lệnh show. Trong trường hợp lệnh pop thì ngăn xếp rỗng sẽ không được thực hiện

Input Format

Input: Dòng đầu là số thao tác T; T dòng tiếp theo mỗi dòng chứa một lệnh push, pop hoặc show. Input đảm bảo số lượng phần tử trong stack khi nhiều nhất cũng không vượt quá 100.

Constraints

1<=T<=100;

Output Format

Ghi ra màn hình các phần tử đang có trong stack theo thứ tự lưu trữ mỗi khi gặp lệnh show. Các số viết cách nhau đúng một khoảng trống. Nếu stack rỗng thì in ra EMPTY

Sample Input 0

9
show
push 346
push 196
push 946
show
show
push 943
push 265
push 225
Sample Output 0

EMPTY
346 196 946 
346 196 946 

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



void solve(){
    

}
int main()
{
    
    faster;
    int t ;
    cin>> t ;
    stack<int > st;
    while(t--){
        string s;
        cin >> s;
        if(s=="show"){
            vll ans;
            while(!st.empty()){
                ans.pb(st.top());
                st.pop();
            }
            reverse(all(ans));
            for(auto x : ans ){
                cout << x << ' ';
                st.push(x);

            }
            if(ans.size()==0){
                cout << "EMPTY";
            }

            cout << endl;
        }else if(s=="push"){
            ll x;
            cin >> x;
            st.push(x);
        }else {
            if(!st.empty()){
                st.pop();
            }
        }
    }
    

}
