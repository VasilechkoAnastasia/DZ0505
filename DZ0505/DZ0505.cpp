#include <iostream>
using namespace std;

//1
/*template <typename T>
class TreeNode 
{
public:
    T data;                 
    TreeNode* left;        
    TreeNode* right;    

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

template <typename T>
class Tree 
{
private:
    TreeNode<T>* root; 

    TreeNode<T>* add(TreeNode<T>* node, T value) 
    {
        if (!node) 
        {
            return new TreeNode<T>(value);
        }
        if (value < node->data) 
        {
            node->left = add(node->left, value);
        }
        else 
        {
            node->right = add(node->right, value);
        }
        return node;
    }

    void inOrderTraversal(TreeNode<T>* node) const 
    {
        if (node)
        {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

public:
    Tree() : root(nullptr) {}

    void add(T value) 
    {
        root = add(root, value);
    }

    void printInOrder() const 
    {
        inOrderTraversal(root);
        cout << endl;
    }
};

int main() 
{
    Tree<int> intTree;

    intTree.add(50);
    intTree.add(30);
    intTree.add(70);
    intTree.add(20);
    intTree.add(40);
    intTree.add(60);
    intTree.add(80);

    cout << "In-order traversal of the tree: " << endl;
    intTree.printInOrder();
}*/

//2
/*template <typename T>
class TreeNode 
{
public:
    T data;        
    TreeNode* left;   
    TreeNode* right;    

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

template <typename T>
class Tree 
{
private:
    TreeNode<T>* root; 

    TreeNode<T>* add(TreeNode<T>* node, T value) 
    {
        if (!node) 
        {
            return new TreeNode<T>(value);
        }
        if (value < node->data) 
        {
            node->left = add(node->left, value);
        }
        else 
        {
            node->right = add(node->right, value);
        }
        return node;
    }

    void inOrderTraversal(TreeNode<T>* node) const 
    {
        if (node) 
        {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

    void printTree(TreeNode<T>* node, int depth) const 
    {
        if (!node) return;

        printTree(node->right, depth + 1);

        for (int i = 0; i < depth; ++i) 
        {
            cout << "    ";
        }
        cout << node->data << endl;

        printTree(node->left, depth + 1);
    }

public:
    Tree() : root(nullptr) {}

    void add(T value) 
    {
        root = add(root, value);
    }

    void printInOrder() const 
    {
        inOrderTraversal(root);
        cout << endl;
    }

    void print() const 
    {
        printTree(root, 0);
    }
};

int main() 
{
    Tree<int> intTree;

    intTree.add(50);
    intTree.add(30);
    intTree.add(70);
    intTree.add(20);
    intTree.add(40);
    intTree.add(60);
    intTree.add(80);

    cout << "In-order traversal of the tree: " << endl;
    intTree.printInOrder();

    cout << "\nStructured view of the tree: " << endl;
    intTree.print();
}*/