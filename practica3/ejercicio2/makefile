OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio2

# Ejecutables
$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(OBJ)/valor.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o $(OBJ)/valor.o $(OBJ)/utilidades.o

#Objetos

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/ejercicio2.o -I$(INC) $(SRC)/ejercicio2.cpp

$(OBJ)/valor.o: $(SRC)/valor.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/valor.o -I$(INC) $(SRC)/valor.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
