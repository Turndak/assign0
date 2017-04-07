///////////////////////////////////////////
///                                     ///
///  test-dll.c for CS201 assignment 0  ///
///                                     ///
///    Dakota Turner January 2017       ///
///                                     ///
///         Test file for sll           ///
///                                     ///
///////////////////////////////////////////
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
   
   int main(void)
       {
       dll *items = newDLL(displayInteger);
       //dll *items2 = newDLL(displayInteger);
       insertDLL(items,sizeDLL(items),newInteger(0));
       insertDLL(items,sizeDLL(items),newInteger(1));
       insertDLL(items,sizeDLL(items),newInteger(2));
       insertDLL(items,0,newInteger(3));
       insertDLL(items,sizeDLL(items),newInteger(4));
       showItems(items);
       printf("Size is: %d \n",sizeDLL(items));
       int x = getInteger((integer *) getDLL(items,sizeDLL(items)-1));    //get the first item
       printf("Item to remove is: %d\n", x);
       removeDLL(items,sizeDLL(items)-1);
       showItems(items);
       removeDLL(items,3);
       showItems(items);
       removeDLL(items,2);
       showItems(items);
       removeDLL(items,1);
       showItems(items);
       removeDLL(items,0);
       showItems(items);
       insertDLL(items,0,newInteger(4));
       //printf("The value ");
       //removeDLL(items,20);          //remove from front
       //printf(" was removed.\n");
       showItems(items);
      
    //    // //printf("Size is: %d \n",sizeDLL(items));
    //    // printf("The value ");
    //    // displayInteger(stdout,removeDLL(items,2));          //remove from front
    //    // printf(" was removed.\n");
    //    // showItems(items);
    //    // printf("Size is: %d \n",sizeDLL(items));
    //    // printf("The value ");
    //    // displayInteger(stdout,removeDLL(items,0));          //remove from front
    //    // printf(" was removed.\n");
    //    // showItems(items);
    //    // printf("Size is: %d \n",sizeDLL(items));
    //    // printf("The value ");
    //    // displayInteger(stdout,removeDLL(items,0));          //remove from front
    //    // printf(" was removed.\n");
    //    // showItems(items);
    //    // //printf("Size is: %d \n",sizeDLL(items));
    //    // printf("The value ");
    //    // displayInteger(stdout,removeDLL(items,0));          //remove from front
    //    // printf(" was removed.\n");
    //    // showItems(items);
    //    //printf("Size is: %d \n",sizeDLL(items));

    //    // insertDLL(items,2,newInteger(7));                   //insert at middle
    //    // showItems(items);
    //    // printf("%d \n",sizeDLL(items));
       
    //    insertDLL(items2,0,newInteger(5));                   //insert at front
    //    insertDLL(items2,sizeDLL(items2),newInteger(9));      			   //insert at back
    //    insertDLL(items2,0,newInteger(6));      			   //insert at back       
    //    insertDLL(items2,1,newInteger(11));                   //insert at middle
    //    showItems(items2);

    //    unionDLL(items,items2);
    //    showItems(items);
    //    showItems(items2);
    //    printf("Size is: %d \n",sizeDLL(items));
    //    printf("Size is: %d \n",sizeDLL(items2));

    //    unionDLL(items2, items);
    //    showItems(items);
    //    showItems(items2);
    //    printf("Size is: %d \n",sizeDLL(items));
    //    printf("Size is: %d \n",sizeDLL(items2));

    //    int i;
    //    printf("\nTest Union\n");
    //   dll *b = newDLL(displayInteger);
    //   dll *c = newDLL(displayInteger);
    //   for (i = 0; i < 100; i ++) {
    //     if (sizeDLL(b) == 0)
    //         insertDLL(b,0,newInteger(i));
    //     else
    //         insertDLL(b,sizeDLL(b)-1,newInteger(i));
    //   }
    //   printf("\n");
    // displayDLL(stdout,b);
    // for (i = 0; i < 100; i ++) {
    //     if (sizeDLL(c) == 0)
    //         insertDLL(c, 0, newInteger(i));
    //     else
    //         insertDLL(c, sizeDLL(c) - 1, newInteger(i));
    // }
    // printf("\n");
    // displayDLL(stdout,c);
    // for (i = 0; i < 10000; i++) {
    //     unionDLL(b,c);
    //     unionDLL(c,b);
    // }
    // printf("\n");
    // displayDLL(stdout,b);
    // printf("\n");
    // displayDLL(stdout,c);
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
    dll *a = newDLL(displayDouble);
    insertDLL(a,0,newReal(86.700000));
    
    // showItems(a);//displayDLL(stdout,a);
    // printf("Size is: %d \n",sizeDLL(a));
    
    insertDLL(a,0,newReal(35.600000));
    
    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,1);
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    insertDLL(a,1,newReal(27.000000));
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
   
    insertDLL(a,0,newReal(26.000000));
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
   
    insertDLL(a,0,newReal(36.100000));
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,1);
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
   
    insertDLL(a,3,newReal(30.200000));

   //  showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,2,newReal(35.900000));
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,3);
   
   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
   
    insertDLL(a,1,newReal(67.300000));

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,3,newReal(42.900000));

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,5);

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
  
    insertDLL(a,2,newReal(37.800000));

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,5,newReal(70.300000));

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,1,newReal(80.600000));

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,4,newReal(70.600000));

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,0);/////////////////////////

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,8,newReal(27.600000));

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,7,newReal(29.300000));

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,5);

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    removeDLL(a,0);

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,5,newReal(67.400000));

   // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,5);

    // showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,8,newReal(8.600000));

    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,1,newReal(84.300000));

    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,8,newReal(99.200000));

    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,4,newReal(68.900000));

    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));

    insertDLL(a,1,newReal(86.400000));

    // showItems(a);
    // printf("Size is: %d \n",sizeDLL(a));
    
    removeDLL(a,7);
    showItems(a);
   // printf("Size is: %d \n",sizeDLL(a));
   //showItems(a);
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
