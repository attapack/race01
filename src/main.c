#include "header.h"

int main(int argc, char *argv[]) {
    
    char *operand1 = mx_strtrim(argv[1]);
    char *operation = mx_strtrim(argv[2]);
    char *operand2 = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);
    check_in(argc, operand1, operation, operand2, result);
    print_answers(operand1, operation, operand2, result);
}
