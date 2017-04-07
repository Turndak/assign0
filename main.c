#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
//#include "sll.h"
#include "dll.h"
#include "integer.h"

void Fatal(char *,...);


   //static void showItems(sll *items)
	static void showItems(dll *items)
       {
       printf("The items are ");
       displayDLL(stdout,items);
       printf(".\n");
       }
   
   int main(int argc,char **argv)
       {
       dll *items = newDLL(displayInteger);
       //dll *items2 = newDLL(displayInteger);
       insertDLL(items,0,newInteger(0));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       insertDLL(items,0,newInteger(1));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       insertDLL(items,0,newInteger(2));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       insertDLL(items,0,newInteger(3));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       insertDLL(items,0,newInteger(4));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       insertDLL(items,0,newInteger(5));
       printf("%d \n",sizeDLL(items));
       showItems(items);
       // insertDLL(items,2,newInteger(7));                   //insert at middle
       // showItems(items);
       // printf("%d \n",sizeDLL(items));
       /*
       insertDLL(items2,0,newInteger(5));                   //insert at front
       insertSLL(items2,sizeDLL(items2),newInteger(9));      			   //insert at back
       insertDLL(items2,0,newInteger(6));      			   //insert at back       
       insertDLL(items2,1,newInteger(11));                   //insert at middle
       showItems(items2);
       printf("The value ");
       displayInteger(stdout,removeDLL(items,2));          //remove from front
       printf(" was removed.\n");
       showItems(items);
       int x = getInteger((integer *) getDLL(items,3));    //get the first item
       printf("The selected index is %d.\n",x);
       unionDLL(items,items2);
       showItems(items);
       showItems(items2);
       */
       return 0;
       }
void
Fatal(char *fmt, ...)
    {
    va_list ap;

    fprintf(stderr,"An error occured: ");
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);

    exit(-1);
    }
