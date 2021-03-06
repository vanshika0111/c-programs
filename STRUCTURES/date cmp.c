#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;


void display(date d)
{
    printf("The date is %d/%d/%d\n",d.date,d.month,d.year);
}

int datecmp(date d1, date d2)
{
    //makes the decision on the comparisoin of year
    if(d1.year > d2.year)
    {
         return 1;
    }
    if(d1.year < d2.year)
    {
         return -1;
    }
    
	//makes the decision on the comparisoin of month
    if(d1.month > d2.month)
    {
         return 1;
    }
    if(d1.month < d2.month)
    {
         return -1;
    }
    
	//makes the decision on the comparisoin of date
    if(d1.date > d2.date)
    {
         return 1;
    }
    if(d1.date < d2.date)
    {
         return -1;
    }
    
	//returns o if the dates are same
    return 0;
}



int main()
{
    date d1={11,03,2003};
    date d2={01,11,2002};
    display(d1);
    display(d2);
    int a=datecmp(d1,d2);
    printf("The result of date comparision is %d",a);
    return 0;
}
