/*


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

int main()
{
    faster;

    string s ;
    cin>>  s ;
    int cnt =0;
    map<char ,int > mp;
    for(char  x  : s ){
        mp[x]++;
    }
    for(auto it : mp) {
        if(it.second&1){
            ++cnt ;
        }
    }
    int ans =(cnt==2|| cnt==0 || cnt==1 ||(cnt&1&&cnt>1))? 1 : 2 ;
    cout<<ans ;

}