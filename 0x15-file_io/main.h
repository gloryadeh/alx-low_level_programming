#ifndef FILE_H
#define FILE_H

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* read and write*/
#include <unistd.h>

/* dprintf and printf */
#include <stdio.h>

/* malloc */
#include <stdlib.h>

#define BUFF_SIZE 1024

/* created functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* helper functions */
unsigned int _strlen(char *s);
#endif
