#include <stdio.h>

#include <unistd.h>



int main()
{
	int x = 1;
	pid_t pid;
	pid = getpid();


	while (x <= 20)
	{

			printf(" %d\n", x);
			printf("%u\n", pid);

			x++;
		}
	


}
