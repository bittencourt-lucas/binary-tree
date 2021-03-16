#include <stdio.h>

#include "../headers/BinaryTree.h"

// Function Prototyping
void PrintNodeInorder(Node* root);

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
