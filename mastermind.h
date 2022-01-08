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
int* check_c_flag_argument(char* code, int* continue_game);
int* check_t_flag_argument(char* attempts, int* continue_game);
char* get_random_code();
char* get_code(int argc, char* argv[]);
char* get_attempts(int argc, char* argv[]);
char* get_guess();
void intro_message(int* num_attempts);
void c_flag_error_message(void);
void t_flag_error_message(void);
void win_message(char* secret_code);
void game_over_message(char* secret_code);
void attempts_message(int attempts);

#endif //MASTERMIND_H