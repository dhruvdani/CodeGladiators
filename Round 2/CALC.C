/*----- FILE CALC.C --------------------------------------------------*/
/*                                                                    */
/* A simple calculator that does operations on integers that          */
/* are pushed and popped on a stack                                   */
/*--------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "READTOKN.C" //We Have included "READTOKN.C" file
#include "pushpop.c"  //We Have included "pushpop.c file"

IntStack stack = { 0 };

main()
{
  Token tok;
  char word[100];
  char buf_out[100];
  int num, num2;
  clrscr(); // This statement is added to clear the screen
  for(;;)
  {
    tok=read_token(word);
    switch(tok)
    {
      case T_STOP:
	break;
      case T_INTEGER:
	num = atoi(word);
	push(&stack,num);
	break;
      case T_PLUS:
	push(&stack,pop(&stack)+pop(&stack));
	break;
      case T_MINUS:
	num = pop(&stack);
	push(&stack, num-pop(&stack));
	break;
      case T_TIMES:
	push(&stack, pop(&stack)*pop(&stack));
	break;
      case T_DIVIDE:
	num2 = pop(&stack);
	num = pop(&stack);
	push(&stack, num/num2);
	break;
      case T_EQUALS:
	num = pop(&stack);
	sprintf(buf_out,"= %d ",num);
	puts(buf_out); //We have added this statement to print the output
	//printf(" = %d\n",num);
	push(&stack,num);
	break;
    }
    if (tok==T_STOP)
      break;
  }
  getch(); //This statement is added to hold the output on the screen until a key is pressed
  return 0;
}