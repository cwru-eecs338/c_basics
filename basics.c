#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

void booleans();
void memory_management();
char *stack_cat(const char*, const char*);
char *heap_cat(const char*, const char*);

int main() {
    booleans();
    memory_management();
    return 0;
}

void booleans() {
    // No boolean type
    // 0 is false, any
    // other number is true
    int f = (1 == 0);
    int t = (1 == 1);
    printf("True: %d, False: %d\n", t, f);

    // Useful for error handling, since
    // 0 (false) usually means no errors
    if(chdir("adirectorythatprobablydoesntexist")) {
        perror("Error changing directory");
    }

    // Be Careful!
    int i = 1;
    int j = 2;
    if( i = j ) {
        puts("Is 1 equal to 2???");
    }
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
