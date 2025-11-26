#include <stdio.h>

int main(void) {
    char filename[100], text[200];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    getchar();
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}

