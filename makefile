SRC=tests_catch.cpp main_test.cpp main.cpp Pile.cpp
EXE = cpp6
CXX = g++

CXXFLAGS = -Wall -Wextra -g -O2 -MMD
LDFLAGS =

OBJ=$(addprefix build/,$(SRC:.cpp=.o))

all : $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o : %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean :
	rm -rf build cpp6