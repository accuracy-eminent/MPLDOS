CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -g

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

TARGET=mpldos

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
