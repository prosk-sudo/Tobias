// #include <stdio.h>
// #include <string.h>

// int main(int argc, char *argv[]) {

//     for (int i = 1; i < argc; i++) {
//         printf("%s\n", argv[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char *argv[]) {

//     if (strcmp(argv[1], "--same") == 0) {

//         for (int i = 2; i < argc; i++) {
//             printf("%s ", argv[i]);
//         }

//         printf("\n");

//     } else {

//         for (int i = 1; i < argc; i++) {

//             if (strchr(argv[i], ' ') != NULL) {
//                 printf("%s\n", argv[i]);
//             } else {
//                 printf("%s\n", argv[i]);
//             }
//         }
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <libgen.h>

int main(int argc, char *argv[]) {

    char *programName = basename(argv[0]);

    if (strcmp(programName, "echo") == 0) {
    
        for (int i = 1; i < argc; i++) {
    
            printf("%s\n", argv[i]);
        }
    } else if (strcmp(programName, "recho") == 0) {
    
        for (int i = argc - 1; i >= 1; i--) {
    
            printf("%s\n", argv[i]);
        }
    } else {
    
        printf("Program not defined: %s\n", programName);
    
        return 1;
    }

    return 0;
}
