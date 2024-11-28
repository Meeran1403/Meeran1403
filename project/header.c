#include<stdio.h>
#include<stdlib.h>

typedef struct student_record
{
	int roll;
	char name[20];
	float mark;
	struct student_record* next;
}st;

void stud_add(st**,int);  //add student record
void stud_show(st*);	  //to display student record
void stud_save(st*);	  //to save student record
