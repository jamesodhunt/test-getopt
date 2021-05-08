FILE = test_getopt.c
BINARY = $(FILE:.c=)

default:
	$(CC) -o $(BINARY) $(FILE)

clean:
	rm -f $(BINARY)
