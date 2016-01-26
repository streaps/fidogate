/*
 *  rfc2ftn.h
 *
 *  Prototypes for rfc2ftn testing
 */

#ifndef TEST_RFC2FTN_H
#define TEST_RFC2FTN_H

#include <stdio.h>

extern FILE *rfc2ftn_stdin;

int rfc2ftn_main(int argc, char **argv);
void cvt_user_name(char *s);

#endif
