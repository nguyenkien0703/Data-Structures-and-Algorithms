/*
Cho mảng đã được sắp xếp A[] gồm N phần tử không có hai phần tử giống nhau và số X. Nhiệm vụ của bạn là tìm floor(X). Trong đó, K=floor(X) là phần tử lớn nhất trong mảng A[] nhỏ hơn hoặc bằng X.

Input Format

Dòng 1 chứa 2 số N và X; Dòng 2 chứa N số của mảng A[]

Constraints

1<=N<=10^5; 1<=X,A[i]<=10^6;

Output Format

In ra đáp án của bài toán nếu tìm thấy số lớn hơn X, trường hợp không tìm thấy in -1

Sample Input 0

9 8
1 2 3 4 5 6 7 8 9 
Sample Output 0

8

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
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;

int n , k;


int main()
{
    faster;
    cin>> n>>k;
    ll a[n];
    int res = -1;
    FOR(i,0,n-1){
        cin >> a[i];
        if(a[i]<=k)
            res = a[i];
    }
    if(res==-1){
        cout << -1;
    }else
        cout << res;
}

