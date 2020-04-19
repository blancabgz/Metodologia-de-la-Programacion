OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio6

# Ejecutables
$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(OBJ)/matriz.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o $(OBJ)/matriz.o $(OBJ)/utilidades.o

#Objetos

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio6.o -I$(INC) $(SRC)/ejercicio6.cpp

$(OBJ)/matriz.o: $(SRC)/matriz.cpp $(INC)/matriz.h
	g++ -c -o $(OBJ)/matriz.o -I$(INC) $(SRC)/matriz.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
