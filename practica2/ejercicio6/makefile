OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio6

# Ejecutables
$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio6 $^

# Objetos

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o $< -I$(INC)

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio6.o $< -I$(INC)

clean:
	rm $(OBJ)/* $(BIN)/*
