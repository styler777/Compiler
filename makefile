# Variables
CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -Wall
LEX = lex

# Répertoires
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Fichiers
EXEC = bin/tpcas
BISON_SRC = $(SRC_DIR)/parser.y
BISON_TAB_C = $(SRC_DIR)/parser.tab.c
BISON_TAB_H = $(SRC_DIR)/parser.tab.h

SRCS = $(SRC_DIR)/lexer.c $(SRC_DIR)/tree.c $(BISON_TAB_C)
OBJS = $(OBJ_DIR)/lexer.o $(OBJ_DIR)/tree.o $(OBJ_DIR)/parser.o

# Règle par défaut
all: $(EXEC)

# Compilation de l'exécutable final
$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

# Génération des fichiers Bison
$(BISON_TAB_C) $(BISON_TAB_H): $(BISON_SRC)
	bison -d -o $(BISON_TAB_C) $(BISON_SRC)

# Compilation spécifique pour parser.o
$(OBJ_DIR)/parser.o: $(BISON_TAB_C) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Génération du fichier lexer.c depuis lexer.l
$(SRC_DIR)/lexer.c: $(SRC_DIR)/lexer.l
	$(LEX) -t $< > $@

# Règle générique pour compiler les fichiers .o dans obj/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Dépendances explicites pour les fichiers objets
$(OBJ_DIR)/lexer.o: $(SRC_DIR)/lexer.c $(BISON_TAB_H)
$(OBJ_DIR)/tree.o: $(SRC_DIR)/tree.c $(SRC_DIR)/tree.h



# Nettoyage
.PHONY: clean
clean:
	rm -rf $(OBJS) $(BISON_TAB_C) $(BISON_TAB_H) $(EXEC) $(SRC_DIR)/lexer.c  report.txt
