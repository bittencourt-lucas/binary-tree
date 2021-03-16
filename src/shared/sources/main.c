#include <stdio.h>

#include "../../modules/binaryTrees/headers/BinaryTree.h"
#include "../../modules/binaryTrees/headers/Node.h"

// Function Prototyping
BinaryTree* CreateBinaryTree(Node* root);
Node* CreateNode(char data, Node* leftChild, Node* rightChild);
void PrintBinaryTreePreorder(BinaryTree* tree);

int main() {
  printf("Generating Binary Tree...");
  printf("\n");
  
  /***************************************
  * Visual Description of the Binary Tree
  *       a <- Root Node
  *    /     \
  *  b         c
  *    \     /   \
  *     d   e     f
  * **************************************/
  BinaryTree* tree = CreateBinaryTree(
    CreateNode('a',
      CreateNode('b',
        NULL,
        CreateNode('d', NULL, NULL)
      ),
      CreateNode('c',
        CreateNode('e', NULL, NULL),
        CreateNode('f', NULL, NULL)
      )
    )
  );

  printf("The Binary Tree was allocated on memory successfully!");
  printf("\n");

  printf("Printing the Binary Tree in Preorder: ");
  PrintBinaryTreePreorder(tree);
  
  getchar();
  return 0;
}
