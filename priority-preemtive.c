#include<stdio.h>

struct Proc {
    char name;
    int BT;
    int WT;
    int TAT;
    int priority;
};

int main() {
    int n, total_waiting_time = 0, total_turnaround_time = 0;
    float avg_waiting_time, avg_turnaround_time;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Proc proc[n];
    for (int i = 0; i < n; i++) {
        proc[i].name = 'A' + i;
        printf("Enter burst time and priority for process %c: ", proc[i].name);
        scanf("%d %d", &proc[i].BT, &proc[i].priority);
    }

    for (int i = 0; i < n; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) {
            if (proc[j].priority > proc[pos].priority)
                pos = j;
        }
        struct Proc temp = proc[i];
        proc[i] = proc[pos];
        proc[pos] = temp;

        proc[i].WT = i == 0 ? 0 : proc[i - 1].TAT;
        proc[i].TAT = proc[i].WT + proc[i].BT;

        total_waiting_time += proc[i].WT;
        total_turnaround_time += proc[i].TAT;
    }

    avg_waiting_time = (float)total_waiting_time / n;
    avg_turnaround_time = (float)total_turnaround_time / n;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%c\t%d\t\t%d\t\t%d\n", proc[i].name, proc[i].BT, proc[i].WT, proc[i].TAT);
    }

    printf("\nAverage Waiting Time: %f\n", avg_waiting_time);
    printf("Average Turnaround Time: %f\n", avg_turnaround_time);

    return 0;
}
