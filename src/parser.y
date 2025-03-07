%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
extern int lineno;
extern int nbCarac;
int yyerror(char * msg);
int yyparse();
#include "tree.h"
int yylex();
Node *tree;
Type type = {0};
%}


%union {
    char ident[64];
    char ordre[3];
    int num;
    char declStatic[7];
    char typeVar[4];
    char caracter[5];
    char finFonct[7];
    char operation;
    struct Node * node;
}
%expect 1
%left '+' '-'
%left '*' '/'
%precedence UnaryMinus
%token <ordre> ORDER EQ AND OR
%token <operation> DIVSTAR ADDSUB
%token <caracter>  CHARACTERE 
%token <typeVar> TYPE VOID
%token <finFonct> RETURN
%token <declStatic> STATIC
%token <num> NUM
%token IF ELSE WHILE
%token <ident> IDENT 
%type <node> F T M FB TB Exp E Arguments ListExp
%type <node> SuiteInstr  Instr
%type <node>  DeclFoncts Prog DeclFonct EnTeteFonct  Parametres
%type <node> Declarateurs ListTypVar Corps 
%type <node> DeclVars DeclVarLocal DeclVarL DeclVarLocalList 
%%



Prog:  DeclVars DeclFoncts {
                    $$ = makeNode(progStart , type);
                    addChild($$ , $1);
                    addSibling($1 , $2);
                    tree = $$;
                            
                  }
    ;

DeclVars:
    DeclVars TYPE Declarateurs ';'{
                                    Type varType;
                                    strcpy(varType.typeVar , $2);
                                    Node * variable = makeNode(typeVariable , varType);
                                    Node * nodeDecl = makeNode(declarationVar , type);
                                    addChild(variable , $3);
                                    addChild(nodeDecl , variable);
                                    
                                    addChild($$ , nodeDecl);
                                    
                                  }
    | {
        $$ = makeNode(declarationList , type);
       
    }
    ;

Declarateurs:
       Declarateurs ',' IDENT   {
                                Type nameVar;
                                strcpy(nameVar.ident , $3);
                                Node * variable = makeNode(id , nameVar);
                                addChild($$ , variable);
                               
                                }
    |  IDENT    { 
                Type nameVar;
                strcpy(nameVar.ident , $1);
                $$ = makeNode(id , nameVar);

                }
    ;
DeclFoncts:
       DeclFoncts DeclFonct {
                            addChild($$ , $2);
                           
                            }
    |  DeclFonct            {
                            $$ = makeNode(fonctions , type);
                            addChild($$ , $1);
    
                            }
    ;

DeclFonct:
       EnTeteFonct  Corps { $$ = makeNode(function , type);
                            addChild($$ , $1);
                            addSibling($1 , $2);
                       
                        }
    ;

EnTeteFonct:
       TYPE IDENT '(' Parametres ')' {
                                      $$ = makeNode(headingFunct , type);
                                      Type typeFunct , nameFunct;
                                      strcpy(typeFunct.typeVar , $1);
                                      strcpy(nameFunct.ident , $2);
                                      Node * typeFunction = makeNode(typeReturnFonct , typeFunct);
                                      Node * nameFunction = makeNode(id , nameFunct);
                                      addChild($$ , typeFunction);
                                      addSibling(typeFunction , nameFunction);
                                      addSibling(typeFunction , $4);
                                     
                                     }
    |  VOID IDENT '(' Parametres ')' {
                                      $$ = makeNode(headingFunct , type);
                                      Type typeFunct , nameFunct;
                                      strcpy(typeFunct.typeVar , $1);
                                      strcpy(nameFunct.ident , $2);
                                      Node * typeFunction = makeNode(typeReturnFonct , typeFunct);
                                      Node * nameFunction = makeNode(id , nameFunct);
                                      addChild($$ , typeFunction);
                                      addSibling(typeFunction , nameFunction);
                                      addSibling(typeFunction , $4);
                                      

                                     }
    ;
Parametres:
       VOID {
            Type typeParam ;
            strcpy(typeParam.typeVar , $1);
            $$ = makeNode(parametersFunct , type);
            Node * paramNone = makeNode(typeVariable , typeParam);
            addChild($$ , paramNone);
          
            }

    |  ListTypVar {
                    
                    $$ = $1;
                  }
    ;
ListTypVar:
       ListTypVar ',' TYPE IDENT {Type typeParam , nameId ;
                                  strcpy(typeParam.typeVar , $3);
                                  strcpy(nameId.ident , $4);
                                  Node * nodeType = makeNode(typeVariable , typeParam);
                                  Node * nodeId = makeNode(id , nameId);
                                  addChild($$ , nodeType);
                                  addSibling(nodeType , nodeId);
                                 
                         
                                }
    |  TYPE IDENT {
                    Type typeParam , nameId ;
                    strcpy(typeParam.typeVar , $1);
                    strcpy(nameId.ident , $2);
                    $$ = makeNode(parametersFunct , type);
                    Node * nodeType = makeNode(typeVariable , typeParam);
                    Node * nodeId = makeNode(id , nameId);
                    addChild($$ , nodeType);
                    addSibling(nodeType , nodeId);
                  }
    ;





