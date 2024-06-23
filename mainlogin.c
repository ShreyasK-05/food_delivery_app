#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include "loginhead.h"

#define MAX_USERS 100
#define MAX_NAME_LENGTH 100
#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_ADDRESS_LENGTH 200
#define MAX_SECRET_QUESTION_LENGTH 200
#define MAX_SECRET_ANSWER_LENGTH 100

void clearScreen() {
    printf("\033[2J\033[1;1H"); // ANSI escape sequence to clear screen
}

// Function to set text color to Red
void setRedColor() {
    printf("\033[0;31m"); // ANSI escape sequence for red text
}

// Function to set text color to Green
void setGreenColor() {
    printf("\033[0;32m"); // ANSI escape sequence for green text
}

// Function to set text color to Blue
void setBlueColor() {
    printf("\033[0;34m"); // ANSI escape sequence for blue text
}

// Function to set text color to Yellow
void setYellowColor() {
    printf("\033[0;33m"); // ANSI escape sequence for yellow text
}

// Function to set text color to White
void setWhiteColor() {
    printf("\033[0;37m"); // ANSI escape sequence for white text
}

// Function to reset text color to default
void resetColor() {
    printf("\033[0m"); // ANSI escape sequence to reset text color
}
void registerManager();
int loginManager();
void manageMenu();
void addMenuItem();
void modifyMenuItem();
void removeMenuItem();
typedef struct {
    char restaurantName[50];
    char managerName[50];
    char loginId[50];
    char password[50];
    char number[20];
} Manager;

typedef struct {
    char itemName[50];
    int quantity;
} MenuItem;

typedef struct {
    char name[MAX_NAME_LENGTH];
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    char number[11]; // 10 digits + null terminator
    char address[MAX_ADDRESS_LENGTH];
    char pincode[7]; // 6 digits + null terminator
    int loyalty_points;
    char secret_question[MAX_SECRET_QUESTION_LENGTH];
    char secret_answer[MAX_SECRET_ANSWER_LENGTH];
    int ewallet_balance; 
} User;

extern User users[MAX_USERS];
extern int num_users;

void register_user();
int login_user();
void save_user_to_file(User user);
void load_users_from_file();
void forgotten_password();
void save_all_users_to_file();

User users[MAX_USERS];
int num_users = 0;
const char *filename = "users.csv";
char loggedInRestaurant[50] = "";
#define MAX_LINE_LENGTH 1024
#define LOGIN_FILE "managers.csv"
#define MENU_FILE "menuitems4.csv"



void register_user() {
    if (num_users >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    User new_user;
    printf("Enter your name: ");
    fgets(new_user.name, MAX_NAME_LENGTH, stdin);
    new_user.name[strcspn(new_user.name, "\n")] = '\0';

    printf("Enter your username: ");
    fgets(new_user.username, MAX_USERNAME_LENGTH, stdin);
    new_user.username[strcspn(new_user.username, "\n")] = '\0';

    printf("Enter your password: ");
    fgets(new_user.password, MAX_PASSWORD_LENGTH, stdin);
    new_user.password[strcspn(new_user.password, "\n")] = '\0';

    printf("Enter your phone number (10 digits): ");
    fgets(new_user.number, sizeof(new_user.number), stdin);
    new_user.number[strcspn(new_user.number, "\n")] = '\0';

    if (strlen(new_user.number) != 10 || !isdigit(new_user.number[0])) {
        printf("Invalid phone number.\n");
        return;
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter your address: ");
    fgets(new_user.address, MAX_ADDRESS_LENGTH, stdin);
    new_user.address[strcspn(new_user.address, "\n")] = '\0';

    printf("Enter your pincode (6 digits): ");
    fgets(new_user.pincode, sizeof(new_user.pincode), stdin);
    new_user.pincode[strcspn(new_user.pincode, "\n")] = '\0';

    if (strlen(new_user.pincode) != 6 || !isdigit(new_user.pincode[0])) {
        printf("Invalid pincode.\n");
        return;
    }

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter a secret question for password recovery: ");
    fgets(new_user.secret_question, MAX_SECRET_QUESTION_LENGTH, stdin);
    new_user.secret_question[strcspn(new_user.secret_question, "\n")] = '\0';

    printf("Enter the answer to the secret question: ");
    fgets(new_user.secret_answer, MAX_SECRET_ANSWER_LENGTH, stdin);
    new_user.secret_answer[strcspn(new_user.secret_answer, "\n")] = '\0';

    new_user.loyalty_points = 0;
    users[num_users++] = new_user;

    save_user_to_file(new_user);
    printf("Registration successful!\n");
}

int login_user() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter your username: ");
    fgets(username, MAX_USERNAME_LENGTH, stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter your password: ");
    fgets(password, MAX_PASSWORD_LENGTH, stdin);
    password[strcspn(password, "\n")] = '\0';

    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            //printf("Login successful! Welcome, %s.\n", users[i].name);
            return 1;
            
        }
    }
    //printf("Invalid username or password.\n");
    return 0;
}

