#include <iostream>
using namespace std;

class Node{
	public:
		int key;
		Node *parent,*left,*right;
		bool isLeaf;
		Node(){key=0;parent=left=right=0;isLeaf = true;}
		Node(int x,Node* y,Node* z,Node* w){
			key=x;
			parent=y;
			left=z;
			right=w;
			isLeaf = true;
		}
	};

class Tree{
public:	
		Node *root;
		int totalNodes;


	Tree(){
		totalNodes=0;
	}

	Node* rootNode(){return root;}
	Node* leftNode(Node* n){return n->left;}
	Node* rightNode(Node* n){return n->right;}

	bool insert(int x){
		if(totalNodes==0){
			++totalNodes;
			root = new Node(x,0,0,0);
			return true;
		}
		Node* n = root;
		while(1){
			if(x == n->key) return false;
			else if(x < n->key){
				if(n->left == 0){
					Node* p = new Node(x,n,0,0);
					n->left = p;
					n->isLeaf = false;
					++totalNodes;
					return true;
				}
				else n=n->left;
			}
			else if(x > n->key){
				if(n->right == 0){
					Node* p = new Node(x,n,0,0);
					n->right = p;
					n->isLeaf = false;
					++totalNodes;
					return true;
				}
				else n=n->right;
			}
		}
	}

	bool search(int k){
		Node* n = root; 
		while(1){
			if(n->key == k) return true;
			if(k<n->key) {
				if(n->left==0) return false;
				n=n->left;
			}
			else {
				if(n->right==0) return false;
				n=n->right;
			}
		}
	}

	void traverse(){
		showAll(root);
	}

	void showAll(Node* n){
		if(n==0) return;
		showAll(n->left);
		cout<<(n->key)<<"\t"<<n->isLeaf<<endl;
		showAll(n->right);
	}

	int height(){
		return treeHeight(root);
	}

	int maximum(int a, int b){
		return (a>b)?a:b;
	}

	int treeHeight(Node* n){
		if(n==0)return 0;
		if(n->isLeaf) return 0;
		return 1+maximum(treeHeight(n->left),treeHeight(n->right));
	}

	int successor(int x){
		
	}

};