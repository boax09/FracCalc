CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= FracCalcTest

COMMON_OBJECT_FILES = stdFuncs.o 

all: ${BINARIES}

tests: ${BINARIES} 
	./FracCalcTest 1

testfile: FracCalcTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
