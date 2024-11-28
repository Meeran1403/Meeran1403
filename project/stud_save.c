#include "header.c"

void stud_save(st* ptr)
{
	while(ptr!=0)
	{
		FILE* fp=fopen("studen.dat","w");
		fprintf(fp,"%d\t%s\t%f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}

}
