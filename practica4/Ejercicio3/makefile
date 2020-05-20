OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio3

# Ejecutables
$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(OBJ)/matrizdispersa.o $(OBJ)/valor.o
	g++ -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o $(OBJ)/matrizdispersa.o $(OBJ)/valor.o

#Objetos

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/matrizdispersa.h $(INC)/valor.h
	g++ -c -o $(OBJ)/ejercicio3.o -I$(INC) $(SRC)/ejercicio3.cpp

$(OBJ)/valor.o:$(SRC)/valor.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/valor.o -I$(INC) $(SRC)/valor.cpp

$(OBJ)/matrizdispersa.o:$(SRC)/matrizdispersa.cpp $(INC)/matrizdispersa.h
	g++ -c -o $(OBJ)/matrizdispersa.o -I$(INC) $(SRC)/matrizdispersa.cpp


clean:
	rm $(OBJ)/* $(BIN)/*
