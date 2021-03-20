#include <stdio.h>

#include "../headers/BinaryTree.h"
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
