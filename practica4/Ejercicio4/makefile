OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio4

# Ejecutables
$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o $(OBJ)/pareja.o $(OBJ)/precuencias.o
	g++ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o $(OBJ)/pareja.o $(OBJ)/precuencias.o

#Objetos

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/pareja.h $(INC)/precuencias.h
	g++ -c -o $(OBJ)/ejercicio4.o -I$(INC) $(SRC)/ejercicio4.cpp

$(OBJ)/pareja.o:$(SRC)/pareja.cpp $(INC)/pareja.h
	g++ -c -o $(OBJ)/pareja.o -I$(INC) $(SRC)/pareja.cpp

$(OBJ)/precuencias.o:$(SRC)/precuencias.cpp $(INC)/precuencias.h
	g++ -c -o $(OBJ)/precuencias.o -I$(INC) $(SRC)/precuencias.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
