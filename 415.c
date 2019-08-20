#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 265

//######################
// DEFINE STACK
typedef struct stackP
{
	char values[MAX_STACK_SIZE];
	int volum;
} stackP;

typedef struct stackC
{
	char values[MAX_STACK_SIZE];
	int volum;
} stackC;
//#######################

//#######################
// THIS BLOCK IS TO STACK TYPE P :

//THIS FUNCTION CREAT A STACK TYPE P
void *stackCreatP()
{
	stackP *newStack = malloc(sizeof(stackP));
	newStack->volum = 0;
	return newStack;
}

void pushP(stackP *stack, char value)
{
	if (stack->volum == MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
	}else{
		stack->values[stack->volum++] = value;
	}
}

void popP(stackP *stack)
{
	--stack->volum;
}
//#######################

//#######################
// THIS BLOCK IS TO STACK TYPE C:

//THIS FUNCTION CREAT A STACK TYPE C
void *stackCreatC()
{
	stackC *newStack = malloc(sizeof(stackC));
	newStack->volum = 0;
	return newStack;
}

void pushC(stackC *stack, char value)
{
	if (stack->volum == MAX_STACK_SIZE)
	{
		printf("Stack overflow\n");
	}else{
		stack->values[stack->volum++] = value;
	}
}

void popC(stackC *stack)
{
	--stack->volum;
}
//######################

int main(void)
{
	int num;
	scanf("%d", &num);
	int i = 0;
	stackP *stackP = stackCreatP();
	stackC *stackC = stackCreatC();
	int save = 0;
	while(i<num)
	{
		char in[265];
		scanf(" %[^\n]", in);
		// CHECK
		int j = strlen(in), k = 0;
		while(k<j)
		{
			if (in[k] == '(')
			{
				pushP(stackP, in[k]);
			}
			else if (in[k] == ')')
			{
				popP(stackP);
			}
			else if (in[k] == '[')
			{
				pushC(stackC, in[k]);
			}
			else if(in[k] == ']'){
				popC(stackC);
			}
			if(stackP->volum<0 || stackC->volum<0 )
			{
				save = 1;
			}
			k++;
		}
		if ((stackC->volum == 0 && stackP->volum == 0 && save == 0) || in[0] == '\n')
		{
			printf("Yes\n");
		}else{
			printf("No\n");
		}
		stackP->volum = 0;
		stackC->volum = 0;
		save = 0;
		i++;
	}
}