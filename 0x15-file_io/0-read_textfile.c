#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - Read a text file and prints it to POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: the number of letters the function should read and print
 *
 * Return: if it fails or filename is NULL - 0. otherwise the actual
 * number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);

	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);

	return (w);
}
