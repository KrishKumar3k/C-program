#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "teachers.dat"

typedef struct {
    int id;
    char name[50];
    char address[100];
    char subject[50];
} Teacher;
void addTeacher();
void printTeachers();
void editTeacher();
void deleteTeacher();

int main() {
    int choice;

    do {
        printf("\nTeacher Management System\n");
        printf("1. Add Teacher Record\n");
        printf("2. Print All Records\n");
        printf("3. Edit Teacher Record\n");
        printf("4. Delete Teacher Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addTeacher();
                break;
            case 2:
                printTeachers();
                break;
            case 3:
                editTeacher();
                break;
            case 4:
                deleteTeacher();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addTeacher() {
    FILE *file = fopen(FILENAME, "a+b");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    Teacher teacher;

    printf("Enter Teacher ID: ");
    scanf("%d", &teacher.id);
    getchar();

    printf("Enter Teacher Name: ");
    fgets(teacher.name, sizeof(teacher.name), stdin);
    teacher.name[strcspn(teacher.name, "\n")] = 0;

    printf("Enter Teacher Address: ");
    fgets(teacher.address, sizeof(teacher.address), stdin);
    teacher.address[strcspn(teacher.address, "\n")] = 0;

    printf("Enter Teacher Subject: ");
    fgets(teacher.subject, sizeof(teacher.subject), stdin);
    teacher.subject[strcspn(teacher.subject, "\n")] = 0;

    fwrite(&teacher, sizeof(Teacher), 1, file);
    fclose(file);
    printf("Teacher added successfully.\n");
}

void printTeachers() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    Teacher teacher;
    printf("\nTeacher Records:\n");
    while (fread(&teacher, sizeof(Teacher), 1, file)) {
        printf("ID: %d, Name: %s, Address: %s, Subject: %s\n",
               teacher.id, teacher.name, teacher.address, teacher.subject);
    }
    fclose(file);
}

void editTeacher() {
    FILE *file = fopen(FILENAME, "r+b");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int id;
    printf("Enter Teacher ID to edit: ");
    scanf("%d", &id);
    getchar();

    Teacher teacher;
    int found = 0;

    while (fread(&teacher, sizeof(Teacher), 1, file)) {
        if (teacher.id == id) {
            found = 1;

            printf("Enter new Teacher Name: ");
            fgets(teacher.name, sizeof(teacher.name), stdin);
            teacher.name[strcspn(teacher.name, "\n")] = 0;

            printf("Enter new Teacher Address: ");
            fgets(teacher.address, sizeof(teacher.address), stdin);
            teacher.address[strcspn(teacher.address, "\n")] = 0;

            printf("Enter new Teacher Subject: ");
            fgets(teacher.subject, sizeof(teacher.subject), stdin);
            teacher.subject[strcspn(teacher.subject, "\n")] = 0;

            fseek(file,-sizeof(Teacher), SEEK_CUR);
            fwrite(&teacher, sizeof(Teacher), 1, file);
            printf("Teacher record updated.\n");
            break;
        }
    }

    if (!found) {
        printf("Teacher with ID %d not found.\n", id);
    }

    fclose(file);
}

void deleteTeacher() {
    FILE *file = fopen(FILENAME, "rb");
    FILE *tempFile = fopen("temp.dat", "wb");

    if (file == NULL || tempFile == NULL) {
        perror("Error opening file");
        return;
    }

    int id;
    printf("Enter Teacher ID to delete: ");
    scanf("%d", &id);
    getchar();

    Teacher teacher;
    int found = 0;

    while (fread(&teacher, sizeof(Teacher), 1, file)) {
        if (teacher.id != id) {
            fwrite(&teacher, sizeof(Teacher), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(FILENAME);
        rename("temp.dat", FILENAME);
        printf("Teacher record deleted.\n");
    } else {
        remove("temp.dat");
        printf("Teacher with ID %d not found.\n", id);
    }
}
