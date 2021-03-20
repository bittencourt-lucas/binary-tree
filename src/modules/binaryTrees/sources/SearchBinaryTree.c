#include <stddef.h>

#include "../headers/BinaryTree.h"
#include "../headers/Node.h"

/*************************************************************
* SEARCH NODE
* @author Lucas Bittencourt
* 
* Searches for a char type occurring on a node and its
* children.
*
* @param root is the root Node of a Binary Tree
* @param target is the char that will be searched
* @return if the target has been found within the Node
* ***********************************************************/

int SearchNode(Node* root, char target) {
  if (root == NULL) return 0;
  
  return target == root->data ||
        SearchNode(root->leftChild, target) ||
        SearchNode(root->rightChild, target);
}

/*************************************************************
* SEARCH BINARY TREE
* @author Lucas Bittencourt
* 
* Searches for a char type occurring within a Binary Tree.
*
* @param tree is a Binary Tree
* @param target is the char that will be searched
* @return if the target has been found within the Binary Tree
* ***********************************************************/

int SearchBinaryTree(BinaryTree* tree, char target) {
  return SearchNode(tree->root, target);
}
