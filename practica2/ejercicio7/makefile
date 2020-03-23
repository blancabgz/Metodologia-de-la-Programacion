OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio7

# Ejecutables
$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio7 $^

# Objetos

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o $< -I$(INC)

$(OBJ)/ejercicio7.o: $(SRC)/ejercicio7.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio7.o $< -I$(INC)

clean:
	rm $(OBJ)/* $(BIN)/*
