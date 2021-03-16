CFILES=$(shell find src -name '*.c')
OFILES=$(patsubst %.c,%.o,$(CFILES))
TARGET=binary-tree
FLAGS=-Wall -Wextra -Wpedantic

$(TARGET): $(OFILES)
		gcc -o $(TARGET) $(OFILES) $(FLAGS)

%.o: %.c
		gcc $(CC_FLAGS) -o $@ -c $<

clean:
		rm -rf $(TARGET) $(OFILES)