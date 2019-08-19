#include "BTree.h"

//int BinaryTreeSize(BTNode* root);//有几个结点
//int BinaryTreeLeafSize(BTNode* root);//有几个叶子
//int BinaryTreeLevelKSize(BTNode* root, int k);//第K层有几个结点
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

//// 层序遍历
//void BinaryTreeLevelOrder(BTNode* root);
//// 判断二叉树是否是完全二叉树
//int BinaryTreeComplete(BTNode* root);
//void BinaryTreePrevOrderNonR(BTNode* root);
//void BinaryTreeInOrderNonR(BTNode* root);
//void BinaryTreePostOrderNonR(BTNode* root);
//void TestBinaryTree();

int main(){
	BTNode*root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");
	BinaryTreePrevOrder(root);
	putchar('\n');
	BinaryTreeInOrder(root);
	putchar('\n');
	BinaryTreePostOrder(root);
	putchar('\n');
	BinaryTreeDestory(root);
	system("pause");			
	return 0;
}