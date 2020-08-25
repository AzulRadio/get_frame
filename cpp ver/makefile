test: test.o camera.o
	g++ test.o camera.o -o test `pkg-config --cflags --libs opencv`
camera.o: camera.h camera.cpp
	g++ camera.cpp -c
test.o: camera.h test.cpp
	g++ test.cpp -c
