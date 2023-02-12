#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




	typedef struct 
	{

		char name[20];
		int age;
		char gender;
		int i;

	}STUDENT;

 int main(void)
{
	STUDENT st1 = {"James", 60, 'M'};
	STUDENT st2 = {"Joshua", 41, 'M'};
	       
	     
	printf("%d\n", st1.age);
	printf("%c\n", st1.gender);
	printf("%s\n", st1.name);
	 for( int i = 0; i < 5; i++)
	 {
		 printf("age in %dth %d\n", i, st1.age);
	 }



	










	return (0);


}
