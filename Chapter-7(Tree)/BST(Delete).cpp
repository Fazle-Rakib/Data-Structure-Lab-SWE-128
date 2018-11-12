#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
	Node (int item)
	{
		this->data = item;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* minValueNode(Node* node)
{
	Node* current = node;
	while(current->left != NULL)
	{
		current = current->left;
	}
	return current;
}
void inOrderTraverse(Node* root)
{
	if(root->left != NULL)
	{
		inOrderTraverse(root->left);
	}
	printf("%d ",root->data);
	if(root->right != NULL)
	{
		inOrderTraverse(root->right);
	}
}
Node* deleteNode(Node* root,int item)
{
	if(root == NULL)
		return root;
	else if(item < root->data)
	{
		root->left = deleteNode(root->left,item);
	}
	else if(item > root->data)
	{
		root->right = deleteNode(root->right,item);
	}
	else
	{
		if(root->left == NULL)
		{
			Node* temp = root->right;
			root  = NULL;
			return temp;
		}
		else if(root->right == NULL)
		{
			Node* temp = root->left;
			root = NULL;
			return temp;
		}
		Node *temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right,temp->data);
	}
}
Node* bstInsert(Node* root,int item)
{
	if(root == NULL)
	{
		return new Node(item);
	}
	else if(item < root->data)
	{
		root->left = bstInsert(root->left,item);
	}
	else
	{
		root->right = bstInsert(root->right,item);
	}
	return root;

}

int main()
{
	Node* root = NULL;
	root = bstInsert(root,10);
	bstInsert(root,9);
	bstInsert(root,3);
	bstInsert(root,91);
	bstInsert(root,1);
	bstInsert(root,5);
	bstInsert(root,200);
	bstInsert(root,2);
	cout << "After Insertion : ";
	inOrderTraverse(root);
	cout << endl;
	deleteNode(root,3);
	cout << "After Delete : ";
	inOrderTraverse(root);
	cout << endl;

}
