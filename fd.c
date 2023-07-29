	#include <stdio.h>   // For standard input/output functions (e.g., printf)
	#include <fcntl.h>   // For file-related functions (e.g., open)
	#include <unistd.h>  // For system calls (e.g., read, close)

	int main()

	{
		int fd;
		char buf[256];
		int i;
		i = 0;
		fd= open("file.txt",O_RDONLY);
		while((i = read(fd,buf,5)))
		{
			buf[(i)] = '\0';
				printf("%s\n",buf);
		}
	}