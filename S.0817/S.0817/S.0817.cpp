#include "BTree.h"

//int BinaryTreeSize(BTNode* root);//�м������
//int BinaryTreeLeafSize(BTNode* root);//�м���Ҷ��
//int BinaryTreeLevelKSize(BTNode* root, int k);//��K���м������
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

//// �������
//void BinaryTreeLevelOrder(BTNode* root);
//// �ж϶������Ƿ�����ȫ������
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