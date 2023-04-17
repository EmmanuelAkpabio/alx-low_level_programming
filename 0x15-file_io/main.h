#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* malloc, NULL */
#include <unistd.h> /* read, write */
#include <fcntl.h> /* open */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
