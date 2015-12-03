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

	void AddLeafPrivate(int key, node* Ptr);

	void PrintInOrderPrivate(node* Ptr);

	node* ReturnNodePrivate(int key, node* Ptr);

//accesible everywhere - main.cpp can see this
public:
	BST();

	//this will create a leaf node and will
	node* CreateLeaf(int key);

	//creating a function to add leaf
	void AddLeaf(int key);

	//in order traversal and print
	void PrintInOrder();

	//helper function to return a node value
	node* ReturnNode(int key);

};