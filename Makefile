CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++17
TARGET   := main
SRC      := main.cpp

.PHONY: all build test clean

all: build

build: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

test: $(TARGET)
	./$(TARGET) test

clean:
	rm -f $(TARGET)
