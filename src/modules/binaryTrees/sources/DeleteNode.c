#include <stdlib.h>

#include "../headers/Node.h"

/*************************************************************
* DELETE NODE
* @author Lucas Bittencourt
* 
* Deletes a root node and its children.
*
* @param root is the root Node of a Binary Tree
* ***********************************************************/

void DeleteNode(Node* root) {
  if (root != NULL) {
    DeleteNode(root->leftChild);
    DeleteNode(root->rightChild);
    free(root);
  }
}
