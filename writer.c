#include <stdio.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    key_t key = 2366;
    int shmid = shmget(key, 1024, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }
    printf("Key of shared memory is %d\n", shmid);

    char *shm = shmat(shmid, NULL, 0);
    if (shm == (char *)-1) {
        perror("shmat");
        exit(1);
    }

    printf("Process is attached at %p in shm\n", shm);

    printf("Enter data: ");
    scanf("%s", shm);

    printf("\nValue written by writer process: %s\n", shm);

    shmdt(shm);

    return 0;
}
