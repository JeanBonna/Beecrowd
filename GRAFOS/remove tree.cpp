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

void bst_insert(node* &root, const int& s){
    if(!root) root = create_node(s);
    else if(s > root->value) bst_insert(root->right, s);
    else bst_insert(root->left, s);
}

void DFS_preorder(node *root, vector <int> &vet){
    if(!root) return;
    cout << "root: " << root->value << "\n";
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

string bst_find(node *root, int s){
    if(!root) return " nao existe\n";
    if(root->value == s) return " existe\n";
    if(s > root->value) return bst_find(root->right, s);
    return bst_find(root->left, s);
}

node* bst_findNode(node *root, int s){
    if(!root) return root;
    if(root->value == s) return root;
    if(s < root->value) return bst_findNode(root->left, s);
    return bst_findNode(root->right, s);
}

void bst_delete(node* &root, node* &aux, node* &auxPai){
    cout << "Chamou o delete\n";
    if(!aux->right){
        cout << "Entrou no if\n";
        root->value = aux->value;
        cout << "Definiu o valor do root " << root->value << endl;
        //auxPai->right = nullptr;
        //cout << "colocou nullptr\n";
        if(aux->left){
            //cout << "Entrou no if2\n";
            
            if(aux->left->value > auxPai->value){
                cout << "Entrou no if2 onde a DIREITA do pai " << auxPai->value << "vai ter " << aux->left->value << endl;
                auxPai->right = aux->left;
            }
            else{
                cout << "Entrou no if2 onde a ESQUERDA do pai " << auxPai->value << " vai ter " << aux->left->value << endl;
                auxPai->left = aux->left;
            }
                
        }else{
            auxPai->right = nullptr;
            auxPai->left = nullptr;
            cout << "colocou nullptr\n";
        }
        delete(aux);
    }else bst_delete(root, aux->right, aux);
}

node* bst_findPai(node*root, int s){
    //if(!root) return root;
    //cout << "Pai: " << root->value << "\n";
    //<< " filho: " << root->right->value << " e " << root->left->value << "\n";
    if(root->right && root->right->value == s ) return root;
    if(root->left && root->left->value == s) return root;
    if(s < root->value) return bst_findPai(root->left, s);
    return bst_findPai(root->right, s);
}



void bst_remove(node* &root, int &s){
    node* aux = root;
    node* teste = bst_findNode(root, s);
    //cout << "Achou o nodo\n";
    if(teste){
        if(!teste->left && !teste->right){
            //cout << "Entrou no if\n";
            node* pai = bst_findPai(aux, s);
            //cout << "Achou o pai\n";
            if(pai->left->value == s) pai->left = nullptr;
            else pai->right = nullptr; 
            delete(teste);
        }//else if(root->left && !root->right){
            
        //}
        else if(teste->right && !teste->left){
            bst_delete(teste, teste->right, teste);
        }else bst_delete(teste, teste->left, teste);
    }
}



int main(){
    string cod;
    int val;
    vector<int> vet;
    node *root = nullptr;
    while(cin >> cod){
            if(cod == "I"){
                cin >> val;
                bst_insert(root, val);
            }
            else if(cod == "PREFIXA"){
                vet.clear();
                DFS_preorder(root, vet);
                forShow(vet);
            }else if(cod == "INFIXA"){
                vet.clear();
                DFS_inorder(root, vet);
                forShow(vet);
            }else if(cod == "POSFIXA"){
                vet.clear();
                DFS_posorder(root, vet);
                forShow(vet);
            }else if(cod == "P"){
                cin >> val;
                cout << val << bst_find(root, val);
            }else if(cod == "R"){
                cin >> val;
                bst_remove(root, val);
            }
        }

    return 0;
}