#include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct record
{
    int userid;
    char username[6];
};

char *usernames[] = {
    "userA",
    "userB",
    "userC",
    "userD"};

int main(int argc, char const *argv[])
{
    int i, outfile;
    struct record eachrec;

    /**
     * Open the file (record file) for writing
     */
    if ((outfile = open("recordfile", O_WRONLY | O_CREAT, 0664)) < 0)
    {
        perror("recordfile");
        exit(1);
    }

    for (i = 3; i >= 0; --i)
    {
        /**
         * Create a new record
         */
        eachrec. userid = i;
        strcpy(eachrec.username, usernames[i]);

        /**
         * Write the record into the file
         */
        lseek(outfile, (long) i * sizeof(struct record), SEEK_SET);
        write(outfile, & eachrec, sizeof(struct record));
    }
    
    close(outfile);
    return 0;
}
