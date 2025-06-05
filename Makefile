all: description exceution

description:
	@echo "this is a code to test whether a given number is an armstrong number."

exceution:armstrong.c
	@gcc armstrong.c -lm -o armstrong
	@./armstrong

clear: armstrong
	@rm armstrong
