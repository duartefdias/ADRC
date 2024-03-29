#ifndef _NODE_H_
#define _NODE_H_
#endif


#ifndef _DEFS_H_
#include "./defs.h"
#endif

#ifndef _LINKED_LIST_H_
#include "./linked_list.h"
#endif

typedef struct node_ Node;

Node * newNode();
Node * newNodeWithInit(long int v, int relationship);
int Node_getRelationship(Node *node);
long int Node_getV(Node *node);
void Node_printNode(Node *node);
void Node_free(Node *node);
