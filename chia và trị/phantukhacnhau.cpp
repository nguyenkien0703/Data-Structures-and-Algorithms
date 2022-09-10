/*
Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].

Input Format

Dòng đầu chứa số nguyên dương N; Dòng thứ 2 chứa các phần tử của mảng A[]; Dòng thứ 3 chứa các phần tử của mảng B[];

Constraints

1<=N<=10^5; 1<=A[i], B[i]<=10^6;

Output Format

In ra đáp án của bài toán

Sample Input 0

8
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 8 
Sample Output 0

7
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
    cin>> n;
    ll a[n], b[n - 1];
    FOR(i,0,n-1){
        cin >> a[i];
    }
    FOR(i, 0,n-2){
        cin >> b[i];
    }
    for (int i = 0; i <= n - 2;i++){
        if(a[i]!=b[i]){
            cout << i + 1;
            return 0;
        }
    }
}