void save_user_to_file(User user) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Unable to open the file for writing.\n");
        return;
    }

    fprintf(file, "%s,%s,%s,%s,%s,%s,%d,%s,%s\n",
            user.name,
            user.username,
            user.password,
            user.number,
            user.address,
            user.pincode,
            user.loyalty_points,
            user.secret_question,
            user.secret_answer);

    fclose(file);
}

void load_users_from_file() {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("No existing user data found. Starting fresh.\n");
        return;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file) && num_users < MAX_USERS) {
        char *token = strtok(buffer, ",");
        if (token == NULL) continue;

        strcpy(users[num_users].name, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].username, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].password, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].number, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].address, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].pincode, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        users[num_users].loyalty_points = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].secret_question, token);

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        strcpy(users[num_users].secret_answer, token);

        num_users++;
    }

    fclose(file);
}

void forgotten_password() {
    char username[MAX_USERNAME_LENGTH];

    printf("Enter your username: ");
    fgets(username, MAX_USERNAME_LENGTH, stdin);
    username[strcspn(username, "\n")] = '\0';

    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0) {
            char answer[MAX_SECRET_ANSWER_LENGTH];
            printf("Answer the secret question to reset your password: %s\n", users[i].secret_question);
            fgets(answer, MAX_SECRET_ANSWER_LENGTH, stdin);
            answer[strcspn(answer, "\n")] = '\0';

            if (strcmp(users[i].secret_answer, answer) == 0) {
                char new_password[MAX_PASSWORD_LENGTH];
                printf("Enter your new password: ");
                fgets(new_password, MAX_PASSWORD_LENGTH, stdin);
                new_password[strcspn(new_password, "\n")] = '\0';
                strcpy(users[i].password, new_password);
                save_all_users_to_file();
                printf("Password reset successful!\n");
            } else {
                printf("Incorrect answer to the secret question.\n");
            }
            return;
        }
    }
    printf("Username not found.\n");
}

void save_all_users_to_file() {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to open the file for writing.\n");
        return;
    }

    for (int i = 0; i < num_users; i++) {
        fprintf(file, "%s,%s,%s,%s,%s,%s,%d,%s,%s\n",
                users[i].name,
                users[i].username,
                users[i].password,
                users[i].number,
                users[i].address,
                users[i].pincode,
                users[i].loyalty_points,
                users[i].secret_question,
                users[i].secret_answer);
    }

    fclose(file);
}


