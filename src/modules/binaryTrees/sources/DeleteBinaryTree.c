#include <stdlib.h>

#include "../headers/BinaryTree.h"
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

/*************************************************************
* DELETE BINARY TREE
* @author Lucas Bittencourt
* 
* Deletes a Binary Tree and all its nodes.
*
* @param tree is a Binary Tree
* ***********************************************************/

void DeleteBinaryTree(BinaryTree* tree) {
  DeleteNode(tree->root);
  free(tree);
}
