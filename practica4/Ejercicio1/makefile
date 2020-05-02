OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio1

# Ejecutables
$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o $(OBJ)/bigint.o
	g++ -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o $(OBJ)/bigint.o

#Objetos

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INC)/bigint.h
	g++ -c -o $(OBJ)/ejercicio1.o -I$(INC) $(SRC)/ejercicio1.cpp

$(OBJ)/bigint.o:$(SRC)/bigint.cpp $(INC)/bigint.h
	g++ -c -o $(OBJ)/bigint.o -I$(INC) $(SRC)/bigint.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
