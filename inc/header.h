#ifndef HF
#define HF

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

bool mx_isdigit(int c);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
double mx_pow_rec(double n, unsigned int pow);
void check_in(int argc, char *operand1, char *operation, char *operand2, char *result);
void mx_printstr(const char *s);
int main(int argc, char *argv[]);
bool is_right(int a, char sign, int b, int c);
void mx_printerr(const char *s);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
void mx_strdel(char **str);
bool mx_isspace(char c);
void mx_str_reverse(char *str);
char *mx_itoa(int number);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
void print_answers(char *operand1, char *operation, char *operand2, char *result);
#endif
