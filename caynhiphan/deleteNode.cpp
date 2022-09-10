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
    node(int x){
        val = x;
        left = right = NULL;
    }
};
node* insert(node *root, int x){
    if(root == NULL)
        return new node(x);
    if(x< root->val ){
        root->left = insert(root->left, x);
    }else {
        root->right = insert(root->right, x);

    }
    return root;
}
node* findMind(node *root){
    node *tmp = root;
    while(tmp != NULL&& tmp->left != NULL){
        tmp = tmp->left;

    }
    return tmp;
}
node* deleteNode(node *root, int x ){
    // if(root==NULL)
    //     return root;
    // if(root->left==NULL && root->right==NULL){
    //     return NULL;
    // }
    // if(root->left==NULL || root->right==NULL){
    //     if(root->left==NULL){
    //         node *tmp = root->right;
    //         delete root;
    //         return tmp;
    //     }else {
    //         node *tmp = root->left;
    //         delete root;
    //         return tmp;
    //     }
    // }else {
    //     node *tmp=findMind(root->right);
    //     root->val = tmp->val;
    //     root->right=deleteNode(root->right,tmp->val);

    // }
    // return root;


     if(root == NULL) return root;
    if(x < root->val) root->left = deleteNode(root->left , x);
    else if(x > root->val) root->right = deleteNode(root->right , x);
    else
    {
        if(root->left == NULL && root->right == NULL) return NULL;
        
        else if(root->left == NULL)
        {
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL)
        {
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        node *tmp = findMind(root->right);
        root->val = tmp->val;
        root->right = deleteNode(root->right , root->val);
    }
    return root;
}

void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->val << ' ';
    inorder(root->right);
}
int main()
{
    
    faster;
    int n;
    cin >> n;
    node *root = NULL;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        root = insert(root, x);
    }
    int ans;
    cin >> ans;
    root=deleteNode(root, ans);
    inorder(root);

}
