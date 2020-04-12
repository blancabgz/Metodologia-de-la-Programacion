OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio8

# Ejecutables
$(BIN)/ejercicio8: $(OBJ)/ejercicio8.o $(OBJ)/lista.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio8 $^ -g

#Objetos

$(OBJ)/ejercicio8.o: $(SRC)/ejercicio8.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/ejercicio8.o $< -I$(INC) -g

$(OBJ)/lista.o: $(SRC)/lista.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/lista.o	$< -I$(INC) -g

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	$< -I$(INC) -g

clean:
	rm $(OBJ)/* $(BIN)/*
