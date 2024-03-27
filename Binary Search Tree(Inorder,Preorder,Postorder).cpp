#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);

struct NewNode {
    int data;
    NewNode* left;
    NewNode* right;

    NewNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void insert(NewNode*& root, int value) {
    if (root == nullptr) {
        root = new NewNode(value);
    } else if (value <= root->data) {
        insert(root->left, value);
    } else {
        insert(root->right, value);
    }
}

NewNode* buildBST() {
    NewNode* root = nullptr;

    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " node values:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        insert(root, value);
    }

    return root;
}

void inorderTraversal(NewNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(NewNode* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(NewNode* root) {
    if (root == nullptr) {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
signed main(){
opti mise
    NewNode* root = buildBST();

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << "\n";

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << "\n";

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << "\n";

    return 0;
}
