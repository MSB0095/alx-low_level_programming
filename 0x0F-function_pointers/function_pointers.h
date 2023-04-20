#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
void (*f)(char *);
void print_name(char *name, void (*f)(char *));

#endif
