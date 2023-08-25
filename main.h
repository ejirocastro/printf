#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFERSIZE 1024

int _printf(const char *format, ...);
int _strlen(char *s);

#endif