DeclVarLocal:
    DeclVarLocal DeclVarL ';'  {
       addChild($$ , $2);
    }
    | DeclVarL ';' {
        $$ = $1;
    }

    ;


DeclVarL:
    STATIC TYPE Declarateurs {
        Type varType;
        strcpy(varType.declStatic, $1);
        strcpy(varType.typeVar, $2);
        Node * typeDecl = makeNode(typeVariable , varType);
        Node * typeVisibility = makeNode(visibilityStatic , varType);
        $$ = $3;
        addChild($$ , typeDecl);
        addSibling(typeDecl , typeVisibility);
       
             
    }
    | TYPE Declarateurs {
        Type varType;
        strcpy(varType.typeVar, $1);
        Node * typeDecl = makeNode(typeVariable , varType);
        $$ = $2;
        addChild($2, typeDecl);
        
         
    }
    ;



DeclVarLocalList : 
    DeclVarLocal {
                    $$ = makeNode(declarationListLocal , type);
                    addChild($$ ,$1);
                 }
    | {$$ = makeNode(declarationListLocal , type);
      }
    ;


Corps: '{' DeclVarLocalList  SuiteInstr '}' {
                                        
                                        $$ = makeNode(bodyFunct , type);
                                        addChild($$ , $2);
                                        addSibling($2 , $3);
                                        
                                       }






SuiteInstr:
    SuiteInstr Instr   {addChild($$ , $2); tree = $$;}
    |                   {
                        $$ = makeNode(suiteInstruction , type);
                        }       


    ;                                                                   

Instr:
    IDENT '=' Exp ';'         { Type variableLeft;
                                strcpy(variableLeft.ident, $1);
                                $$ = makeNode(assign , type);
                                Node * membreLeft = makeNode(id , variableLeft);
                                addChild($$ , membreLeft);
                                addSibling(membreLeft , $3);
                               
                      
                                } 
     
    |   IF '(' Exp ')' Instr {$$ = makeNode(branch , type);
                              addChild($$ , $3);
                              addSibling($3 , $5);

                             }


    |   IF '(' Exp ')' Instr ELSE Instr{$$ = makeNode(branch , type);
                                        addChild($$ , $3);
                                        Node * brancheIf = makeNode(ifBody , type);
                                        addChild(brancheIf , $5);
                                        Node * brancheElse = makeNode(elseBody, type);
                                        addChild(brancheElse , $7);
                                        addSibling($3 , brancheIf);
                                        addSibling($3 , brancheElse);
                                       }

    

    |  WHILE '(' Exp ')' Instr   {
                                 $$ = makeNode(whileInstr, type);
                                 addChild($$ , $3);
                                 Node * body = makeNode(bodyFunct , type);
                                 addChild(body , $5);
                                 addSibling($3 , body);

                                 }  
    
    |  IDENT '(' Arguments  ')' ';'  {Type identifier ;
                                    strcpy(identifier.ident , $1);
                                    $$ = makeNode(function , type);
                                    Node * funct = makeNode(headingFunct , type);
                                    Node * nameFunct = makeNode(id , identifier);
                                    addChild(funct , nameFunct);
                                    addChild($$ , funct);
                                    addSibling(funct , $3);
                                     }
    |  RETURN Exp ';' {
                        $$ = makeNode(finFunct , type);
                        addChild($$, $2);
                       
                      }

    |  RETURN ';'                   {Type typeReturn = {0};
                                    $$ = makeNode(finFunct , typeReturn);
                                    }

    |  '{' SuiteInstr '}'               {
                                        
                                         $$ = $2->firstChild;
                                        
                                  }  
    | ';' {$$ = NULL;}
;  



Exp :  Exp OR TB{
                    Type  opCompare;
                    strcpy(opCompare.ordre, $2);
                    $$ = makeNode(opOrdre, opCompare);
                    addChild($$, $1);
                    addSibling($1 , $3);
                }
    |  TB       {$$ = $1;}
    ;

TB  :  TB AND FB {
                    Type opCompare;
                    strcpy(opCompare.ordre, $2);
                    $$  = makeNode(opOrdre, opCompare);
                    addChild($$, $1);
                    addSibling($1 , $3);
                }
    |  FB {$$ = $1;}
    ; 

FB  :  FB EQ M  {
                    Type opCompare;
                    strcpy(opCompare.ordre, $2);
                    $$  = makeNode(opOrdre, opCompare);
                    addChild($$, $1);
                    addSibling($1 , $3);

                }
    |  M   {$$ = $1;}
    ;


