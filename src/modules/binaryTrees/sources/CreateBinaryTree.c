#include <stdlib.h>

#include "../headers/BinaryTree.h"
#include "../headers/Node.h"

/*************************************************************
* CREATE BINARY TREE
* @author Lucas Bittencourt
* 
* Creates the Binary Tree by receiving its root Node.
*
* @param root is the Node that will serve as the root
* @return the Binary Tree allocated on memory
* ***********************************************************/

BinaryTree* CreateBinaryTree(Node* root) {
  BinaryTree* tree = (BinaryTree*) malloc(sizeof(BinaryTree));
  tree->root = root;
  return tree;
}
