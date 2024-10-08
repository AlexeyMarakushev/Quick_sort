CXX = g++
CXXFLAGS = -Wall

ifdef DEBUG
CXXFLAGS += -g
endif

TARGET =  a
OBJ = main.o sort.o 

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET)

main.o: main.cpp sort.h
	$(CXX) $(CXXFLAGS) -c main.cpp

sort.o: sort.cpp sort.h
	$(CXX) $(CXXFLAGS) -c sort.cpp
	
clean:
	rm -f $(OBJ) $(TARGET)