#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* malloc, NULL */
#include <unistd.h> /* read, write */
#include <fcntl.h> /* open */
#include <stdio.h> /* dprintf */

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
