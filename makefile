#Arquivo Makefile do Trabalho 1
#Ryan Fellipe Silva Costa - 11953369
#@ryan-costa01 - ryanfellipe2001@usp.br

TARGET=functionMain
GCC=gcc
OBJS=functionMain.c
FunC=Soma.c Media.c Elev2.c
CFLAGS = -Wall -I ./$(HDIR)

HDIR = headers
OBJDIR = obj

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all: $(TARGET)
	
	@echo "Programa Compilado"
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -lm
	
$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -lm -o $@ 

run:
	@echo "------Programa Iniciado------"
	@./$(TARGET)
	@echo "------Programa Finalizado------"
clean:
	rm -rf ./obj/*