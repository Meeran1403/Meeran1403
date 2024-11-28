#include "header.c"

void menu(void);
int main()
{

	st* hptr=0;
	int student_count=1;
	char op;
	system("clear");
	while(1)
	{
		menu();

		scanf(" %c",&op);

		//based on option
		
		if((op=='A')||(op=='a'))  //add_begin;
		{
			system("clear");
			stud_add(&hptr,student_count++);
		}

	/*	else if((op=='D')||(op=='d'))  //delete;
		{
			system("clear");
			stud_add(&hptr,student_count);
		}
	*/
		else if((op=='S')||(op=='s'))  //print;
		{
			system("clear");
			stud_show(hptr);
		}

		else if((op=='V')||(op=='v'))
		{
			stud_save(hptr);
		}

	}//end of while;



} //end of main


//Create fopen for Menu
void menu(void)
{
	FILE* menu=fopen("menu1.txt","r");
        if(menu==NULL)
        {
                perror("Menu doesn't Exist\n");
                return;
        }
        char ch;
        while((ch=fgetc(menu))!=EOF)
                printf("%c",ch);
}
