#include <iostream>

using namespace std;

class Node
{
public:
    unsigned int val;
    Node* left;
    Node* right;

    Node(unsigned int n){
        val = n;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* node, unsigned int n){
    if(node == NULL)
        return new Node(n);

    if(n < node->val)
        node->left = insert(node->left, n);
    else
        node->right = insert(node->right, n);

    return node;
}

void prefix(Node* node) {
    if(node == NULL)
        return;

    cout << " " << node->val;

    prefix(node->left);
    prefix(node->right);

    return;
}

void infix(Node* node) {
    if(node == NULL)
        return;

    infix(node->left);

    cout << " " << node->val;

    infix(node->right);

    return;
}

void posfix(Node* node) {
    if(node == NULL)
        return;

    posfix(node->left);
    posfix(node->right);

    cout << " " << node->val;

    return;
}

int main(int argc, const char * argv[])
{
    Node* root;
    int c, n, i;
    unsigned int numb;
    
    cin >> c;
    for(i = 1; i <= c; i++){
        root = NULL;
        cin >> n;

        for(; n > 0; n--){
            cin >> numb;
            if(root == NULL)
                root = new Node(numb);
            else
                insert(root, numb);
        }

        cout << "Case " << i << ":" << endl;
        cout << "Pre.:";
        prefix(root);
        cout << endl << "In..:";
        infix(root);
        cout << endl << "Post:";
        posfix(root);
        cout << endl << endl;
    }

    return 0;
}