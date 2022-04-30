
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	int height;
};


int max(int a, int b);

int height(struct Node *N)
{
	if (N == NULL)
		return 0;
	return 1+max(height(N->left), height(N->right));
}


int max(int a, int b)
{
	return (a > b)? a : b;
}


struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)
						malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 0; 
	return(node);
}

struct Node *rightRotate(struct Node *y)
{
	struct Node *x = y->left;
	struct Node *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = height(y);
	x->height = height(x);

	// Return new root
	return x;
}

struct Node *leftRotate(struct Node *x)
{
	struct Node *y = x->right;
	struct Node *T2 = y->left;

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = height(x);
	y->height = height(y);

	// Return new root
	return y;
}

int getBalance(struct Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}


struct Node* insert(struct Node* node, int key)
{
	
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else 
		return node;

	node->height = height(node);

	int balance = getBalance(node);

	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	//printf("the balance factor = %d",balance);
	return node;
}

void preOrder(struct Node *root)
{
	if(root != NULL)
	{
		printf("%d ", root->key);
		preOrder(root->left);
		preOrder(root->right);
	}
}


int main()
{
struct Node *root = NULL;

/* Constructing tree given in the above figure */
int n, data;
printf("enter number of elements\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter the element\n");
scanf("%d",&data);
root = insert(root, data);
}

printf("Preorder traversal of the constructed"
		" tree is \n");
preOrder(root);
int balance = getBalance(root);
printf("\nthe balance factor = %d",balance);
return 0;
}
