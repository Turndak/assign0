///////////////////////////////////////////
///										///
/// test-queue.c for CS201 assignment 0 ///
///                                     ///
///    Dakota Turner January 2017       ///
///                                     ///
///         Test file for queue         ///
///										///
///////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "integer.h"

// void Fatal(char *,...);

// static void showQueue(queue *q)
// {
//    printf("The queue is ");
//    displayQueue(stdout,q);
//    printf(".\n");
// }

int main(void)
{
	// queue *items = newQueue(displayInteger);
	// showQueue(items);
	// enqueue(items,newInteger(3));
	// enqueue(items,newInteger(2));
	// showQueue(items);
	// int x = getInteger((integer *) peekQueue(items));
	// printf("Next dequeue value will be: %d.\n",x);
	// //displayInteger(stdout, peekQueue(items));
	// printf("The value ");
	// displayInteger(stdout,dequeue(items));
	// printf(" was dequeued.\n");
	// showQueue(items);
	queue *a = newQueue(displayInteger);
    enqueue(a,newInteger(86));
    dequeue(a);
    enqueue(a,newInteger(35));
    enqueue(a,newInteger(92));
    dequeue(a);
    enqueue(a,newInteger(27));
    enqueue(a,newInteger(59));
    enqueue(a,newInteger(26));
    dequeue(a);
    enqueue(a,newInteger(36));
    enqueue(a,newInteger(68));
    dequeue(a);
    enqueue(a,newInteger(30));
    enqueue(a,newInteger(23));
    enqueue(a,newInteger(35));
    enqueue(a,newInteger(2));
    dequeue(a);
    enqueue(a,newInteger(67));
    enqueue(a,newInteger(56));
    enqueue(a,newInteger(42));
    dequeue(a);
    dequeue(a);
    enqueue(a,newInteger(37));
    enqueue(a,newInteger(24));
    enqueue(a,newInteger(70));
    enqueue(a,newInteger(26));
    enqueue(a,newInteger(80));
    enqueue(a,newInteger(73));
    enqueue(a,newInteger(70));
    enqueue(a,newInteger(81));
    displayQueue(stdout,a);
    printf("\n");

    printf("Size is: %d\n", sizeQueue(a));
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
    int i;
    displayQueue(stdout,a);
    printf("Size is: %d\n", sizeQueue(a));
    //queue *a = newQueue(displayReal);
    for (i=0;i<30000; i++)
    {
        enqueue(a,newInteger(i));
        
    }
    for (i=0;i<30000; i++)
    {
        dequeue(a);
    }
    printf("The queue is: \n");
    displayQueue(stdout,a);
    printf("Size is: %d\n", sizeQueue(a));

 	return 0;
}
    
// void Fatal(char *fmt, ...)
// {
//     va_list ap;

//     fprintf(stderr,"An error occured: ");
//     va_start(ap, fmt);
//     vfprintf(stderr, fmt, ap);
//     va_end(ap);

//     exit(-1);
// }
