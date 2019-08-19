#include "BTree.h"

BTNode* BinaryTreeCreate(BTDataType* src){
	static int s_n = 0;//�ֲ���̬����
	if (src[s_n] == '#'){
		s_n++;
		return NULL;
	}
	BTNode * cur = (BTNode*)malloc(sizeof(BTNode));//����ڵ�
	cur->data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);
	cur->rchild = BinaryTreeCreate(src);

	return cur;//���ؽڵ㣬�������еĺ���
}

void BinaryTreePrevOrder(BTNode* root){//ǰ�����
	if (root){
		putchar(root->data);
		BinaryTreePrevOrder(root->lchild);//�ݹ�����
		BinaryTreePrevOrder(root->rchild);//�ݹ��Һ���
	}
}

void BinaryTreeInOrder(BTNode* root){//�������
	if (root){
		BinaryTreeInOrder(root->lchild);//�ݹ�����
		putchar(root->data);
		BinaryTreeInOrder(root->rchild);//�ݹ��Һ���
	}
}

void BinaryTreePostOrder(BTNode* root){//�������
	if (root){
		BinaryTreePostOrder(root->lchild);//�ݹ�����
		BinaryTreePostOrder(root->rchild);//�ݹ��Һ���
		putchar(root->data);
	}
}

void BinaryTreeDestory(BTNode* root){//�Ϳ�root
	if (root){
		BinaryTreeDestory(root->lchild);//�ݹ�����
		BinaryTreeDestory(root->rchild);//�ݹ��Һ���
		free(root);
	}
}

