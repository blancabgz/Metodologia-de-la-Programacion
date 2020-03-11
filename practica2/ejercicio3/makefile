OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio3

# Ejecutables
$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio3 $^

# Objetos

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o $< -I$(INC)

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio3.o $< -I$(INC)

clean:
	rm $(OBJ)/* $(BIN)/*
