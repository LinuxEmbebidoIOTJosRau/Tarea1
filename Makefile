CC ?= gcc
 
APP_NAME = streams
OBJS = streams.o
 
all: $(APP_NAME)
 
$(APP_NAME): $(OBJS)
	$(CC) -o $@ $^
 
%.o: %.c
	$(CC) -c $^ -o $@
 
 
clean:
	rm *.o $(APP_NAME)