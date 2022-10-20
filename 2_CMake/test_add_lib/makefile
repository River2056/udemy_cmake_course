build: clean
	mkdir build
	cmake -S . -B ./build -G Ninja .
	cp ./build/compile_commands.json .
	cd ./build && ninja
	./build/hello_world.exe

clean:
	rm -rf ./build
