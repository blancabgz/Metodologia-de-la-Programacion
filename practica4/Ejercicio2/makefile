OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio2

# Ejecutables
$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(OBJ)/utilidades.o $(OBJ)/polilinea.o $(OBJ)/punto.o
	g++ -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o $(OBJ)/utilidades.o $(OBJ)/polilinea.o $(OBJ)/punto.o

#Objetos

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/polilinea.h $(INC)/punto.h
	g++ -c -o $(OBJ)/ejercicio2.o -I$(INC) $(SRC)/ejercicio2.cpp

$(OBJ)/punto.o:$(SRC)/punto.cpp $(INC)/punto.h
	g++ -c -o $(OBJ)/punto.o -I$(INC) $(SRC)/punto.cpp

$(OBJ)/polilinea.o:$(SRC)/polilinea.cpp $(INC)/polilinea.h
	g++ -c -o $(OBJ)/polilinea.o -I$(INC) $(SRC)/polilinea.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
