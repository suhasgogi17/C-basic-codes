#include <stdio.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node* NODE;
NODE getnode()
{
  NODE newn;
  int d;
	newn=(NODE)malloc(sizeof(struct node));
    scanf("%d",&d);
    newn->data=d;
    newn->left=NULL;
    newn->right=NULL;
    return(newn);
}
NODE insert_(root)
{
    NODE cur,new;
    new=getnode();
    if (root == NULL)
		return(new);
    cur=root;
    

}