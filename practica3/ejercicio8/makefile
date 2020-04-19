OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio8

# Ejecutables
$(BIN)/ejercicio8: $(OBJ)/ejercicio8.o $(OBJ)/lista.o $(OBJ)/utilidades.o $(OBJ)/celda.o
	g++ -o $(BIN)/ejercicio8 $^

#Objetos

$(OBJ)/ejercicio8.o: $(SRC)/ejercicio8.cpp $(INC)/lista.h $(INC)/celda.h
	g++ -c -o $(OBJ)/ejercicio8.o -I$(INC) $(SRC)/ejercicio8.cpp

$(OBJ)/celda.o:$(SRC)/celda.cpp $(INC)/celda.h
	g++ -c -o $(OBJ)/celda.o -I$(INC) $(SRC)/celda.cpp

$(OBJ)/lista.o: $(SRC)/lista.cpp $(INC)/lista.h
	g++ -c -o $(OBJ)/lista.o -I$(INC) $(SRC)/lista.cpp

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o	-I$(INC) $(SRC)/utilidades.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
