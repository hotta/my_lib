# my_lib/test/Makefile
top_dir = ../
include $(top_dir)/Makefile.global
OBJS = test.o
CPPFLAGS += -Wno-error=unused-parameter -Wno-error=main

$(TARGET_BIN): $(OBJS)
	$(CC) -o $(TARGET_BIN) $(TARGET_LIB) $(OBJS)
