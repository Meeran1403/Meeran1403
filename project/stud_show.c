#include "header.c"

void stud_show(st* ptr)
{
	system("clear");
	char c;
	while(ptr!=0)
	{
		printf("%d	%s	%f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}

}
