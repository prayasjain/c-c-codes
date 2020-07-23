
#include<bits/stdc++.h>
using namespace std ;
struct node
{
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
void preorder(struct node* root)
{
    if(root==NULL)
        return;
    printf("%d ",root->key);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->key);
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}

/* Given a non-empty binary search tree, return the node with minimum
   key value found in that tree. Note that the entire tree does not
   need to be searched. */
struct node * minValueNode(struct node* node)
{
    struct node* current = node;

    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}

/* Given a binary search tree and a key, this function deletes the key
   and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
struct node* search(struct node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;

    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);

    // Key is smaller than root's key
    return search(root->left, key);
}
// Driver Program to test above functions

int main()
{
    struct node *root = NULL;
    int var,value ;
    while(1){
        cout<<"\n1.Insert\n" ;
        cout<<"2.Delete\n" ;
        cout<<"3.Search\n" ;
        cout<<"4.Inorder\n" ;
        cout<<"5.Preorder\n" ;
        cout<<"6.Postorder\n" ;

        cin>>var ;
        if(var==1){
            cin>>value ;
            root=insert(root,value) ;
            printf("Inorder traversal of the given tree \n");
            inorder(root);

        }
        else if(var==2){
            cin>>value ;
            root=deleteNode(root,value) ;

            printf("Inorder traversal of the given tree \n");
            inorder(root);
        }
        else if(var==3){
            cin>>value ;
            if(search(root,value)!=NULL)
                cout<<"element present\n" ;
            else
                cout<<"element absent \n" ;
        }
        else if(var==4){
            inorder(root) ;
        }
        else if(var==5){
            preorder(root) ;
        }
        else if(var==6){
            postorder(root) ;
        }
        else {
            return 0 ;
        }

    }
//
//    root = insert(root, 50);
//    root = insert(root, 30);
//    root = insert(root, 20);
//    root = insert(root, 40);
//    root = insert(root, 70);
//    root = insert(root, 60);
//    root = insert(root, 80);
//
//    printf("Inorder traversal of the given tree \n");
//    inorder(root);
//
//    printf("\nDelete 20\n");
//    root = deleteNode(root, 20);
//    printf("Inorder traversal of the modified tree \n");
//    inorder(root);
//
//    printf("\nDelete 30\n");
//    root = deleteNode(root, 30);
//    printf("Inorder traversal of the modified tree \n");
//    inorder(root);
//
//    printf("\nDelete 50\n");
//    root = deleteNode(root, 50);
//    printf("Inorder traversal of the modified tree \n");
//    inorder(root);

    return 0;
}
