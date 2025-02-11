#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define MAX_NAME_LENGTH 30

struct Process {
    int id;
    char name[MAX_NAME_LENGTH + 1];
};

extern struct Process processes[MAX_PROCESSES];
extern int processescount;

int createnewprocess(char name[MAX_NAME_LENGTH + 1]);
void stopprocess(int id);
void listprocesses();

#endif 