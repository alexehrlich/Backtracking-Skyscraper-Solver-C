CFLAGS = -Wall -Werror -Wextra

CFILES = grid_check.c grid.c set_prefill_values.c solve_grid.c main.c 
OFILES = grid_check.o grid.o set_prefill_values.o solve_grid.o main.o 

BINARY = skyscraper.exe

all: $(BINARY)

$(BINARY): $(OFILES)
	gcc $(CFLAGS) $(OFILES)

%.o: %.c 
	gcc -c $(CFLAGS) $^ -o $@

clean:
	rm *.o 

fclean:
	rm *.o 
	rm *.exe
