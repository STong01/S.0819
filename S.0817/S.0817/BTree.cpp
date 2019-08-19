#include "BTree.h"

BTNode* BinaryTreeCreate(BTDataType* src){
	static int s_n = 0;//局部静态变量
	if (src[s_n] == '#'){
		s_n++;
		return NULL;
	}
	BTNode * cur = (BTNode*)malloc(sizeof(BTNode));//申请节点
	cur->data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;//返回节点，二叉树中的孩子
}

void BinaryTreePrevOrder(BTNode* root){//前序遍历
	if (root){
		putchar(root->data);
		BinaryTreePrevOrder(root->lchild);//递归左孩子
		BinaryTreePrevOrder(root->rchild);//递归右孩子
	}
}

void BinaryTreeInOrder(BTNode* root){//中序遍历
	if (root){
		BinaryTreeInOrder(root->lchild);//递归左孩子
		putchar(root->data);
		BinaryTreeInOrder(root->rchild);//递归右孩子
	}
}

void BinaryTreePostOrder(BTNode* root){//后序遍历
	if (root){
		BinaryTreePostOrder(root->lchild);//递归左孩子
		BinaryTreePostOrder(root->rchild);//递归右孩子
		putchar(root->data);
	}
}

void BinaryTreeDestory(BTNode* root){//滞空root
	if (root){
		BinaryTreeDestory(root->lchild);//递归左孩子
		BinaryTreeDestory(root->rchild);//递归右孩子
		free(root);
	}
}

