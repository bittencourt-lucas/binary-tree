#ifndef NODE_H_
#define NODE_H_

typedef struct Node {
  char data;
  struct Node* leftChild;
  struct Node* rightChild;
} Node;

#endif /* NODE_H_ */
