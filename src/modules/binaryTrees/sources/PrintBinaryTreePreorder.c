#include <stdio.h>

#include "../headers/BinaryTree.h"

// Function Prototyping
void PrintNodePreorder(Node* root);

/*************************************************************
* PRINT BINARY TREE PREORDER
* @author Lucas Bittencourt
* 
* Prints a Binary Tree starting from its root in preorder.
*
* @param tree is a Binary Tree
* ***********************************************************/

void PrintBinaryTreePreorder(BinaryTree* tree) {
  PrintNodePreorder(tree->root);
}
