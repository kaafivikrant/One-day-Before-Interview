#include <iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <list>
#include <cstring>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <cctype>
#include <string>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key=k;
        left=right=nullptr;
    }
};

void preorder(Node *root){
    if(root!= nullptr){
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root){
    if(root!= nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<(root->key)<<" ";
    }
}

void inorder(Node *root){
    if(root!= nullptr){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

int heightsizeoftree(Node *root){
    return root == nullptr ? 0 : 1+max(heightsizeoftree(root->left),heightsizeoftree(root->right));
}

int sizeoftree(Node *root){
    return root == nullptr ? 0 : 1+sizeoftree(root->left)+sizeoftree(root->right);
}

int maxout(Node *root){
    return root == nullptr ? INT16_MIN : max(root->key,max(maxout(root->left),maxout(root->right)));
}

void levelorder(Node *root){
    if(root == nullptr)
        return;

    list<Node*> q;
    q.push_back(root);
    q.push_back(nullptr);
    while(q.size()>1){
        Node* curr=q.front();
        q.pop_front();
        if(curr == nullptr){
            cout<<endl;
            q.push_back(nullptr);
            continue;
        }
        cout<<curr->key<<" ";

        if(curr->left){
            q.push_back(curr->left);
        }

        if(curr->right){
            q.push_back(curr->right);
        }
    }
}

void printkdist(Node *root, int k){
    if(root == nullptr)
        return;

    if(k==0){
        cout<<root->key<<" ";
    }else{
        printkdist(root->left,k-1);
        printkdist(root->right,k-1);
    }
}
int maxlevel=0;

void printleftview(Node *root, int level=1){
    if(root == nullptr)
        return;

    if(maxlevel < level){
        cout<<(root->key)<<" ";
        maxlevel = level;
    }

    printleftview(root->left, level+1);
    printleftview(root->right, level+1);
}


int sumoftree(Node *root){
    if(root == nullptr)
        return 0;
    return (root->key+sumoftree(root->left)+sumoftree(root->right));
}

int maxlevels=0;
void printrightview(Node *root, int level = 1){
    if(root == nullptr)
        return;

    if(maxlevels<level){
        cout<<(root->key)<<" ";
        maxlevels=level;
    }

    printrightview(root->right,level+1);
    printrightview(root->left,level+1);
}

void printBottomView(Node *root, int dist, int level, auto &map){
    if(root == nullptr){
        return;
    }
    if(level >= map[dist].second){
        map[dist] = {root->key, level};
    }

    printBottomView(root->left, dist-1, level+1, map);
    printBottomView(root->right, dist+1, level+1, map);

}

void printBottomView(Node *root){
    map<int , pair<int,int>> map;
    printBottomView(root,0,0,map);
    for(auto it: map){
        cout<<it.second.first<<" ";
    }
}

void printTopView(Node *root, int dist, int level, auto &map){
    if(root == nullptr){
        return;
    }
    if(map.find(dist) == map.end() ||level < map[dist].second){
        map[dist] = {root->key, level};
    }

    printTopView(root->left, dist-1, level+1, map);
    printTopView(root->right, dist+1, level+1, map);

}

void printTopView(Node *root){
    map<int , pair<int,int>> map;
    printTopView(root,0,0,map);
    for(auto it: map){
        cout<<it.second.first<<" ";
    }
}

bool isComplete(Node *root, int i, int n){
    if(root == nullptr)
        return true;

    if((root->left && 2*i+1 >= n) || !isComplete(root->left, 2*i+1,n))
        return false;
    if((root->right && 2*i+2 >= n) || !isComplete(root->right,2*i+2,n))
        return false;

    return true;
}

int getDiameter(Node *root, int &diameter){
    if(root == nullptr)
        return 0;

    int left_height = getDiameter(root->left, diameter);
    int right_height = getDiameter(root->right, diameter);

    int max_diameter = left_height + right_height + 1;
    diameter = max(diameter, max_diameter);

    return max(left_height, right_height) +1;
}
int getDiameter(Node* root){
    int diameter = 0;
    getDiameter(root,diameter);
    return diameter;
}

bool isSymmetry(Node *X, Node *Y){
    if(X == nullptr && Y==nullptr)
        return true;

    return (X != nullptr && Y !=nullptr) && isSymmetry(X->left,Y->right) && isSymmetry(X->right,Y->left);
}
bool isSymmetry(Node *root){
    return isSymmetry(root->left, root->right);
}

bool isLeaf(Node* root){
    return (root->left == nullptr && root->right == nullptr);
}
void printRootToLeafPath(Node* root,vector<int>path){
    if(root == nullptr)
        return;

    path.push_back(root->key);
    if(isLeaf(root)){
        for(int data: path)
            cout<<data<<" ";
        cout<<endl;
    }

    printRootToLeafPath(root->left,path);
    printRootToLeafPath(root->right,path);

    path.pop_back();
}
void printRootToLeafPath(Node *root){
    vector<int> path;

    printRootToLeafPath(root,path);
}

void printVertical(Node *root,int dist,auto &map){
    if(root == nullptr)
        return;

    map.insert(make_pair(dist,root->key));
    printVertical(root->left,dist-1,map);
    printVertical(root->right,dist+1,map);
}

void printVertical(Node *root){
    multimap<int,int> map;
    printVertical(root,0,map);
    int temp=0;
    for(auto it= map.begin();it != map.end();it++){
        if(temp != it->first){
            cout<<endl;
            temp=it->first;
        }
        cout<<it->second<<" ";
    }
}

void verticalSum(Node *root,int dist, auto &map){
    if(root == nullptr)
        return;
    map[dist] +=root->key;
    verticalSum(root->left,dist-1,map);
    verticalSum(root->right,dist+1,map);
}

void verticalSum(Node *root){
    map<int,int>map;
    verticalSum(root,0,map);
    for(auto it:map)
        cout<<it.second<<" ";
}

void printNode(Node *root,int start, int end, int level, auto &map){
    if(root == nullptr)
        return;

    if(level>=start && level<=end)
        map[level].push_back(root->key);

    printNode(root->left,start,end,level+1,map);
    printNode(root->right,start,end,level+1,map);
}

void printNode(Node *root, int start,int end){
    unordered_map<int,vector<int>> map;
    printNode(root,start,end,1,map);

    for(int i=start;i<=end;i++){
        cout<<"Level "<<i<<":";
        for(int i:map[i]){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void findDiff(Node *root, int&diff,int level){
    if(root == nullptr)
        return;

    if(level & 1)
        diff += root->key;
    else
        diff -=root->key;

    findDiff(root->left,diff,level+1);
    findDiff(root->right,diff,level+1);
}

int findDiff(Node *root){
    int diff=0;
    findDiff(root,diff,1);

    return diff;
}

int maxDifference(Node *root, int &diff){

    if(root == nullptr)
        return INT16_MAX;

    int left = maxDifference(root->left, diff);
    int right = maxDifference(root->right, diff);

    int d = root->key - min(left,right);

    diff = max(diff,d);

    return min(min(left,right), root->key);
}

int maxDifference(Node *root){
    int diff = INT16_MIN;
    maxDifference(root,diff);

    return diff;
}


int main(){

    Node *root = new Node(8);
    root->left = new Node(4);
    root->right = new Node(12);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(3);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(7);
    root->right->left = new Node(10);
    root->right->right = new Node(14);
    root->right->left->left = new Node(9);
    root->right->left->right = new Node(11);
    root->right->right->left = new Node(13);
    root->right->right->right = new Node(15);


    cout<<"\nInorder"<<endl;
    inorder(root);
    cout<<"\nPostorder"<<endl;
    postorder(root);
    cout<<"\nPreorder"<<endl;
    preorder(root);
    cout<<"\nHeight of tree"<<endl;
    cout<<heightsizeoftree(root);
    cout<<"\nNo. of nodes"<<endl;
    cout<<sizeoftree(root);
    cout<<"\nMaximum value"<<endl;
    cout<<maxout(root);
    cout<<"\nLevel order values"<<endl;
    levelorder(root);
    cout<<"\nPrint all value at kth (1) distance"<<endl;
    printkdist(root,1);
    cout<<"\nSum of all the values"<<endl;
    cout<<sumoftree(root);
    cout<<"\nPrint left view"<<endl;
    printleftview(root);
    cout<<"\nPrint right view"<<endl;
    printrightview(root);
    cout<<"\nPrint bottom view"<<endl;
    printBottomView(root);
    cout<<"\nPrint top view"<<endl;
    printTopView(root);
    cout<<"\nComplete Binary Tree or Not"<<endl;
    isComplete(root, 0, sizeoftree(root)) ? cout << "Yes" : cout << "No";
    cout<<"\nDiameter of the tree"<<endl;
    cout<<getDiameter(root);
    cout<<"\nSymmetry of the trees"<<endl;
    isSymmetry(root) ? cout << "Yes" : cout << "No";
    cout<<"\nPrint all path from root to leaf node"<<endl;
    printRootToLeafPath(root);
    cout<<"\nPrint vertical binary tree"<<endl;
    printVertical(root);
    cout<<"\nVertical sum of the given binary tree"<<endl;
    verticalSum(root);
    cout<<"\nPrint nodes between two levels 2-4"<<endl;
    printNode(root,2,4);
    cout<<"\nDifference between odd and even level"<<endl;
    cout<<findDiff(root);
    cout<<"\nMaximum difference between a node and its descendants"<<endl;
    cout<<maxDifference(root);
    return 0;
}