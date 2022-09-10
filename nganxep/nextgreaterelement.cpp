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

/*
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn làm tìm phần tử đầu tiên bên phải lớn hơn của mọi phần tử A[i] trong mảng, nếu phần tử nào không có phần tử bên phải lớn hơn thì in ra -1.

Input Format

Dòng đầu tiên chứa N : Số lượng phần tử trong mảng. Dòng thứ 2 chứa N số nguyên, mỗi số cách nhau một khoảng trắng.

Constraints

1<=N<=10^6; 1<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán trên 1 dòng.

Sample Input 0

8
19 11 11 15 13 18 19 18 
Sample Output 0

-1 15 15 18 18 19 -1 -1 
*/

int main()
{
    
    faster;
    stack<ll> st;
    ll n;
    cin >> n;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        b[i] = x;
        if(st.empty()){
            st.push(i);
        }else {
            while(!st.empty() && x >b[st.top()]){
                a[st.top()] = x;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        a[st.top()] = -1;
        st.pop();
    }
    for(int x : a){
        cout << x << ' ';
    }
}
