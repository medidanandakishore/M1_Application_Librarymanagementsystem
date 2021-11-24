
TARGET = main LIBS = -lm CC = gcc CFLAGS = -g -Wall DIR = src/

.PHONY: default all clean

default: $(TARGET) all: default

OBJECTS = $(patsubst $(DIR)%.c, $(DIR)%.o, $(wildcard $(DIR).c)) HEADERS = $(wildcard $(DIR).h)

%.o: %.c $(HEADERS) $(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS) $(CC) $(OBJECTS) -Wall $(LIBS) -o $@

clean: -rm -f $(DIR)*.o -rm -f $(TARGET)

clean_o: -rm -f $(DIR)*.o
