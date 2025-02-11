#include <stdio.h>
#include "processes.h"

int main() {
    int choice = 0;
    char name[MAX_NAME_LENGTH + 1];
    int id;

    while (choice != 4) {
        printf("\nTask Manager\n");
        printf("1. Create Process\n");
        printf("2. List Processes\n");
        printf("3. Stop Process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter process name: ");
            scanf("%s", name);
            int process_id = createnewprocess(name);
            if (process_id == 0) {
                printf("Cannot create process: maximum processes reached.\n");
            } else {
                printf("Process created with ID: %d\n", process_id);
            }
        } else if (choice == 2) {
            printf("Listing all processes:\n");
            listprocesses();
        } else if (choice == 3) {
            printf("Enter process ID to stop: ");
            scanf("%d", &id);
            stopprocess(id);
            printf("Process stopped.\n");
        } else if (choice == 4) {
            printf("Exiting Task Manager.\n");
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
