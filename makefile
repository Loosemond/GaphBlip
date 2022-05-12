
CFLAGS = -std=c++17 -O2
LDFLAGS =  -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi


bin: *.cpp *.hpp
	g++ $(CFLAGS) -o ./build/game *.cpp $(LDFLAGS)

.PHONY: test clean

test: bin
	./build/game

clean:
	rm -f ./build/game