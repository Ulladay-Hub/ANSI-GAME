CXX = g++
CXXFLAGS = -std=c++17 -Iinclude
SRC = $(wildcard src/*.cpp) examples/main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = ansigame

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: clean
