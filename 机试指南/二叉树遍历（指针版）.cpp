//https://www.nowcoder.com/practice/b42cfd38923c4b72bde19b795e78bcb3?tpId=40&tqId=21555&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
string str;
int i;

struct TreeNode{
    char val;
    TreeNode *lchild;
    TreeNode *rchild;
    TreeNode(char c):val(c),lchild(NULL),rchild(NULL){}
};

TreeNode* createTree(){
    char c = str[i++];
    if (c == '#') {
        return NULL;
    }
    TreeNode* root = new TreeNode(c);
    root -> lchild = createTree();
    root -> rchild = createTree();
    return root;
}

void postOrder(TreeNode* root){
    if (!root) {
        return ;
    }
    postOrder(root -> lchild);
    cout << root -> val << " ";
    postOrder(root -> rchild);
}

int main(){
    i = 0;
    while (cin >> str) {
        TreeNode* root = createTree();
        postOrder(root);
        cout << endl;
        
    }
    
    
    return 0;
}
