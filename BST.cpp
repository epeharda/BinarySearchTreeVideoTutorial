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
			AddLeafPrivate(key, Ptr);
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
			AddLeafPrivate(key, Ptr);
		}
		else
		{
			Ptr->right = CreateLeaf(key);
		}
	}
}













