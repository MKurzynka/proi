bin/app : build/app.o
	g++ build/app.o build/HashArray.o build/HashArrayUI.o -o bin/app.out

build/app.o : src/HashArrayApp.cpp
	g++ -c src/HashArrayApp.cpp -o -Iinclude build/app.o

build/HashArray.o : src/HashArray.cpp
	g++ -c src/HashArray.cpp -o -Iinclude build/HashArray.o

build/HashArrayUI.o : src/HashArrayUI.cpp
	g++ -c src/HashArrayUI.cpp -o -Iinclude build/HashArrayUI.o
