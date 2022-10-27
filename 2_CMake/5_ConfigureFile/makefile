exe_name := executable
all: run

all_without: cp_without

clean:
	rm -rf ./build
	mkdir build

build: clean
	cmake -DCOMPILE_EXECUTABLE=ON -S . -B ./build -G Ninja .
	cmake --build ./build

build_without: clean
	cmake -S . -B ./build -G Ninja .
	cmake --build ./build

copy_compile_commands: build
	cp ./build/compile_commands.json .

cp_without: build_without
	cp ./build/compile_commands.json .

run: copy_compile_commands
	./build/app/$(exe_name).exe
