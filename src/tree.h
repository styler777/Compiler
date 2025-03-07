/* tree.h */
#ifndef TREE_H
#define TREE_H
#define TAILLE_ID 64
#define TAILLE_OR 3
#define TAILLE_CHAR 5
#define TAILLE_VAR 4
#define TAILLE_STATIC 7

typedef enum {
  id,
  value,
  carac, 
  opBin,
  opOrdre,
  typeVariable,
  typeReturnFonct,
  visibilityStatic,
  finFunct,
  assign,
  branch,
  ifBody,
  elseBody,
  whileInstr,
  bodyFunct,
  suiteInstruction,
  declarationList,
  declarationVar,
  declarationListLocal,
  nameVariable,
  fonctions,
  function,
  parametersFunct,
  headingFunct,
  argumentFunct,
  progStart
  /* list all other node labels, if any */
  /* The list must coincide with the string array in tree.c */
  /* To avoid listing them twice, see https://stackoverflow.com/a/10966395 */
} label_t;

typedef struct
{
  char ident[TAILLE_ID];
  char ordre[TAILLE_OR];
  char carac[TAILLE_CHAR];
  char typeVar[TAILLE_VAR];
  char declStatic[TAILLE_STATIC];
  char operation;
  int num;
}Type;


typedef struct Node {
  label_t label;
  Type * type;
  struct Node *firstChild, *nextSibling;
  int lineno;
  int nbCarac;
} Node;

Node *makeNode(label_t label , Type type);
void addSibling(Node *node, Node *sibling);
void addChild(Node *parent, Node *child);
void deleteTree(Node*node);
void printTree(Node *node);

#define FIRSTCHILD(node) node->firstChild
#define SECONDCHILD(node) node->firstChild->nextSibling
#define THIRDCHILD(node) node->firstChild->nextSibling->nextSibling

#endif /* TREE_H */