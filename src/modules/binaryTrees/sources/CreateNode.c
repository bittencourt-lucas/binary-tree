#include <stdlib.h>

#include "../headers/Node.h"

/*************************************************************
* CREATE NODE
* @author Lucas Bittencourt
* 
* Creates a Node from a Binary Tree, which will have its data
* and may or may not have a left and a right child.
*
* @param data is the information stored on the Node
* @param leftChild is the child node left-side of the Node
* @param rightChild is the child node right-side of the Node
* @return the Node allocated on memory
* ***********************************************************/

Node* CreateNode(char data, Node* leftChild, Node* rightChild) {
  Node* node = (Node*) malloc(sizeof(Node));
  node->data = data;
  node->leftChild = leftChild;
  node->rightChild = rightChild;
  return node;
}
