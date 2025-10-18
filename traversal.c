#include<stdio.h>
#include<stdlib.h>
struct bst{
	int data;
	struct bst*left,*right;
};
typedef struct bst bst;
 bst* create_node(int val){
 	bst*newnode=(bst*)malloc(sizeof(bst));
 	newnode->data=val;
 	newnode->left=NULL;
 	newnode->right=NULL;
 	return newnode;
 }
bst* insert(int val,bst*root){
	if(root==NULL)return create_node(val);
	else if (val<root->data){
		root->left=insert(val,root->left);
	}
	else if(val>root->data){
		root->right=insert(val,root->right);
	}
	return root;
}
void inorder(bst*root){
	if(root!=NULL)return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
void preorder(bst*root){
if(root!=NULL)return;
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(bst*root){
if(root!=NULL)return;
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}
int main() {
    bst* root = NULL;
    int n, val;

    // Ask user for the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter node values:\n");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(val,root);  // Use DFS for inserting values
    }
    printf("inorder traversal");
    inorder(root);
    printf("\n");
    printf("postorder traversal");
    inorder(root);
    printf("\n");
    printf("postorder traversal");
    inorder(root);
    printf("\n");
}

