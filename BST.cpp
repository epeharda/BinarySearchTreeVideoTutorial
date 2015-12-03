#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;


BST::BST()
{
	root = NULL;
}
	

BST::node* BST::CreateLeaf(int key)
{
	node* n = new node;

	n->key = key;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void BST::AddLeaf(int key)
{
	//from the main function, we are only concerted about what we want to add
	//from the BST.cpp function, we want to also consider WHERE to put add it
	//this is why we call AddLeafPrivate
	AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* Ptr)
{
	if(root == NULL)
	{
		root = CreateLeaf(key);
	}
	else if(key < Ptr-> key)
	{
		if(Ptr-> left != NULL)
		{
			AddLeafPrivate(key, Ptr->left);
		}
		else
		{
			Ptr->left = CreateLeaf(key);
		}
	}
	else if(key > Ptr-> key)
	{
		if(Ptr-> right != NULL)
		{
			AddLeafPrivate(key, Ptr->right);
		}
		else
		{
			Ptr->right = CreateLeaf(key);
		}
	}
	else
	{
		cout << "The key " << key << " has already been added to the tree\n";
	}
}

void BST::PrintInOrder()
{
	PrintInOrderPrivate(root);
}

void BST::PrintInOrderPrivate(node* Ptr)
{
	if(root != NULL)
	{
		//1 - Go Left
		if(Ptr->left != NULL)
		{
			PrintInOrderPrivate(Ptr->left);
		}

		//2 - Process Node, in this case print
		cout << Ptr -> key << "  ";

		//3 - Go Right
		if(Ptr->right != NULL)
		{
			PrintInOrderPrivate(Ptr->right);
		}
	}
	else
	{
		cout << "The tree is empty.\n";
	}


}











