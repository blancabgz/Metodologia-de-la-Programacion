OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio3

# Ejecutables
$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(OBJ)/utilidades.o $(OBJ)/matrizdispersa.o $(OBJ)/valor.o
	g++ -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o $(OBJ)/utilidades.o $(OBJ)/matrizdispersa.o $(OBJ)/valor.o

#Objetos

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/matrizdispersa.h $(INC)/valor.h
	g++ -c -o $(OBJ)/ejercicio3.o -I$(INC) $(SRC)/ejercicio3.cpp -g

$(OBJ)/valor.o:$(SRC)/valor.cpp $(INC)/valor.h
	g++ -c -o $(OBJ)/valor.o -I$(INC) $(SRC)/valor.cpp -g

$(OBJ)/matrizdispersa.o:$(SRC)/matrizdispersa.cpp $(INC)/matrizdispersa.h
	g++ -c -o $(OBJ)/matrizdispersa.o -I$(INC) $(SRC)/matrizdispersa.cpp -g

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp -g

clean:
	rm $(OBJ)/* $(BIN)/*
