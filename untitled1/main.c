#include <stdio.h>

int main() {
    FILE *fp;
    char filename=newfile
    printf("Hello, World!\n");
    return 0;
    fp = fopen(fileName, "r");
    if (fp == NULL) {
        printf("Could not open file %s", fileName);
        return 0;
    }
    while (!feof(fp)) {

        if (fscanf(fp, "%s %d %d", str, &latitude, &longitude) == 3) {
            City *temp = createNewCity(str, latitude, longitude);
            st = addListAt(l, l->nelts + 1, temp);
            if (st) {
                fprintf(stderr, "%s\n", errorMessage(st));
                return 0;
            }

        }
    }
}