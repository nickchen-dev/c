#include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * appendfile.c : append the contents of the first file to the second file
 */
int main(int argc, char const *argv[])
{
    int n, infile, outfile;
    char buffer[1024];

    if (argc != 3)
    {
        write(2, "Usage: ./31 file1 file2\n", 32);
        exit(1);
    }

    /**
     * Open the first file (file1) for reading
     */
    if ((infile = open(argv[1], O_RDONLY)) < 0)
    {
        perror(argv[1]);
        exit(1);
    }

    /**
     * Open the second file (file2) for writing
     */
    // if ((outfile = open(argv[2], O_WRONLY | O_APPEND)) < 0)
    if ((outfile = open(argv[2], O_WRONLY)) < 0)
    {
        perror(argv[2]);
        exit(1);
    }

    /**
     * CODE HERE: Copy data from the first file to the second file
     */
    n = sizeof(buffer);
    size_t bytesRead;

    // while ((bytesRead = read(infile, buffer, n)) != 0)
    while ( bytesRead = read(infile, buffer, n) )
    {
        write(outfile, buffer, bytesRead);
        // memset(buffer, 0, n);
    }

    /**
     * Close the two files before exiting
     */
    close(infile);
    close(outfile);
    return 0;
}
