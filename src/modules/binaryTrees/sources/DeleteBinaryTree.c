#include <stdlib.h>

#include "../headers/BinaryTree.h"

// Function Prototyping
void DeleteNode(Node* root);

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
