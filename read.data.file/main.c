#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ptr[1000];
    char arr[1000];
    FILE *fptr;

    printf("Hello!\n");
    fptr = fopen("1.txt", "r+");
    if (fptr == NULL) {
        printf("File does not exist. Please try again later.\n");
    } else {
        fread(ptr, sizeof(char), 1000, fptr);
        puts(ptr);
        fclose(fptr); // close the file
    }
    return 0;
}
