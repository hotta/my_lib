# my_lib/components/Makefile
top_dir = ../
include $(top_dir)/Makefile.global
CFLAGS  += -fPIC
LDFLAGS += -shared
OBJS = 	my_echo_int.o \
				my_echo_double.o \
				my_echo_string.o \
				my_add_int.o \
				my_add_return_int.o \
				my_add_return_str.o \
				my_logger.o 

all: $(TARGET_LIB) $(OBJS)

$(TARGET_LIB): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(TARGET_LIB)
