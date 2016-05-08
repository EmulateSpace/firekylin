/*
 *    include/stdlib.h
 *
 *    Copyright (C) 2016 ximo<ximoos@foxmail.com>
 */

#ifndef _STDLIB_H
#define _STDLIB_H

extern char **environ;

extern void *malloc(long nbytes);
extern void  free(void *p);
extern char *getenv(char *name);
extern void exit(int exit_code);

#endif
