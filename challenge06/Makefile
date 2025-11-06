CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=starter.c
TARGET=programa
TEST_TARGET=test_challenge06

all: build test package # En el entry point ejecuta estas tres cosas una detras de la otra

build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)


test: build test_challenge06.c
	$(CC) -DEXISTS=1 $(CFLAGS) -o $(TEST_TARGET) $(SRC) test_challenge06.c
	./$(TEST_TARGET)


package: build
	mkdir -p dist
	cp $(TARGET) dist/


clean:
	rm -f $(TARGET) $(TEST_TARGET)
	rm -rf dist
