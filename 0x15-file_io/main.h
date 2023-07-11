#ifndef IO
#define IO
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, ssize_t letters);

#endif
