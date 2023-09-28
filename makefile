#Arquivo Makefile do Trabalho 1
#Ryan Fellipe Silva Costa - 11953369
#@ryan-costa01 - ryanfellipe2001@usp.br

TARGET=functionMain
GCC=gcc
OBJS=functionMain.c

all:$(OBJS)
	@$(GCC) -o $(TARGET) $(OBJS) -lm 
	@echo "Programa Compilado"
run:
	@echo "------Programa Iniciado------"
	@./$(TARGET)
	@echo "------Programa Finalizado------"
clean:
	rm -rf *.o