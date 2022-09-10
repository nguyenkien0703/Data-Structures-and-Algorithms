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

struct Node{
    int val;
    Node *left, *right;
    Node(int x){
        val = x;
        left = NULL;
        right=NULL;
    }
};
void makeRoot(Node *root,int u,int v,char c ){
    if(c=='L')
        root->left = new Node(v);
    else{
        root->right = new Node(v);

    }
}
void insertNode(Node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->val==u){
        makeRoot(root,u,v,c);
    }else {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
//duyet trai,phai,goc
int dem(Node *root){
    // day chi la cac dieu kien dung 
    // day gia su la thang con ay, node la no ko co con tiep theo
    
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL){
        return  1;
    }
    int cnt = 0;
    cnt +=dem(root->left);
    cnt +=dem(root->right);
    return cnt;
}
int main()
{
    
    faster;
    Node *root = NULL;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int u, v;
        char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root = new Node(u);
            makeRoot(root, u, v, c);
        }else {
            insertNode(root, u, v, c);
        }

    }
    cout << dem(root);
}
