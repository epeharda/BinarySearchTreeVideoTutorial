class BST
{
//only accessible to class itself
private:

	struct node
	{
		int key;
		node* left;
		node* right;
	};

	node* root;

//accesible everywhere - main.cpp can see this
public:

	BST();

	//this will create a leaf node and will
	node* CreateLeaf(int key);

};