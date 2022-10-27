exe_name := executable

all: run

clean:
	rm -rf ./build
	mkdir build

build: clean
	cmake -DCOMPILE_EXECUTABLE=ON -S . -B ./build
	cmake --build ./build

run: build
	./build/app/Debug/$(exe_name).exe

generate: clean
	cmake -DCOMPILE_EXECUTABLE=ON -S . -B ./build -GNinja
	cmake --build ./build
	mv ./build/compile_commands.json .

dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png
