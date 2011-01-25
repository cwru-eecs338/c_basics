#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void memory_management();
char *stack_cat(const char*, const char*);
char *heap_cat(const char*, const char*);

int main() {

    memory_management();

    return 0;
}

void memory_management() {
    /*
     * Memory Management
     */
    char *a = "Hello ";
    char *b = "World!";

    puts("");
    puts("Allocated on the stack:");
    char *bad = stack_cat(a, b);
    puts(bad);
    puts("Again:");
    puts(bad);
    
    puts("");

    puts("Allocated on the heap:");
    char *safe = heap_cat(a, b);
    puts(safe);
    puts("Again:");
    puts(safe);

    // Don't forget to free:
    free(safe);
}

char *stack_cat(const char* a, const char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    char buffer[lenA + lenB + 1];
    sprintf(buffer, "%s%s", a, b);
    return buffer;
}

char *heap_cat(const char* a, const char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    char *buffer = malloc(lenA + lenB + 1);
    sprintf(buffer, "%s%s", a, b);
    return buffer;
}
