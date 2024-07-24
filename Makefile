
PROJECT_NAME = vulkan-dev
COMPILER = clang++
GLSL_COMPILER = glslc
C_FLAGS = -lGL -lglfw3 -lvulkan
C_INCLUDE_FLAGS = -I/usr/local/include -I/usr/include
C_LINKER_FLAGS = -I/usr/local/lib

build: build-shaders ./src/*.cpp ./src/*/*.cpp ./src/*/*.hpp
	$(COMPILER) ./src/*.cpp ./src/*/*.cpp $(C_INCLUDE_FLAGS) $(C_LINKER_FLAGS) $(C_FLAGS) -o ./build/$(PROJECT_NAME)

build-shaders: generate-dirs ./src/shaders/*.frag ./src/shaders/*.vert
	for FILENAME in ./src/shaders/*.frag; do $(GLSL_COMPILER) ./src/shaders/$${FILENAME##*/} -o ./build/shaders/$${FILENAME##*/}.bin; done;
	for FILENAME in ./src/shaders/*.vert; do $(GLSL_COMPILER) ./src/shaders/$${FILENAME##*/} -o ./build/shaders/$${FILENAME##*/}.bin; done;

generate-dirs:
	if [ ! -d "./build"]; then mkdir build; fi;
	if [ ! -d "./build/shaders"]; then mkdir build/shaders; fi;

run:
	./build/$(PROJECT_NAME)
