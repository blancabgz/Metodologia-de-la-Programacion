OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio4

# Ejecutables
$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(OBJ)/lista.o $(OBJ)/utilidades.o $(OBJ)/celda.o
	g++ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o $(OBJ)/lista.o $(OBJ)/utilidades.o $(OBJ)/celda.o

#Objetos

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/lista.h $(INC)/celda.h
	g++ -c -o $(OBJ)/ejercicio4.o -I$(INC) $(SRC)/ejercicio4.cpp

$(OBJ)/celda.o:$(SRC)/celda.cpp $(INC)/celda.h
	g++ -c -o $(OBJ)/celda.o -I$(INC) $(SRC)/celda.cpp

$(OBJ)/lista.o: $(SRC)/lista.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/lista.o -I$(INC) $(SRC)/lista.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
