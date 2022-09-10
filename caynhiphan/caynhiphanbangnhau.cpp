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
#define sz(a) a.size();
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

struct node{
    int val;
    node *left, *right;
    node(int x ){
        val = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int u,int v ,char c ){
    if (c == 'L')
        root->left = new node(v);
    else {
        root->right = new node(v);
    }
}


void insertNode(node *root, int u,int v,char c){
    if(root==NULL){
        root = new node(u);
        
    }
}


int main()
{
    
    faster;
   
    

}
