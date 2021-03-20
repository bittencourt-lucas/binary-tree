#include <stdio.h>

#include "../headers/BinaryTree.h"
#include "../headers/Node.h"

/*************************************************************
* PRINT NODE INORDER
* @author Lucas Bittencourt
* 
* Print the information of the Node in Inorder - moves to left
* child and prints it, prints root, moves to right child and
* prints it.
*
* @param root is the root Node of a Binary Tree
* ***********************************************************/

void PrintNodeInorder(Node* root) {
  if (root != NULL) {
    PrintNodeInorder(root->leftChild);
    printf("%c", root->data);
    PrintNodeInorder(root->rightChild);
  }
}

/*************************************************************
* PRINT BINARY TREE INORDER
* @author Lucas Bittencourt
* 
* Prints a Binary Tree starting from its root in inorder.
*
* @param tree is a Binary Tree
* ***********************************************************/

void PrintBinaryTreeInorder(BinaryTree* tree) {
  PrintNodeInorder(tree->root);
}
