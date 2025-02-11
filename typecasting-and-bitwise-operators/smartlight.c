#include <stdio.h>

int switch_light(int room, int state) {
    if (room < 1 || room > 8) {
        printf("Invalid room number. Please enter a number between 1 and 8.\n");
        return state;
    }
    state ^= (1 << (room - 1));
    return state;
}

void print_state(int state) {
    printf("The light is on in rooms: ");
    int has_lights = 0;
    for (int i = 0; i < 8; i++) {
        if (state & (1 << i)) {
            printf("%d ", i + 1);
            has_lights = 1;
        }
    }
    if (!has_lights) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int state = 0;
    int choice, room;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1-8): ");
                scanf("%d", &room);
                state = switch_light(room, state);
                break;
            case 2:
                print_state(state);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}