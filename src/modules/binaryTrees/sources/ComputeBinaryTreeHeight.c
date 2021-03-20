#include <stddef.h>

#include "../headers/BinaryTree.h"
#include "../headers/Node.h"

/*************************************************************
* MAX 2
* @author Lucas Bittencourt
* 
* Returns the biggest between two integers.
*
* @param a is the first integer
* @param b is the second integer
* ***********************************************************/

int max2(int a, int b) {
  return (a > b) ? a : b;
}

/*************************************************************
* COMPUTE NODE HEIGHT
* @author Lucas Bittencourt
* 
* Computes the height of a Node by checking the root and its
* children.
*
* @param root is the root Node of a Binary Tree
* @return the Node height
* ***********************************************************/

int ComputeNodeHeight(Node* root) {
  if (root == NULL) return -1;
  
  return 1 + max2(
    ComputeNodeHeight(root->leftChild),
    ComputeNodeHeight(root->rightChild)
  );
}

/*************************************************************
* COMPUTE TREE HEIGHT
* @author Lucas Bittencourt
* 
* Computes the height of a Binary Tree by checking all of its
* Nodes.
*
* @param tree is a Binary Tree
* @return the Binary Tree Height
* ***********************************************************/

int ComputeBinaryTreeHeight(BinaryTree* tree) {
  return ComputeNodeHeight(tree->root);
}
