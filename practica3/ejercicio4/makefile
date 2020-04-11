OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio4

# Ejecutables
$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(OBJ)/lista.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio4 $^ -g

#Objetos

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/ejercicio4.o $< -I$(INC) -g

$(OBJ)/lista.o: $(SRC)/lista.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/lista.o	$< -I$(INC) -g

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	$< -I$(INC) -g

clean:
	rm $(OBJ)/* $(BIN)/*
