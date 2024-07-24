
PROJECT_NAME = vulkan-dev
COMPILER = clang++
C_FLAGS = -lGL -lglfw3 -lvulkan
C_INCLUDE_FLAGS = -I/usr/local/include -I/usr/include
C_LINKER_FLAGS = -I/usr/local/lib

build: ./src/*.cpp ./src/*/*.cpp ./src/*/*.hpp
	if ! [ -d "./build" ]; then mkdir build; fi;
	$(COMPILER) ./src/*.cpp ./src/*/*.cpp $(C_INCLUDE_FLAGS) $(C_LINKER_FLAGS) $(C_FLAGS) -o ./build/$(PROJECT_NAME)

run:
	./build/$(PROJECT_NAME)
