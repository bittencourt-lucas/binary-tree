#include <stdio.h>

#include "../../modules/binaryTrees/headers/BinaryTree.h"
#include "../../modules/binaryTrees/headers/Node.h"

// Function Prototyping
BinaryTree* CreateBinaryTree(Node* root);
Node* CreateNode(char data, Node* leftChild, Node* rightChild);
void PrintBinaryTreePreorder(BinaryTree* tree);
void PrintBinaryTreeInorder(BinaryTree* tree);
void PrintBinaryTreePostorder(BinaryTree* tree);
void DeleteBinaryTree(BinaryTree* tree);

/*************************************************************
* EXAMPLE OF A FUNCTIONING BINARY TREE ADT
* @author Lucas Bittencourt
* ***********************************************************/

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
  printf("\n");

  printf("Printing the Binary Tree in Inorder: ");
  PrintBinaryTreeInorder(tree);
  printf("\n");

  printf("Printing the Binary Tree in Postorder: ");
  PrintBinaryTreePostorder(tree);
  printf("\n");

  printf("Deleting Binary Tree from memory...");
  printf("\n");

  DeleteBinaryTree(tree);

  printf("Binary Tree deleted from memory successfully!");
  printf("\n");

  // Running Valgrind to confirm that memory has been cleared
  // $ valgrind --tool=memcheck ./binary-tree
  //
  // ==27098== HEAP SUMMARY:
  // ==27098==     in use at exit: 0 bytes in 0 blocks
  // ==27098==   total heap usage: 9 allocs, 9 frees, 2,200 bytes allocated
  // ==27098== 
  // ==27098== All heap blocks were freed -- no leaks are possible

  getchar();
  return 0;
}
