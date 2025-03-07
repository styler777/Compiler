/* tree.c */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "tree.h"
extern int lineno;       /* from lexer */
extern int nbCarac; 

static const char *StringFromLabel[] = {
  "id.name = ",
  "value: ",
  "value: ",
  "Binary  (op: ",
  "Compare (op: ",
  "id.type: ",
  "return.type: ",
  "Visibility: ",
  "return",
  "Assign",
  "branch",
  "then-body",
  "else-body",
  "While",
  "Body",
  "InstructionBlock",
  "declaration-list",
  "Declarations",
  "InnerDeclarations",
  "Variable",
  "Functions",
  "Function",
  "Parameters",
  "Heading",
  "Argument",
  "Program"
  
  /* list all other node labels, if any */
  /* The list must coincide with the label_t enum in tree.h */
  /* To avoid listing them twice, see https://stackoverflow.com/a/10966395 */
};

Node *makeNode(label_t label , Type type) {
  Node *node = malloc(sizeof(Node));
  if (!node) {
    printf("Run out of memory\n");
    exit(1);
  }
  node->label = label;

  node->type = malloc(sizeof(Type));
  if(!node->type)
    exit(1);
  memcpy(node->type, &type, sizeof(Type));
  node-> firstChild = node->nextSibling = NULL;
  node->lineno=lineno;
  node->nbCarac = nbCarac;
  return node;
}

void addSibling(Node *node, Node *sibling) {
  Node *curr = node;
  while (curr->nextSibling != NULL) {
    curr = curr->nextSibling;
  }
  curr->nextSibling = sibling;
}

void addChild(Node *parent, Node *child) {
  if (parent->firstChild == NULL) {
    parent->firstChild = child;
  }
  else {
    addSibling(parent->firstChild, child);
  }
}

void deleteTree(Node *node) {
  if (node->firstChild) {
    deleteTree(node->firstChild);
  }
  if (node->nextSibling) {
    deleteTree(node->nextSibling);
  }
  free(node);
}

void printTree(Node *node) {
  if(!node){
    printf("node is null");
    return;
  }
  static bool rightmost[128]; // tells if node is rightmost sibling
  static int depth = 0;       // depth of current node
  for (int i = 1; i < depth; i++) { // 2502 = vertical line
    printf(rightmost[i] ? "    " : "\u2502   ");
  }
  if (depth > 0) { // 2514 = L form; 2500 = horizontal line; 251c = vertical line and right horiz 
    printf(rightmost[depth] ? "\u2514\u2500\u2500 " : "\u251c\u2500\u2500 ");
  }
  
  printf("%s", StringFromLabel[node->label]);
 
  switch (node->label)
  {
    case 0:
      printf("%s",node->type->ident);
      break;
    case 1:
      printf("%d", node->type->num);
      break;
    case 2:
      printf("%s", node->type->carac);
      break;
    
    case 3:
      printf("%c)", node->type->operation);
      break;
    case 4:
      printf("%s)", node->type->ordre);
      break;
    case 5:
      printf("%s", node->type->typeVar);
      break;
    case 6:
      printf("%s", node->type->typeVar);
      break;
    case 7:
      printf("%s", node->type->declStatic);
      break;
    default:
      break;
  }
  
  printf("\n");
  depth++;
  for (Node *child = node->firstChild; child != NULL; child = child->nextSibling) {
    rightmost[depth] = (child->nextSibling) ? false : true;
    printTree(child);
  }
  depth--;
}