#include "header.h"

bool is_right(int a, char sign, int b, int c) {
    switch (sign) {
            case '+': 
                    return a + b == c;
                    break;
            case '-': 
                    return a - b == c;
                    break;
            case '*': 
                    return a * b == c;
                    break;
            case '/': 
                    if (b != 0)
                        return a / b == c;
                    else false;
                    break;
    }
    return false;
}


