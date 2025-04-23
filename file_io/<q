#include "main.h"
/**
 * open_file_from - Opens a read-only file.
 * @file: File name.
 * Return: Descriptor or exit with code 98.
 */
int open_file_from(char *file)
{
	int fd = open(file, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - Opens a file for writing (create/truncate).
 * @file: File name.
 * Return: Descriptor or exit with code 99.
 */
int open_file_to(char *file)
{
	int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd);
}

/**
 * close_files - Closes two files and handles errors.
 * @fd_from: Source descriptor.
 * @fd_to: Destination descriptor.
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * copy_first_block - Copies the first block read.
 * @buffer: Read buffer.
 * @fd_from: Source descriptor.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 * @fd_to: Pointer to destination descriptor.
 * Return: Size of first block read.
*/
ssize_t copy_first_block(char *buffer, int fd_from, char *file_from,
			 char *file_to, int *fd_to)
{
	ssize_t bytes_read, bytes_written;

	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		close(fd_from);
		exit(98);
	}

	*fd_to = open_file_to(file_to);

	bytes_written = write(*fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buffer);
		close(fd_from);
		close(*fd_to);
		exit(99);
	}
	return (bytes_read);
}

/**
 * copy_and_close - Copies one file to another, then closes both.
 * @fd_from: Source file descriptor.
 * @file_from: Name of source file.
 * @file_to: Destination file name.
 */
void copy_and_close(int fd_from, char *file_from, char *file_to)
{
	char *buffer = malloc(1024);
	ssize_t bytes_read, bytes_written;
	int fd_to;

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close(fd_from);
		exit(99);
	}

	bytes_read = copy_first_block(buffer, fd_from, file_from, file_to, &fd_to);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	free(buffer);
	close_files(fd_from, fd_to);
}

/**
 * main - Entry point. Copies one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 if successful, error code otherwise.
 */
int main(int argc, char *argv[])
{
	int fd_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);
	copy_and_close(fd_from, argv[1], argv[2]);

	return (0);
}
