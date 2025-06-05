all: description exceution clear conclusion

description:
	@echo "this is a code to test whether a given number is an armstrong number."

exceution:armstrong.c
	@gcc armstrong.c -lm -o armstrong
	@./armstrong

conclusion:
	@echo "program has executed successfully. "

clear: armstrong
	@rm armstrong
