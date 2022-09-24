#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define sz(a) a.size();
#define all(x) (x).begin(), (x).end()
#define vll vector<ll> 
#define vi vector<int >
#define f0(a) for(ll i = 0; i < (a); i++)
#define f1(a) for(ll i = 1; i <= (a); i++)
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

int n, k;
ll ans[10001], a[10001];

int main()
{
	
	faster;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
	deque<ll> q;
	cin>>n>>k;
	for (int i = 1; i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n;i++){
		while(q.size() && a[q.back()] >=a[i]){
			q.pop_back();
		}
		while(q.size() &&   i-q.front() + 1 >k)
			q.pop_front();
		q.push_back(i);
		if(i>=k){
			ans[i] = a[q.front()];
		}
		cout << "deque lan thu " << i << "la :";
		for(auto kien : q){
			cout << a[kien] << ' ';
			// el;
		}
		el;
		cout << "het luot duyet deque thu " << i;
		el;
	}
	for (int i = k; i <= n;i++){
		cout << ans[i];
		cout << ' ';
	}
}
