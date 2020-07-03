//Program for searching an element in an unsorted array
/*In this program we will start searching from middle then an incremneter
  will keep on inrementing and a decrementer will keep on decrementing until
  element if founded */


#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int array[15], incrementer, decrementer, check_variable=0;
 int loop_variable, num_of_ele, mid_position, key;
 printf("Enter number of elements of array\n");
 scanf("%d",&num_of_ele);
 printf("Enter elements\n");
 for(loop_variable=0;loop_variable<num_of_ele;loop_variable++)
  scanf("%d",&array[loop_variable]);
 printf("Enter element you want to search\n");
 scanf("%d",&key);
 mid_position = num_of_ele/2;
 incrementer = decrementer = mid_position;

 //Checking if number of elements are odd
 if(num_of_ele%2 == 1)
 {
  for(loop_variable=0;loop_variable<=mid_position;loop_variable++)
  {
   if(array[incrementer] == key)
   {
    printf("Element found at position = %d\n",incrementer+1);
    check_variable++;
    break;
   }
   else if(array[decrementer] == key)
   {
    printf("Element found at position = %d\n",decrementer+1);
    check_variable++;
    break;
   }
   else
   {
    incrementer++;
    decrementer--;
   }
  }
 }


 /*If even number of elements are present then we have to decrease an elemnet
   by 1 just like in binary search*/
 else
 {
  for(loop_variable=0;loop_variable<=mid_position;loop_variable++)
  {
   if(array[incrementer] == key)
   {
    printf("Element found at position = %d\n",incrementer+1);
    check_variable++;
    break;
   }
   else if(array[decrementer] == key)
   {
    printf("Element found at position = %d\n",decrementer+1);
    check_variable++;
    break;
   }
   else
   {
    incrementer++;
    decrementer--;
    if(loop_variable == mid_position-1)
     incrementer--;
   }
  }
 }


 //check_variable will be 1 if element is found
 if(check_variable == 0)
  printf("Sorry the number is not present");
 else
  printf("Thank You!!");

 getch();
}


