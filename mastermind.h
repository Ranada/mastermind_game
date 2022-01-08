#ifndef MASTERMIND_H
#define MASTERMIND_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MACROS */
#define DASH 45
#define T 116
#define C 99
#define DEFAULT_ATTEMPTS "10"
#define TRUE 1
#define FALSE 0

/* Function prototypes */
void intro_message(int* num_attempts);
void c_flag_error_message(void);
void t_flag_error_message(void);
void win_message(char* secret_code);
void game_over_message(char* secret_code);
void attempts_message(int attempts);

#endif //MY_MASTERMIND_H