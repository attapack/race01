#include "header.h"

void print_answers(char *operand1, char *operation, char *operand2, char *result) {
    
    if (*operation == '?') {
        print_answers(operand1,"+", operand2, result);
        print_answers(operand1,"-", operand2, result);
        print_answers(operand1,"*", operand2, result);
        print_answers(operand1,"/", operand2, result);
        return;
    } 

    long long int_operand1 = mx_atoi(operand1);
    long long int_operand2 = mx_atoi(operand2);
    long long int_result = mx_atoi(result);
    
    bool minus_operand1 = false;
    bool minus_operand2 = false;
    bool minus_result = false;
    
    if (operand1[0] == '-') {
        minus_operand1 = true;
        operand1++;
        int_operand1 *= -1;
    }
    if (operand2[0] == '-') {
        minus_operand2 = true;
        operand2++;
        int_operand2 *= -1;
    }
    if (result[0] == '-') {
        minus_result = true;
        result++;
        int_result *= -1;
    }

    for (int i = 0; i < mx_pow_rec(10, mx_strlen(operand1)); i++) {
        bool OK_opernd1 = true;
        bool OK_opernd2 = true;
        bool OK_result = true;

        if (i == 0 && int_operand1 > 0)
            i = int_operand1;
        char *char_i = mx_itoa(i);

        for (int j = mx_strlen(operand1) - mx_strlen(char_i), k = 0; j < mx_strlen(operand1); j++, k++) {
            if (char_i[k] != operand1[j] && operand1[j] != '?') {
                OK_opernd1 = false;
                break;
            }
        }
        if (mx_strlen(operand1) - mx_strlen(char_i) != 0) {
        for (int j = 0; j < mx_strlen(operand1) - mx_strlen(char_i); j++) {
            if (operand1[j] != '?' && operand1[j] != '0'){
                OK_opernd1 = false;
                break;
            }
        }
        }
        if (!OK_opernd1)
            continue;
        for (int j = 0; j < mx_pow_rec(10, mx_strlen(operand2)); j++) {
            OK_opernd2 = true;
            if (j == 0 && int_operand2 > 0)
               j = int_operand2;
             char *char_j = mx_itoa(j);
            for (int k = mx_strlen(operand2) - mx_strlen(char_j), l = 0; k < mx_strlen(operand2); k++, l++) {
                if (char_j[l] != operand2[k] && operand2[k] != '?') {
                    OK_opernd2 = false;
                    break;
                }   
            }
            if (mx_strlen(operand2) - mx_strlen(char_j) != 0) {
            for (int k = 0; k < mx_strlen(operand2) - mx_strlen(char_j); k++) {
                if (operand2[k] != '?' && operand2[k] != '0'){
                    OK_opernd2 = false;
                    break;
                }
            }
            }
            if (!OK_opernd2)
                continue;
            for (int k = 0; k < mx_pow_rec(10, mx_strlen(result)); k++) {                
                OK_result = true;
                if (k == 0 && int_result > 0)
                    k = int_result;
                char *char_k = mx_itoa(k);

                for (int l = mx_strlen(result) - mx_strlen(char_k), t = 0; l < mx_strlen(result); l++, t++) {
                    if (char_k[t] != result[l] && result[l] != '?') {
                        OK_result = false;
                        break;
                    }
                }
                if (mx_strlen(result) - mx_strlen(char_k) != 0) {
                for (int l = 0; l < mx_strlen(result) - mx_strlen(char_k); l++) {
                    if (result[l] != '?' && result[l] != '0'){
                    OK_result = false;
                    break;
                    }
                }
                }
                if (!OK_result)
                    continue;
                int a = i,  b = j, c = k;
                if (minus_operand1)
                    a = -a;
                if (minus_operand2)
                    b = -b;
                if (minus_result)
                    c = -c;
                if (is_right(a, *operation, b, c)) {
                mx_printint(a);
                    switch (*operation){
                            case '+': 
                                mx_printstr(" + ");
                                break;
                            case '-': 
                                mx_printstr(" - ");
                                break;
                            case '*': 
                                mx_printstr(" * ");
                                break;
                            case '/': 
                                mx_printstr(" / ");
                                break;        
                                
                    }
                mx_printint(b);
                mx_printstr(" = ");
                mx_printint(c); 
                mx_printstr("\n"); 
                }
            }
        }
    }
}



