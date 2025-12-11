#include <stdio.h>
#include <stdlib.h>

void menu() {
    int choice;
    char target[100];

    while (1) {
        printf("\n--- System Command Menu ---\n");
        printf("1. Ping\n");
        printf("2. IP Configuration\n");
        printf("3. System Info\n");
        printf("4. WMIC CPU Info\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter hostname or IP to ping: ");
                scanf("%s", target);
                char pingCmd[150];
                snprintf(pingCmd, sizeof(pingCmd), "ping %s", target);
                system(pingCmd);
                break;
            case 2:
                system("ipconfig /all");
                break;
            case 3:
                system("systeminfo");
                break;
            case 4:
                system("wmic cpu get name");
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

int main() {
    menu();
    return 0;
}
