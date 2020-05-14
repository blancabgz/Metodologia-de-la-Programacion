OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/barquitos

# Ejecutables
$(BIN)/barquitos: $(OBJ)/main.o $(OBJ)/barquitos.o 
	g++ -o $(BIN)/barquitos $^

#Objetos

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/barquitos.h
	g++ -c -o $(OBJ)/main.o $< -I$(INC)

$(OBJ)/barquitos.o: $(SRC)/barquitos.cpp $(INC)/barquitos.h
	g++ -c -o $(OBJ)/barquitos.o	$< -I$(INC)


clean:
	rm $(OBJ)/* $(BIN)/*
