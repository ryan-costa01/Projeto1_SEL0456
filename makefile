#Arquivo Makefile do Trabalho 1
#Ryan Fellipe Silva Costa - 11953369
#@ryan-costa01 - ryanfellipe2001@usp.br

TARGET=functionMain
GCC=gcc
OBJS=functionMain.c
FunC=Soma.c Media.c Elev2.c

all:$(OBJS)
	@echo "Compilação Iniciada"
	$(GCC) -c $(FunC)
	$(GCC) -o $(TARGET) $(OBJS) -lm 
	@echo "Programa Compilado"
run:
	@echo "------Programa Iniciado------"
	@./$(TARGET)
	@echo "------Programa Finalizado------"
clean:
	rm -rf *.o