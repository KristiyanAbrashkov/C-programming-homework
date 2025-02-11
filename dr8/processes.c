#include "processes.h"

int processescount = 0;
struct Process processes[MAX_PROCESSES];

static int nextprocessid() {
    static int current_id = 1;
    if (current_id > 0) {
        return current_id++;
    }
    return 0;
}

int createnewprocess(char name[MAX_NAME_LENGTH + 1]) {
    if (processescount >= MAX_PROCESSES) {
        return 0; 
    }

    int new_id = nextprocessid();
    if (new_id == 0) {
        return 0; 
    }

    struct Process new_process;
    new_process.id = new_id;
    int i;
    for (i = 0; i < MAX_NAME_LENGTH && name[i] != '\0'; i++) {
        new_process.name[i] = name[i];
    }
    new_process.name[i] = '\0'; 

    processes[processescount] = new_process;
    processescount++;
    return new_id;
}

void stopprocess(int id) {
    int found = 0;

    for (int i = 0; i < processescount; i++) {
        if (processes[i].id == id) {
            found = 1;
            for (int j = i; j < processescount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processescount--;
            break;
        }
    }
}

void listprocesses() {
    for (int i = 0; i < processescount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}