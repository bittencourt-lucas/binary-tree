#include <stdio.h>

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
