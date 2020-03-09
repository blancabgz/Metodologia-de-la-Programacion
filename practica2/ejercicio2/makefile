OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio2

# Ejecutables
$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(OBJ)/valor.o
	g++ -o $(BIN)/ejercicio2 $^

#Objetos

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/ejercicio2.o $< -I$(INC)

$(OBJ)/valor.o: $(SRC)/valor.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/valor.o	$< -I$(INC)

clean:
	rm obj/* bin/*
