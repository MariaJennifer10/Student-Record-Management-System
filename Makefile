
CC = gcc
CFLAGS = -Wall -Wextra

SRC = stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort_reverse.c

OBJ = $(SRC:.c=.o)

student: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o student

%.o: %.c student.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) student

