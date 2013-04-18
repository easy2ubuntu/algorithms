
#包含编译器
include ./compiler.mk

SRCS = ./list/list.c
OBJS = $(patsubst %.c,%.o, $(SRCS))
TARGET = libalgorithms.a


.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) rc $@ $^
	
%.o:%.c
	$(CC) -c -o $@ $<
clean:
	rm $(TARGET) $(OBJS)
	