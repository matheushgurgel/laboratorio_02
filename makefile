# Makefile for "imd0030"
# Created by Matheus Henrique 22/04/2018
#
# Makefile completo separando os diferentes elementos da aplicacao como codigo (src),
# cabecalhos (include), executaveis (build), bibliotecas (lib), etc.
# Cada elemento e alocado em uma pasta especifica, organizando melhor o codigo fonte.
#
# Algumas variaveis sao usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito
#

# Comandos do sistema operacional
# Linux: rm -rf 
# Windows: cmd //C del 
RM = rm -rf 

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean debug doxy doc

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS_1 = $(OBJ)/circulo.o $(OBJ)/cubo.o $(OBJ)/esfera.o $(OBJ)/paralepipedo.o $(OBJ)/piramide.o $(OBJ)/quadrado.o $(OBJ)/retangulo.o $(OBJ)/triangulo.o $(OBJ)/geometria.o

all : $(OBJS_1)
	$(CC) $(LDFLAGS) -o $(BIN)/geometria $(OBJS_1)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/geometria.o : $(SRC)/geometria.cpp $(OBJ)/circulo.o $(OBJ)/cubo.o $(OBJ)/esfera.o $(OBJ)/paralepipedo.o $(OBJ)/piramide.o $(OBJ)/quadrado.o $(OBJ)/retangulo.o $(OBJ)/triangulo.o
	$(CC) $(CPPFLAGS) -c $(SRC)/geometria.cpp -o $@

$(OBJ)/circulo.o : $(INC)/circulo.h $(SRC)/circulo.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $@

$(OBJ)/cubo.o : $(INC)/cubo.h $(SRC)/cubo.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/cubo.cpp -o $@

$(OBJ)/esfera.o : $(INC)/esfera.h $(SRC)/esfera.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/esfera.cpp -o $@

$(OBJ)/paralepipedo.o : $(INC)/paralepipedo.h $(SRC)/paralepipedo.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/paralepipedo.cpp -o $@

$(OBJ)/piramide.o : $(INC)/piramide.h $(SRC)/piramide.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/piramide.cpp -o $@

$(OBJ)/quadrado.o : $(INC)/quadrado.h $(SRC)/quadrado.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/quadrado.cpp -o $@

$(OBJ)/retangulo.o : $(INC)/retangulo.h $(SRC)/retangulo.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $@

$(OBJ)/triangulo.o : $(INC)/triangulo.h $(SRC)/triangulo.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $@

# Alvo para a criação do arquivo Doxyfile.
doxy:
	doxygen -g

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doc:
	$(RM) $(DOC)/*
	doxygen ./Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS_1) $(OBJS_2)