int main() {
    load_users_from_file();
    int choice3;
    int choice2;
    printf("WELCOME TO FOOD DELIVERY APPLICATION\n");
    printf("Who are you?\n1. User\n2. Restaurant Manager\nEnter your choice: ");
    scanf("%d", &choice2);

    if (choice2 ==1){
    do {
        printf("1. Register\n2. Login\n3. Forgot Password\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice3);
        getchar(); // Consume newline left in the buffer
        //int loginSuccess = login_user();
        switch (choice3) {
            case 1:   
                register_user();
                break;
            case 2:
                if (login_user()) {
                    printf("Login successful. Launching application...\n");       
                    system("app.exe");
                } else {
        printf("Login failed. Please try again.\n");
    }
                break;
            case 3:
                forgotten_password();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice3 != 4);
    }
    else if (choice2 ==2){
        int choice;
    do{
    printf("1. Register\n2. Login\n3. Exit\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline character left by scanf

    switch (choice) {
        case 1:
            registerManager();
            break;
        case 2:
            if (loginManager()) {
                manageMenu();
            }
            break;
        case 3:
                printf("Exiting...\n");
                break;
        default:
            printf("Invalid choice!\n");
    }
    } while (choice != 3);

    }

    return 0;
}
void registerManager() {
    FILE *file = fopen(LOGIN_FILE, "a+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Manager manager;
    printf("Enter Restaurant Name: ");
    fgets(manager.restaurantName, sizeof(manager.restaurantName), stdin);
    manager.restaurantName[strcspn(manager.restaurantName, "\n")] = '\0'; // remove newline

    printf("Enter Manager Name: ");
    fgets(manager.managerName, sizeof(manager.managerName), stdin);
    manager.managerName[strcspn(manager.managerName, "\n")] = '\0'; // remove newline

    printf("Enter Login ID: ");
    fgets(manager.loginId, sizeof(manager.loginId), stdin);
    manager.loginId[strcspn(manager.loginId, "\n")] = '\0'; // remove newline

    printf("Enter Password: ");
    fgets(manager.password, sizeof(manager.password), stdin);
    manager.password[strcspn(manager.password, "\n")] = '\0'; // remove newline

    printf("Enter Contact Number: ");
    fgets(manager.number, sizeof(manager.number), stdin);
    manager.number[strcspn(manager.number, "\n")] = '\0'; // remove newline

    // Check if restaurant already has a manager
    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        Manager temp;
        sscanf(line, "%[^,],%[^,],%[^,],%[^,],%s", temp.restaurantName, temp.managerName, temp.loginId, temp.password, temp.number);
        if (strcmp(temp.restaurantName, manager.restaurantName) == 0) {
            printf("Manager already registered for this restaurant!\n");
            fclose(file);
            return;
        }
    }

    fprintf(file, "%s,%s,%s,%s,%s\n", manager.restaurantName, manager.managerName, manager.loginId, manager.password, manager.number);
    fclose(file);
    printf("Manager registered successfully!\n");
}
void manageMenu() {
    int choice;
    do {
        printf("1. Add Menu Item\n2. Modify Menu Item\n3. Remove Menu Item\n4. Logout\nEnter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline character left by scanf

        switch (choice) {
            case 1:
                addMenuItem();
                break;
            case 2:
                modifyMenuItem();
                break;
            case 3:
                removeMenuItem();
                break;
            case 4:
                printf("Logged out!\n");
                strcpy(loggedInRestaurant, "");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
}
void addMenuItem() {
    FILE *file = fopen(MENU_FILE, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    MenuItem item;
    printf("Enter Item Name: ");
    fgets(item.itemName, sizeof(item.itemName), stdin);
    item.itemName[strcspn(item.itemName, "\n")] = '\0'; // remove newline

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);
    getchar(); // consume newline character left by scanf

    fprintf(file, "%s,%s,%d\n", loggedInRestaurant, item.itemName, item.quantity);
    fclose(file);
    printf("Item added successfully!\n");
}

void modifyMenuItem() {
    FILE *file = fopen(MENU_FILE, "r");
    FILE *tempFile = fopen("temp.csv", "w");
    if (file == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char itemName[50];
    int newQuantity;
    printf("Enter Item Name to modify: ");
    fgets(itemName, sizeof(itemName), stdin);
    itemName[strcspn(itemName, "\n")] = '\0'; // remove newline

    printf("Enter New Quantity: ");
    scanf("%d", &newQuantity);
    getchar(); // consume newline character left by scanf

    char line[MAX_LINE_LENGTH];
    int found = 0;
    while (fgets(line, sizeof(line), file)) {
        char restaurantName[50];
        MenuItem item;
        sscanf(line, "%[^,],%[^,],%d", restaurantName, item.itemName, &item.quantity);
        if (strcmp(restaurantName, loggedInRestaurant) == 0 && strcmp(item.itemName, itemName) == 0) {
            item.quantity = newQuantity;
            found = 1;
        }
        fprintf(tempFile, "%s,%s,%d\n", restaurantName, item.itemName, item.quantity);
    }

    fclose(file);
    fclose(tempFile);
    remove(MENU_FILE);
    rename("temp.csv", MENU_FILE);

    if (found) {
        printf("Item quantity modified successfully!\n");
    } else {
        printf("Item not found!\n");
    }
}

void removeMenuItem() {
    FILE *file = fopen(MENU_FILE, "r");
    FILE *tempFile = fopen("temp.csv", "w");
    if (file == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char itemName[50];
    printf("Enter Item Name to remove: ");
    fgets(itemName, sizeof(itemName), stdin);
    itemName[strcspn(itemName, "\n")] = '\0'; // remove newline

    char line[MAX_LINE_LENGTH];
    int found = 0;
    while (fgets(line, sizeof(line), file)) {
        char restaurantName[50];
        MenuItem item;
        sscanf(line, "%[^,],%[^,],%d", restaurantName, item.itemName, &item.quantity);
        if (strcmp(restaurantName, loggedInRestaurant) == 0 && strcmp(item.itemName, itemName) == 0) {
            found = 1;
        } else {
            fprintf(tempFile, "%s,%s,%d\n", restaurantName, item.itemName, item.quantity);
        }
    }

    fclose(file);
    fclose(tempFile);
    remove(MENU_FILE);
    rename("temp.csv", MENU_FILE);

    if (found) {
        printf("Item removed successfully!\n");
    } else {
        printf("Item not found!\n");
    }
}
int loginManager() {
    FILE *file = fopen(LOGIN_FILE, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    char loginId[50];
    char password[50];
    printf("Enter Login ID: ");
    fgets(loginId, sizeof(loginId), stdin);
    loginId[strcspn(loginId, "\n")] = '\0'; // remove newline

    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // remove newline

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        Manager manager;
        sscanf(line, "%[^,],%[^,],%[^,],%[^,],%s", manager.restaurantName, manager.managerName, manager.loginId, manager.password, manager.number);
        if (strcmp(manager.loginId, loginId) == 0 && strcmp(manager.password, password) == 0) {
            strcpy(loggedInRestaurant, manager.restaurantName);
            printf("Login successful! Welcome, %s\n", manager.managerName);
            fclose(file);
            return 1;
        }
    }

    printf("Invalid login credentials!\n");
    fclose(file);
    return 0;
}