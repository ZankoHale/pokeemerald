CC ?= gcc
.PHONY: all clean

SRCS = gbafix.c

gbafix: $(SRCS)
	$(CC) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) gbafix gbafix.exe
