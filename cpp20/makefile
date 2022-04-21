
CXX=g++ -std=c++20 -fmodules-ts

clean:
	-rm -f *.o
	-rm -f *.pcm

	${CXX} -o mystring.pcm --precompile -x c++-module mystring.cc

	${CXX} -o main_cpp20 -fprebuilt-module-path=. main_cpp20.cpp mystring.cc


