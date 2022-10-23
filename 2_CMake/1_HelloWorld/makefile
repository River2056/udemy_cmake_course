exe_name := CppProjectTemplate
all: run

clean:
	rm -rf ./build
	mkdir build

build: clean
	cmake -S . -B ./build -G Ninja .
	cmake --build ./build

copy_compile_commands: build
	cp ./build/compile_commands.json .

run: copy_compile_commands
	./build/$(exe_name).exe
