#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

run: demo
	./$^

demo: Demo.o FamilyTree.o
	$(CXX) $(CXXFLAGS)  $^ -o demo

test: TestCounter.o Test.o FamilyTree.o
	$(CXX) $(CXXFLAGS)  $^ -o test

%.o: %.cpp FamilyTree.hpp
	$(CXX) $(CXXFLAGS)  --compile $< -o $@

clean:
	rm -f *.o demo test
