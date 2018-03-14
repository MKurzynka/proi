bin/HashArrayApp : build/HashArrayApp.o build/
	g++ -std=c++0x build/app.o build/HashArray.o build/HashArrayUI.o -o bin/app.out

build/HashArrayApp.o : src/HashArrayApp.cpp include/HashArrayUI.hpp include/HashArray.hpp
	g++ -c src/HashArrayApp.cpp -o  build/HashArrayApp.o

build/HashArray.o : src/HashArray.cpp include/HashArray.hpp
	g++ -c src/HashArray.cpp -o build/HashArray.o

build/HashArrayUI.o : src/HashArrayUI.cpp include/HashArray.hpp include/HashArrayUI.hpp
	g++ -c src/HashArrayUI.cpp -o build/HashArrayUI.o
