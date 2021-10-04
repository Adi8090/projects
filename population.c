#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
int year=0;
int start_size ;
    do
    {
 start_size = get_int("start size:: ");
 
}
while (start_size < 1);

int end_size;
do
{
    end_size = get_int("end_size:: ");
}
while(end_size<1 );

int n = start_size;

if(start_size < end_size)
  do
  {
       n=round(n+(n/3)-(n/4));
       year  +=1;
  } 
   while(n < end_size);
   printf("years: %i", year);
   
if(start_size==end_size)
{
    printf("years:0");
}
 
}

