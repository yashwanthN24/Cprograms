#include <stdio.h>

void swap(int *m, int *n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}

void sort(int jobs[][20], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (jobs[1][j] < jobs[1][j + 1]) {
                swap(&jobs[0][j], &jobs[0][j + 1]); // Swap job IDs
                swap(&jobs[1][j], &jobs[1][j + 1]); // Swap profits
                swap(&jobs[2][j], &jobs[2][j + 1]); // Swap deadlines
            }
        }
    }
}

int findMaxDeadline(int jobs[][20], int n) {
    int max = jobs[2][0];
    for (int i = 1; i < n; i++) {
        if (jobs[2][i] > max)
            max = jobs[2][i];
    }
    return max;
}

int main() {
    int n, jobs[3][20], maxDeadline , profit = 0 ;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    printf("Enter the job IDs, profits, and deadlines of the jobs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &jobs[0][i], &jobs[1][i], &jobs[2][i]);
    }

    sort(jobs, n);

    maxDeadline = findMaxDeadline(jobs, n);

    int slots[maxDeadline + 1];
    for (int i = 0; i <= maxDeadline; i++) {
        slots[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int deadline = jobs[2][i];
        while (deadline > 0 && slots[deadline] != -1) {
            deadline--;
        }
        if (deadline > 0) {
            slots[deadline] = jobs[0][i];
        }
    }

    printf("Scheduled jobs:\n");
    for (int i = 1; i <= maxDeadline; i++) {
        if (slots[i] != -1) {
            printf("Job %d\n", slots[i]);
            profit = profit + jobs[1][slots[i]-1];
        }
    }
    printf("%d" , profit); 

    return 0;
}
