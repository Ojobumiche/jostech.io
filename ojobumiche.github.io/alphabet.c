#include <stdio.h>
#include <unistd.h>




int main(void)
{
	char alphabet = 'a';
	pid_t pid;

	pid = getpid();

	while(alphabet <= 'z')
	{
		printf("the alphabet are: %c\n", alphabet);
		printf("pid is %u\n", pid);
	
		alphabet ++;
	}



	return 0;

}