M   :  M ORDER E    {
                    Type opCompare;
                    strcpy(opCompare.ordre, $2);
                    $$  = makeNode(opOrdre, opCompare);
                    addChild($$, $1);
                    addSibling($1 , $3);

                    }
    |  E {$$ = $1;}
    ;
  

E   :  E ADDSUB T   {
                    Type operBin;
                    operBin.operation = $2;
                    $$  = makeNode(opBin, operBin);
                    addChild($$, $1);
                    addSibling($1 , $3);

                    }
    |  T        { $$ = $1;}
    ;      


T   :T DIVSTAR F { 
                    Type  operBin;
                    operBin.operation = $2;
                    $$  = makeNode(opBin, operBin);
                    addChild($$, $1);
                    addSibling($1 , $3);

                }
    | F     {$$ = $1;}     
    ; 

  
F   : ADDSUB F %prec UnaryMinus{ 
              
                Type op;
                op.operation = $1;
                $$ = makeNode(opBin , op);
                addChild($$ , $2);
                }
    | '!' F     {
                Type exclam;
                strcpy(exclam.ordre ,  "!");
                $$ = makeNode(opOrdre, exclam);
                addChild($$ , $2);
                }
    |  '(' Exp ')' {
                    $$ = $2;
                    
                   }

    | NUM           {
                    Type nombre;
                    nombre.num = $1;
                    $$ = makeNode(value, nombre);
                    
                    }
    | CHARACTERE    {
                    Type charac;
                    strcpy(charac.carac , $1);
                    $$ = makeNode(carac, charac);
                    
                     }
    | IDENT     { 
                Type identifier ;
                strcpy(identifier.ident , $1);
                $$ = makeNode(id , identifier);
                
               
                }
                           
   
    |  IDENT '(' Arguments  ')'  {Type identifier ;
                                strcpy(identifier.ident , $1);
                                $$ = makeNode(function , type);
                                Node * funct = makeNode(headingFunct , type);
                                Node * nameFunct = makeNode(id , identifier);
                                addChild(funct , nameFunct);
                                addChild($$ , funct);
                                addSibling(funct , $3);
                                
                                }               
                     
                    
    
    ; 

    

Arguments:
       ListExp {
                $$ = makeNode(argumentFunct , type);
                addChild($$ , $1);
              
               }
    |   {$$ = NULL;}
    ;
ListExp:
       ListExp ',' Exp  {addChild($$, $3) ;}
    |  Exp              {$$ = $1;}    
    ; 
%%


int yyerror(char * msg)
{ return fprintf(stderr, "Error at line %d , column %d: invalid character\n", lineno, nbCarac);}

void printHelp(void){

    fprintf(stdout , "Usage: tpcas [OPTION]... [FILE]...\n");
    fprintf(stdout, "permet de vérifier que le fichier en tpc ne contient pas d'erreur lexical ou syntaxique\n");
    fprintf(stdout , "-t, --tree affiche l’arbre abstrait sur la sortie standard\n");
    fprintf(stdout , "Par exemple : ./tpcas -t FILE.tpc ou ./tpcas --tree FILE.tpc\n");
    fprintf(stdout , "-h, --help affiche une description de l’interface utilisateur et termine l’exécution\n");
    fprintf(stdout , "Par exemple : ./tpcas -h FILE.tpc ou ./tpcas --help FILE.tpc\n");
    fprintf(stdout , "\n");
}



void isOptionShort(int argc , char * argv[], int * optH ,int * optT){
    int opt = 0 ;
  
    

    for(;(opt = getopt(argc , argv, ":h::t")) != -1; ){
        
        switch(opt){
            case 't':
                *optT = 1; 
                break;
            case 'h':
                *optH = 1;
                break;
            case '?':
                return;
    
        } 
    
      
    }
   
    
}


void isOptionLong(int argc , char * argv[] , int *optH , int *optT){
    if(*optH && *optT)
        return;
   

    for (int i = 0; i < argc; i++)
    {
        
        if(!strcmp(argv[i], "--tree") && !(*optT)){
            *optT = 1;
        
        }
        else if(!strcmp(argv[i], "--help") && !(*optH)){
            *optH = 1;
            
        }
        
       
    }
    
   
    
}

void option(int argc , char * argv[] , int *optH , int *optT){
    isOptionShort(argc , argv ,optH ,optT);
    isOptionLong(argc , argv , optH , optT);
    if(*optH)
        printHelp();
    if(*optT){
        printTree(tree);
    }
    deleteTree(tree);
        
}




int main(int argc, char *argv[]) {
    int optH = 0 , optT = 0;
    int isCorrect = yyparse();
    if(isCorrect){
        return 1;
    }
    option(argc , argv , &optH , &optT);
    return 0;
}