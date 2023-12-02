#include <stdio.h>
#include <string.h>

int romanToDecimal(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char *roman) {
    int total = 0;
    int prevValue = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--) {
        int value = romanToDecimal(roman[i]);
        if (value < prevValue) {
            total -= value;
        } else {
            total += value;
        }
        prevValue = value;
    }

    return total;
}

void decimalToBinary(int decimal, char *binary) {
    int index = 0;
    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }


    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = binary[i];
        binary[i] = binary[j];
        binary[j] = temp;
    }

 
    binary[index] = '\0';
}

void decimalToHexadecimal(int decimal, char *hexadecimal) {
    sprintf(hexadecimal, "%x", decimal);
}

int main() {
    char roman[13];
    
    scanf("%s", roman);

    int decimalNumber = romanToInt(roman);

    char binaryRepresentation[32];
    char hexadecimalRepresentation[32];

    decimalToBinary(decimalNumber, binaryRepresentation);
    decimalToHexadecimal(decimalNumber, hexadecimalRepresentation);

    printf("%s na base 2: %s\n", roman, binaryRepresentation);
    printf("%s na base 10: %d\n", roman, decimalNumber);
    printf("%s na base 16: %s\n", roman, hexadecimalRepresentation);

    return 0;
}
