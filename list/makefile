
#包含编译器
include ../compiler.mk

SRCS = list.c
OBJS = list.o
TARGET = liblist.a


.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) rc $@ $^
	
%.o:%.c
	$(CC) -c -o $@ $<
clean:
	rm $(TARGET) $(OBJS)
	