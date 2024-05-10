#include <bits/stdc++.h>

using namespace std;

struct node{
        int value;
        node *left, *right;
    };


node * create_node(const int &value){
    node *p = new node;
    p->value = value;
    p->left = p->right = nullptr;
    return p;
}

void BFS(node *root, vector<int> &vet){
    if(!root) return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
            auto p = q.front(); 
        vet.push_back(p->value);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        q.pop();
    }
}

void bst_insert(node* &root, const int& s){
    if(!root) root = create_node(s);
    else if(s > root->value) bst_insert(root->right, s);
    else bst_insert(root->left, s);
}

void DFS_preorder(node *root, vector <int> &vet){
    if(!root) return;
    vet.push_back(root->value);
    DFS_preorder(root->left, vet);
    DFS_preorder(root->right, vet);
}

void DFS_inorder(node *root, vector<int> &vet){
    if(!root) return;
    DFS_inorder(root->left, vet);
    vet.push_back(root->value);
    DFS_inorder(root->right, vet);
}

void DFS_posorder(node *root, vector<int> &vet){
    if(!root) return;
    DFS_posorder(root->left, vet);
    DFS_posorder(root->right, vet);
    vet.push_back(root->value);
}

void forShow(vector<int> &vet){
    for(size_t i=0;i<vet.size();i++){
                if(i==vet.size()-1) cout << vet[i] << "\n";
                else
                    cout << vet[i] << " ";
            }
}

void show(node *root){
    vector<int> vet;
    DFS_preorder(root, vet);
    cout << "Pre.: ";
    forShow(vet);
    vet.clear();
    DFS_inorder(root, vet);
    cout << "In..: ";
    forShow(vet);
    vet.clear();
    DFS_posorder(root,vet);
    cout << "Post: ";
    forShow(vet);
    cout << "\n";
}



int main(){
    int rep, cont=0;
    while(cin >> rep){
    while(rep--){
            node* root = nullptr;
            cont++;
            vector<int> vet;
            int x; cin >> x;
            while(x--){
                int val; cin >> val;
                bst_insert(root, val);
            }
            BFS(root, vet);
            cout << "Case " << cont << ":\n";
            show(root);
        }
    }
    return 0;
}