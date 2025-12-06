#include <stdio.h>
#include <string.h>
#define MAX_MEMBERS 100
struct library {
    int memberID;
    char name[50];
    char type[10];
    char joiningDate[11];
};
void inputMemberRecords(struct library members[], int *count);
void viewMemberRecords(struct library members[], int count);
void searchMemberByJoiningDate(struct library members[], int count);
int i;

int main() {
    struct library members[MAX_MEMBERS];
    int count = 0;
    int choice;

    do {
        printf("\nLibrary Member Management System\n");
        printf("1. Input member records\n");
        printf("2. View member records\n");
        printf("3. Search for a member by joining date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputMemberRecords(members, &count);
                break;
            case 2:
                viewMemberRecords(members, count);
                break;
            case 3:
                searchMemberByJoiningDate(members, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void inputMemberRecords(struct library members[], int *count) {
    if (*count >= MAX_MEMBERS) {
        printf("Member limit reached. Cannot add more members.\n");
        return;
    }

    printf("Enter Member ID: ");
    scanf("%d", &members[*count].memberID);
    printf("Enter Name: ");
    scanf(" %[^\n]", members[*count].name); // Read string with spaces
    printf("Enter Type (teacher/student): ");
    scanf("%s", members[*count].type);
    printf("Enter Joining Date (YYYY-MM-DD): ");
    scanf("%s", members[*count].joiningDate);

    (*count)++;
    printf("Member record added successfully.\n");
}

void viewMemberRecords(struct library members[], int count) {
    if (count == 0) {
        printf("No member records available.\n");
        return;
    }

    printf("\nMember Records:\n");
    for (i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Type: %s, Joining Date: %s\n", 
               members[i].memberID, members[i].name, members[i].type, members[i].joiningDate);
    }
}

void searchMemberByJoiningDate(struct library members[], int count) {
    if (count == 0) {
        printf("No member records available.\n");
        return;
    }

    char searchDate[11];
    printf("Enter Joining Date to search (YYYY-MM-DD): ");
    scanf("%s", searchDate);

    int found = 0;
    for (i = 0; i < count; i++) {
        if (strcmp(members[i].joiningDate, searchDate) == 0) {
            printf("Found - ID: %d, Name: %s, Type: %s, Joining Date: %s\n", 
                   members[i].memberID, members[i].name, members[i].type, members[i].joiningDate);
            found = 1;
        }
    }

    if (!found) {
        printf("No members found with the joining date %s.\n", searchDate);
    }
}
