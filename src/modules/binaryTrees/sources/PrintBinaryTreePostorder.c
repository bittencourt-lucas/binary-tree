#include <stdio.h>

#include "../headers/BinaryTree.h"

// Function Prototyping
void PrintNodePostorder(Node* root);

/*************************************************************
* PRINT BINARY TREE POSTORDER
* @author Lucas Bittencourt
* 
* Prints a Binary Tree starting from its root in postorder.
*
* @param tree is a Binary Tree
* ***********************************************************/

void PrintBinaryTreePostorder(BinaryTree* tree) {
  PrintNodePostorder(tree->root);
}
