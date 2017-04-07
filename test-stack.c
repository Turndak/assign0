///////////////////////////////////////////
///										///
/// test-stack.c for CS201 assignment 0 ///
///                                     ///
///    Dakota Turner January 2017       ///
///                                     ///
///         Test file for stack         ///
///										///
///////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "integer.h"

// void Fatal(char *,...);

static void showStack(stack *s)
{
   printf("The stack is ");
   displayStack(stdout,s);
   printf(".\n");
}

int main(void)
{
	stack *items = newStack(displayInteger);
	showStack(items);
	push(items,newInteger(3));
	showStack(items);
	push(items,newInteger(2));
	showStack(items);
	int x = getInteger((integer *) peekStack(items));
	printf("The next value to be popped is: %d\n", x);
	printf("The value ");
	displayInteger(stdout,pop(items));
	printf(" was popped.\n");
	showStack(items);

	stack *a = newStack(displayInteger);
	typedef struct dub
    {
    double value;
    } dub;
double 
getDouble(dub *v)
    {
    return v->value;
    }

double
setDouble(dub *v,double x)
    {
    double old = v->value;
    v->value = x;
    return old;
    }

void 
displayDouble(FILE *fp,void *v)
    {
    fprintf(fp,"%f",getDouble(v));
    }

dub *
newReal(double x)
  {
  dub *p = malloc(sizeof(dub));
  //if (p == 0) Fatal("out of memory\n");
  p->value = x;
  return p;
  }
    //queue *a = newQueue(displayReal);
    for (int i=0;i<30000; i++)
    {
        push(a,newReal(i));
    }
    for (int i=0;i<30000; i++)
    {
        pop(a);
    }
    printf("The stack is:\n");
    displayStack(stdout,a);
	return 0;
}
// 	return 0;
// }


// void Fatal(char *fmt, ...)
// {
//     va_list ap;

//     fprintf(stderr,"An error occured: ");
//     va_start(ap, fmt);
//     vfprintf(stderr, fmt, ap);
//     va_end(ap);

//     exit(-1);
// }
