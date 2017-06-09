# my_lib/Makefile
include Makefile.global
SUBDIRS 		= components test
.PHONY: all $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	rm -rf $(TARGET_LIB) $(TARGET_BIN)
	find . -name \*.o -exec rm {} \;
