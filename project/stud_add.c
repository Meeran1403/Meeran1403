#include "header.c"

void stud_add(st** ptr,int student_count)
{
	st* temp=(st*)malloc(sizeof(st));

	temp->roll=student_count;
	scanf("%s %f",temp->name,&temp->mark );
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		st* last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}
