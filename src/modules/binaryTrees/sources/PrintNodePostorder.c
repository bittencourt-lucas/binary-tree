#include <stdio.h>

#include "../headers/Node.h"

/*************************************************************
* PRINT NODE POSTORDER
* @author Lucas Bittencourt
* 
* Print the information of the Node in Postorder - moves to left
* child and prints it, moves to right child and prints it, and
* then prints root.
*
* @param root is the root Node of a Binary Tree
* ***********************************************************/

void PrintNodePostorder(Node* root) {
  if (root != NULL) {
    PrintNodePostorder(root->leftChild);
    PrintNodePostorder(root->rightChild);
    printf("%c", root->data);
  }
}
