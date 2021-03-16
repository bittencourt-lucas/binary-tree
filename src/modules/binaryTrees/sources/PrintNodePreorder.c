#include <stdio.h>

#include "../headers/Node.h"

/*************************************************************
* PRINT NODE PREORDER
* @author Lucas Bittencourt
* 
* Print the information of the Node in Preorder - prints root,
* moves to left child and prints it, moves to right child and
* prints it.
*
* @param root is the root Node of a Binary Tree
* ***********************************************************/

void PrintNodePreorder(Node* root) {
  if (root != NULL) {
    printf("%c", root->data);
    PrintNodePreorder(root->leftChild);
    PrintNodePreorder(root->rightChild);
  }
}
