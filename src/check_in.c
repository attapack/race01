#include "header.h"

void check_in(int argc, char *operand1, char *operation, char *operand2, char *result) {
    if (argc != 5) {
        mx_printstr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]");
        exit(-1);
    }
    if ((*operation != '+' && *operation != '-' && *operation != '*' && *operation != '/' && *operation != '?') || mx_strlen(operation) != 1) {
            mx_printerr("Invalid operation: ");
            mx_printerr(operation);
            mx_printerr("\n");
            exit(-1);
    }
    for (int i = 0; i < mx_strlen(operand1); i++) {
        if (i == 0 && operand1[0] == '-' && mx_strlen(operand1) > 1)
            continue;
        else if (!mx_isdigit(operand1[i]) && operand1[i] != '?') {
            mx_printerr("Invalid operand: ");
            mx_printerr(operand1);
            mx_printerr("\n");
            exit(-1);
        }
    }
    for (int i = 0; i < mx_strlen(operand2); i++) {
        if (i == 0 && operand2[0] == '-' && mx_strlen(operand2) != 1)
            continue;
        else if (!mx_isdigit(operand2[i]) && operand2[i] != '?') {
            mx_printerr("Invalid operand: ");
            mx_printerr(operand2);
            mx_printerr("\n");
            exit(-1);
        }
    }

    for (int i = 0; i < mx_strlen(result); i++) {
        if (i == 0 && result[0] == '-' && mx_strlen(result) != 1)
            continue;
        else if (!mx_isdigit(result[i]) && result[i] != '?') {
            mx_printerr("Invalid result: ");
            mx_printerr(result);
            mx_printerr("\n");
            exit(-1);
        }
    }

}
