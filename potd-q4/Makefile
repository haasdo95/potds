EXENAME = q4

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): q4.cpp circle.h circle.o
	$(CXX) $(CXXFLAGS) q4.cpp circle.o -o $(EXENAME)

circle.o: circle.h circle.cpp
	$(CXX) $(CXXFLAGS) -c circle.cpp

.PHONY: clean
clean:
	rm -f *.o $(EXENAME)
