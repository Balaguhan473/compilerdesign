#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i, ic = 0, cc = 0, oc = 0, j;
    char b[300], operators[30], identifiers[30], constants[30];
    printf("Enter the String : ");
    scanf("%[^\n]s", b);

    for (i = 0; i < strlen(b); i++) {
        if (isspace(b[i])) {
            continue;
        } else if (isalpha(b[i])) {
            identifiers[ic] = b[i];
            ic++;
        } else if (isdigit(b[i])) {
            j = 0;
            char temp[10];
            while (isdigit(b[i])) {
                temp[j++] = b[i++];
            }
            temp[j] = '\0';
            i--;
            strcpy(constants, temp);
            cc++;
        } else if (b[i] == '+' || b[i] == '-' || b[i] == '*' || b[i] == '/' || b[i] == '=') {
            operators[oc] = b[i];
            oc++;
        }
    }

    identifiers[ic] = '\0';
    constants[cc] = '\0';
    operators[oc] = '\0';

    printf("Identifiers: %s\n", identifiers);
    printf("Constants: %s\n", constants);
    printf("Operators: %s\n", operators);

    return 0;
}
