/*

Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa k kí tự liền kề giống nhau khỏi xâu S. Ví dụ xâu aaabbbcccedddeeu sau khi xóa 3 kí tự liền kề giống nhau khỏi xâu S sẽ trở thành : u

Input Format

Dòng 1 chứa xâu kí tự S; Dòng 2 chứa số nguyên dương k

Constraints

1<=len(S)<=10000; 2<=K<=len(S);

Output Format

In ra xâu S sau khi xóa, in ra EMPTY nếu S trở thành xâu rỗng

Sample Input 0

aabbccedde
2
Sample Output 0

EMPTY
Sample Input 1

aaaccddda
3
Sample Output 1

cca

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

string s;
int k ;
int main()
{
    
    faster;
    cin >> s;
    cin >> k;

    stack<pair<char,int > > st;
    for(char x : s){
        if(st.empty()){
            st.push({x, 1});
        }else {
            if(st.top().fi==x){ 
                if(st.top().se+1==k){
                    st.pop();
                }else {
                    st.top().se++;
                }
            }else {
                st.push({x,1});
            }
                
        }
    }

    if(st.size()==0){
        cout << "EMPTY";
    }else{
        vector<char> kien;
        while(!st.empty()){
            while(st.top().se!=0){
                kien.push_back(st.top().fi);
                st.top().se--;
            }
            st.pop();
        }
        reverse(all(kien));
        for(char x : kien){
            cout << x;
        }
    }
        
}
