#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#define MAX_LOCATIONS 5
#define MAX_HOTELS 5
#define INF INT_MAX
#define MAX_LINE_LENGTH 600
#define MAX_HOTEL_NAME_LENGTH 600
#define MAX_MENU_ITEMS 600
#define MAXCHAR 600
#define MAXITEMS 600
#define MAX_ITEMS 500
#define MAX_NAME_LENGTH 50
#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_USERS 100
#define MIN_SUPPORT 2
#define MAX_LOCATION_LENGTH 50
#define MAX_DRIVER_NAME_LENGTH 50
#define MAX_STATUS_LENGTH 6
#define MAX_PHONE_NUMBER_LENGTH 15
#define MAX_DRIVERS 100
#define FILENAME2 "users.csv"
#define FILENAME3 "C:\\Users\\NEW\\Desktop\\Food Delivery App\\restaurants_ratings.csv"
#define BUFFER_SIZE 1024
#define MIN_SUPPORT 2  
#define PRICE_THRESHOLD 20
#define MAX_ASSOCIATIONS 100

void restaurant_locations(char grid[36][36]){
    grid[2][3]='H';
    grid[33][28]='H';
    grid[27][31]='H';
    grid[8][8]='H';
    grid[11][13]='H';
    grid[24][24]='H';
    grid[14][19]='H';
    grid[2][16]='H';
    grid[33][8]='H';
    grid[27][23]='H';
    grid[8][2]='H';
    grid[12][26]='H';
    grid[19][11]='H';
    grid[24][14]='H';
    grid[3][8]='H';
    grid[6][34]='H';
    grid[33][21]='H';
    grid[27][14]='H';
    grid[12][23]='H';
    grid[24][26]='H';
    grid[16][1]='H';
    grid[1][13]='H';
    grid[34][1]='H';
    grid[27][7]='H';
    return;
}

void not_restaurant_locations(char grid[36][36]){
    grid[2][3]='|';
    grid[33][28]='|';
    grid[27][31]='|';
    grid[8][8]='|';
    grid[11][13]='|';
    grid[24][24]='|';
    grid[14][19]='|';
    grid[2][16]='|';
    grid[33][8]='|';
    grid[27][23]='|';
    grid[8][2]='|';
    grid[12][26]='|';
    grid[19][11]='|';
    grid[24][14]='|';
    grid[3][8]='|';
    grid[6][34]='|';
    grid[12][23]='|';
    grid[33][21]='|';
    grid[27][14]='|';
    grid[24][26]='|';
    grid[16][1]='|';
    grid[1][13]='|';
    grid[34][1]='|';
    grid[27][7]='|';
    grid[23][18]='|';
    grid[18][33]='|';
    grid[13][7]='|';
    grid[7][21]='|';
    grid[2][22]='|';
    grid[7][13]='|';
    grid[13][3]='|';
    grid[17][9]='|';
    grid[22][31]='|';
    grid[28][18]='|';
    grid[32][26]='|';
    grid[1][27]='|';
    grid[9][19]='|';
    grid[12][31]='|';
    grid[17][24]='|';
    grid[23][6]='|';
    grid[28][4]='|';
    grid[31][11]='|';
    grid[2][32]='|';
    grid[8][29]='|';
    grid[14][16]='|';
    grid[31][19]='|';
    grid[29][34]='|';
    grid[24][4]='|';
    grid[18][26]='|';
}


int restaurant(int x, int y){
    if (x==2 && y==3){
        return 0;
    }
    else if (x==33 && y==28){
        return 0;
    }
    else if (x==27 && y==31){
        return 0;
    }
    else if (x==8 && y==8){
        return 0;
    }
    else if (x==11 && y==13){
        return 0;
    }
    else if (x==24 && y==24){
        return 0;
    }
    else if (x==14 && y==19){
        return 0;
    }
    else if (x==2 && y==16){
        return 0;
    }
    else if (x==33 && y==8){
        return 0;
    }
    else if (x==27 && y==23){
        return 0;
    }
    else if (x==8 && y==2){
        return 0;
    }
    else if (x==12 && y==26){
        return 0;
    }
    else if (x==19 && y==11){
        return 0;
    }
    else if (x==24 && y==14){
        return 0;
    }
    else if (x==3 && y==8){
        return 0;
    }
    else if (x==6 && y==34){
        return 0;
    }
    else if (x==12 && y==23){
        return 0;
    }
    else if (x==33 && y==21){
        return 0;
    }
    else if (x==27 && y==14){
        return 0;
    }
    else if (x==24 && y==26){
        return 0;
    }
    else if (x==16 && y==1){
        return 0;
    }
    else if (x==1 && y==13){
        return 0;
    }
    else if (x==34 && y==1){
        return 0;
    }
    else if (x==27 && y==7){
        return 0;
    }
    else if (x==23 && y==18){
        return 0;
    }
    else if (x==18 && y==33){
        return 0;
    }
    else if (x==13 && y==7){
        return 0;
    }
    else if (x==7 && y==21){
        return 0;
    }
    else if (x==2 && y==22){
        return 0;
    }
    else if (x==7 && y==13){
        return 0;
    }
    else if (x==13 && y==3){
        return 0;
    }
    else if (x==17 && y==9){
        return 0;
    }
    else if (x==22 && y==31){
        return 0;
    }
    else if (x==28 && y==18){
        return 0;
    }
    else if (x==32 && y==26){
        return 0;
    }
    else if (x==1 && y==27){
        return 0;
    }
    else if (x==9 && y==19){
        return 0;
    }
    else if (x==12 && y==31){
        return 0;
    }
    else if (x==17 && y==24){
        return 0;
    }
    else if (x==23 && y==6){
        return 0;
    }
    else if (x==28 && y==4){
        return 0;
    }
    else if (x==31 && y==11){
        return 0;
    }
    else if (x==2 && y==32){
        return 0;
    }
    else if (x==8 && y==29){
        return 0;
    }
    else if (x==14 && y==16){
        return 0;
    }
    else if (x==31 && y==19){
        return 0;
    }
    else if (x==29 && y==34){
        return 0;
    }
    else if (x==24 && y==4){
        return 0;
    }
    else if (x==18 && y==26){
        return 0;
    }
    return 1;
}

int road(int x,int y){
    if (x%5==0 || y%5==0){
        return 0;
    }
    else{
        return 1;
    }
}


void update_review(const char* restaurant_name, double new_rating) {
    FILE *file = fopen(FILENAME3, "r+");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }

    char buffer[BUFFER_SIZE];
    long pos = 0;  // To keep track of the position in the file
    int found = 0;

    while (fgets(buffer, BUFFER_SIZE, file)) {
        char name[100];
        double avg_rating;
        int num_reviews;
        long line_start = pos;  // Starting position of the current line

        // Parse the line
        sscanf(buffer, "%99[^,],%lf,%d", name, &avg_rating, &num_reviews);

        // Calculate the position right after reading the line
        pos = ftell(file);

        // Check if it's the restaurant we're looking for
        if (strcasecmp(name, restaurant_name) == 0) {
            num_reviews++;
            avg_rating = ((avg_rating * (num_reviews - 1)) + new_rating) / num_reviews;
            found = 1;

            // Move file pointer back to the start of the current line
            fseek(file, line_start, SEEK_SET);
            fprintf(file, "%s,%.1f,%d\n", name, avg_rating, num_reviews);

            // Padding in case the new line is shorter than the old
            long new_pos = ftell(file);
            int padding = pos - new_pos;
            for(int i = 0; i < padding; i++) {
                fputc(' ', file);
            }
            break;
        }
    }

    if (!found) {
        // If no matching restaurant found, add a new entry
        fprintf(file, "%s,%.1f,1\n", restaurant_name, new_rating);
    }

    fclose(file);
    if (found) {
        printf("Updated \"%s\" successfully.\n", restaurant_name);
    } else {
        printf("Added \"%s\" successfully.\n", restaurant_name);
    }
}


typedef struct {
    char location[MAX_LOCATION_LENGTH];
    char name[MAX_DRIVER_NAME_LENGTH];
    char status[MAX_STATUS_LENGTH];
    char phone_number[MAX_PHONE_NUMBER_LENGTH];
    int x;
    int y;
    int rating;
} Driver;

//void assignBestDriver(char *location);

// Structure to store hotel information
struct Hotel {
    char name[MAX_HOTEL_NAME_LENGTH];
    float rating;
};

// Structure to store menu item details
typedef struct MenuItem {
    char name[MAXCHAR];
    float price;
    char type[MAXCHAR];
    char restaurant[MAXCHAR];
    int quantity;
    float rating;
} MenuItem;

typedef struct {
    int items[2];
    int count;
} Itemset;

typedef struct {
    char restaurant[MAX_NAME_LENGTH];
    int item_id;
    char item_name[MAX_NAME_LENGTH];
    float price;
    char veg_non_veg[8]; // Assuming "Veg" or "Non-Veg"
    int quantity;
    float rating;
} MenuItem2;

// Define a structure to represent the cart
typedef struct {
    MenuItem2 items[MAX_ITEMS];
    int quantity[MAX_ITEMS];
    int num_items;
    float total;
} Cart; 

#define MAX_SECRET_QUESTION_LENGTH 200
#define MAX_SECRET_ANSWER_LENGTH 100
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
} User;

float ewallet_balance = 5000.0;
User users[MAX_USERS];
int num_users = 0;

typedef struct {
    char items[MAX_ITEMS][MAX_NAME_LENGTH];
    int count;
} ItemSet;

ItemSet frequent_itemsets[MAX_ITEMS];
int num_frequent_itemsets = 0;

// Function to initialize the cart
void initialize_cart(Cart *cart) {
    cart->num_items = 0;
    cart->total = 0;
}

void find_frequent_itemsets(Cart *cart) {
    // Initialize support counts
    int support_count[MAX_ITEMS] = {0};

    // Count support for each item
    for (int i = 0; i < cart->num_items; i++) {
        for (int j = 0; j < num_frequent_itemsets; j++) {
            if (strcmp(cart->items[i].item_name, frequent_itemsets[j].items[0]) == 0) {
                support_count[j]++;
            }
        }
    }

    // Filter item sets based on minimum support
    for (int i = 0; i < num_frequent_itemsets; i++) {
        if (support_count[i] >= MIN_SUPPORT) {
            // Print recommended items
            for (int j = 0; j < frequent_itemsets[i].count; j++) {
                printf("Recommended item: %s\n", frequent_itemsets[i].items[j]);
            }
        }
    }
}


int userCount = 0;
void load_users_from_file() {
    FILE *file = fopen("users.csv", "r");
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
        num_users++;
    }

    fclose(file);
}

void signup() {
    printf("Enter your name: ");
    getchar(); // Consume the newline character left in the buffer
    fgets(users[userCount].name, sizeof(users[userCount].name), stdin);
    users[userCount].name[strcspn(users[userCount].name, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter your username: ");
    scanf("%s", users[userCount].username);
    printf("Enter your password: ");
    scanf("%s", users[userCount].password);
    
    FILE *file = fopen(FILENAME2, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    fprintf(file, "%s,%s,%s\n", users[userCount].name, users[userCount].username, users[userCount].password);
    fclose(file);
    
    printf("Signup successful!\n");
    userCount++;
}
int login(char *username, char *password) {
    for (int i = 0; i < userCount; i++) {
        // Trim leading and trailing whitespace from the username read from file
        char trimmedUsername[MAX_USERNAME_LENGTH];
        int k = 0, l = strlen(users[i].username) - 1;
        while (isspace((unsigned char)users[i].username[k]))
            k++;
        while (l >= 0 && isspace((unsigned char)users[i].username[l]))
            l--;
        strncpy(trimmedUsername, &users[i].username[k], l - k + 1);
        trimmedUsername[l - k + 1] = '\0';

        // Trim leading and trailing whitespace from the input username
        k = 0, l = strlen(username) - 1;
        while (isspace((unsigned char)username[k]))
            k++;
        while (l >= 0 && isspace((unsigned char)username[l]))
            l--;
        char trimmedInputUsername[MAX_USERNAME_LENGTH];
        strncpy(trimmedInputUsername, &username[k], l - k + 1);
        trimmedInputUsername[l - k + 1] = '\0';
        
        // Trim leading and trailing whitespace from the password read from file
        char trimmedPassword[MAX_PASSWORD_LENGTH];
        k = 0, l = strlen(users[i].password) - 1;
        while (isspace((unsigned char)users[i].password[k]))
            k++;
        while (l >= 0 && isspace((unsigned char)users[i].password[l]))
            l--;
        strncpy(trimmedPassword, &users[i].password[k], l - k + 1);
        trimmedPassword[l - k + 1] = '\0';

        // Trim leading and trailing whitespace from the input password
        k = 0, l = strlen(password) - 1;
        while (isspace((unsigned char)password[k]))
            k++;
        while (l >= 0 && isspace((unsigned char)password[l]))
            l--;
        char trimmedInputPassword[MAX_PASSWORD_LENGTH];
        strncpy(trimmedInputPassword, &password[k], l - k + 1);
        trimmedInputPassword[l - k + 1] = '\0';
        
        if (strcmp(trimmedUsername, trimmedInputUsername) == 0 && strcmp(trimmedPassword, trimmedInputPassword) == 0) {
            return 1; // Login successful
        }
    }
    return 0; // Login unsuccessful
}

void readCSV(Driver drivers[]) {
    FILE *fp = fopen("driversnew2.csv", "r");
    if (!fp) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[256];
    int count = 0;
    
    fgets(line, sizeof(line), fp); // Skip header line

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%[^,],%ld,%d,%d,%[^,],%f", drivers[count].name, &drivers[count].phone_number, 
               &drivers[count].x, &drivers[count].y, drivers[count].status, &drivers[count].rating);
        count++;
    }

    fclose(fp);
}

#define DRIVER_COUNT 20
void writeCSV(Driver drivers[]) {
    FILE *fp = fopen("driversnew2.csv", "w");
    if (!fp) {
        printf("Failed to open the file for writing.\n");
        return;
    }

    fprintf(fp, "Name,Phone,CoordinateX,CoordinateY,Status,Rating\n");
    
    for (int i = 0; i < DRIVER_COUNT; i++) {
        fprintf(fp, "%s,%ld,%d,%d,%s,%.2f\n", drivers[i].name, drivers[i].phone_number, drivers[i].x, drivers[i].y, drivers[i].status, drivers[i].rating);
    }

    fclose(fp);
}
double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void loyalty_points(Cart *cart, User users[], char username[MAX_USERNAME_LENGTH]) {
    for(int i=0; i<MAX_USERS; i++) {
        if (strcpy(users[i].username, username)==0) {
            users[i].loyalty_points+=cart->total*3;
        }
    }
}

void save_user_to_file(User user[]) {
    FILE *file = fopen("users.csv", "a");
    if (file == NULL) {
        printf("Error: Unable to open the file for writing.\n");
        return;
    }
    for(int i=0; i<num_users; i++) {
        fprintf(file, "%s,%s,%s,%s,%s,%s,%d\n",
            user[i].name,
            user[i].username,
            user[i].password,
            user[i].number,
            user[i].address,
            user[i].pincode,
            user[i].loyalty_points);
    }

    fclose(file);
}

void addToCart(Cart *cart, MenuItem2 menu[], int menu_item_id, int quantity) {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (menu[i].item_id == menu_item_id) {
            cart->items[cart->num_items] = menu[i];
            cart->quantity[cart->num_items] = quantity;
            cart->total += menu[i].price * quantity;
            cart->num_items++;
            return;
        }
    }
    printf("Menu item ID %d not found.\n", menu_item_id);
}



void add_item_to_cart(Cart *cart, MenuItem2 item, MenuItem2 fullmenu[], int menu_size, int quantity) {
    int i;
    if (quantity <= item.quantity) {
        cart->items[cart->num_items] = item;
        cart->quantity[cart->num_items] = quantity;
        cart->num_items++;
        cart->total += item.price * quantity;
        printf("Items added successfully.\n\n");
        for (i = 0; i < menu_size; i++) {
            if (fullmenu[i].item_id == item.item_id) {
                fullmenu[i].quantity -= quantity;
            }
        }
    } else {
        if (item.quantity == 0) {
            printf("No stock available of this item.\n");
        } else {
            printf("Only %d quantity left.\n", item.quantity);
        }
    }
}


void loadMenuItems(const char *filename, MenuItem2 menu[], int *num_menu_items) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Unable to open file %s\n", filename);
        exit(1);
    }

    char line[256];
    fgets(line, sizeof(line), file);  // Skip the header line

    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%*[^,],%d,%[^,],%f,%[^,],%d,%f,%[^,\n]",
               &menu[*num_menu_items].item_id,
               menu[*num_menu_items].item_name,
               &menu[*num_menu_items].price,
               menu[*num_menu_items].veg_non_veg,
               &menu[*num_menu_items].quantity,
               &menu[*num_menu_items].rating);
               
        (*num_menu_items)++;
    }

    fclose(file);
}

void remove_item_from_cart(Cart *cart, int item_id, MenuItem2 fullmenu[], int menu_size) {
    int i, j, found = 0;
    for (i = 0; i < cart->num_items; i++) {
        if (cart->items[i].item_id == item_id) {
            // Adjust the total price
            cart->total -= cart->items[i].price * cart->quantity[i];
            for (j = 0; j < menu_size; j++) {
                if (fullmenu[j].item_id == item_id) {
                    fullmenu[j].quantity += cart->quantity[i];
                }
            }
            // Shift remaining items to the left
            for (j = i; j < cart->num_items - 1; j++) {
                cart->items[j] = cart->items[j + 1];
                cart->quantity[j] = cart->quantity[j + 1];
            }
            cart->num_items--;
            found = 1;
            printf("Item removed successfully.\n\n");
            break;
        }
    }
    if (!found) {
        printf("Item with ID %d not found in cart.\n", item_id);
    }
}

void modify_quantity(Cart *cart, int item_id, int new_quantity, MenuItem2 fullmenu[], int menu_size) {
    int found = 0;
    for (int i = 0; i < cart->num_items; i++) {
        if (cart->items[i].item_id == item_id) {
            int current_quantity = cart->quantity[i];
            cart->total -= cart->items[i].price * current_quantity;
            cart->total += cart->items[i].price * new_quantity;
            for (int j = 0; j < menu_size; j++) {
                if (fullmenu[j].item_id == item_id) {
                    fullmenu[j].quantity += current_quantity;
                    fullmenu[j].quantity -= new_quantity;
                }
            }
            cart->quantity[i] = new_quantity;
            found = 1;
            printf("Quantity has been modified.\n\n");
            break;
        }
    }
    if (!found) {
        printf("Item with ID %d not found in cart.\n", item_id);
    }
}


void payment(Cart *cart) {
    double total_cost = 100.0;

    // Get current time
    time_t current_time;
    struct tm *local_time;

    time(&current_time);
    local_time = localtime(&current_time);

    int current_hour = local_time->tm_hour;
    extern int bal;
    // Define discount based on time interval
    double discount;
    if (current_hour >= 0 && current_hour < 6) {
        discount = 0.2;  // 20% discount
    } else if (current_hour >= 6 && current_hour < 12) {
        discount = 0.15;  // 15% discount
    } else if (current_hour >= 12 && current_hour < 18) {
        discount = 0.1;  // 10% discount
    } else {
        discount = 0.05;  // 5% discount
    }

    // Print the table headers and rows
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    printf("| %-6s | %-39s | %-9s | %-19s | %-9s | %-7s |\n", "Item ID", "Item", "Price", "Type", "Quantity", "Rating");
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    for (int i = 0; i < cart->num_items; i++) {
        printf("| %-6d | %-39s | %-9.2f | %-19s | %-9d | %-7.2f |\n", cart->items[i].item_id, cart->items[i].item_name, cart->items[i].price, cart->items[i].veg_non_veg, cart->quantity[i], cart->items[i].rating);
    }
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");

   printf("\n+-----------------------+\n");
    printf("| %-21s |\n", "Total Cost");
    printf("+-----------------------+\n");
    printf("| Total Cost: %-9.2f |\n", cart->total);
    printf("+-----------------------+\n");

    // Print the discount offers table
    printf("\n+-----------------------------------------------------------+\n");
    printf("| %-57s |\n", "Discount Offers");
    printf("+-----------------------------------------------------------+\n");
    printf("| 20%% discount from 12AM to 6AM                             |\n");
    printf("| 15%% discount from 6AM to 12PM                             |\n");
    printf("| 10%% discount from 12PM to 6PM                             |\n");
    printf("| 5%% discount from 6PM to 12AM                              |\n");
    printf("+-----------------------------------------------------------+\n");
    printf("| Discount at this time: %-28.2f%% |\n", discount * 100);
    printf("+-----------------------------------------------------------+\n");

    // Calculate discounted price, tax, and total payable amount
    double discounted_price = cart->total * (1 - discount);
    double tax = 0.18 * discounted_price;
    int loyalty_points = discounted_price/10;
    int discount_using_lp = discounted_price/100;
    double total_payable_with_lp = discounted_price - discount_using_lp;
    double total_payable_without_lp = discounted_price + tax;
    char lpyn[2];
    printf("You have gained %d loyalty points \n", loyalty_points);
    printf("Do you want to redeem loyalty points(y/n)? ");
    scanf("%s", lpyn);
    if (strcmp(lpyn, "y") == 0){
        printf("The total amount payable after redeeming loyalty points is %f", total_payable_with_lp);
        ewallet_balance -= total_payable_with_lp;
        
    }
    else{
        printf("The total amount payable is %d", total_payable_without_lp);
        ewallet_balance -= total_payable_without_lp;
    }

    // Print the payment details table
    printf("\n+----------------------------+\n");
    printf("| %-26s |\n", "Payment Details");
    printf("+----------------------------+\n");
    printf("| Discounted Price: %-8.2f |\n", discounted_price);
    printf("| Tax: %-20.2f |\n", tax);
    printf("| Total Payable: %-11.2f |\n", total_payable_without_lp);
    printf("+----------------------------+\n");

    // Update and print e-wallet balance
    
    printf("\n+-------------------------------+\n");
    printf("| %-29s |\n", "E-Wallet Balance");
    printf("+-------------------------------+\n");
    printf("| Remaining Balance: %-10.2f |\n", ewallet_balance);
    printf("+-------------------------------+\n");

    // If the e-wallet balance is insufficient, prompt the user to reload
    if (ewallet_balance < 0) {
        float reload_amount;
        printf("Your e-wallet balance is insufficient for this order.\n");
        printf("Please reload your e-wallet with the required amount: ");
        scanf("%f", &reload_amount);
        ewallet_balance += reload_amount;
        printf("Amount successfully reloaded. Your new e-wallet balance: %.2f rupees\n", ewallet_balance);
    }
}

void display_cart(Cart *cart) {
    int gst;
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+-----------\n");
    printf("|%-7s |%-40s |%-10s |%-20s |%-10s |%-9s|%-10s |\n", "Item ID", "Item", "Price", "Type", "Quantity", "Rating", "Total");
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+-----------\n");
    for (int i = 0; i < cart->num_items; i++) {
        printf("|%-7d |%-40s |%-10.2f |%-20s |%-10d |%-9.2f|%-10.2f |\n", cart->items[i].item_id, cart->items[i].item_name, cart->items[i].price, cart->items[i].veg_non_veg, cart->quantity[i], cart->items[i].rating, cart->items[i].price*cart->quantity[i]);
    }
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+-----------\n");
    printf("Your total cost is %.2f rupees\n", cart->total);
    
}

void findAssociations(Cart *cart, MenuItem2 menu[], int num_menu_items) {
    // Simple example of associations - items with similar ratings
    printf("Associated Items:\n");
    for (int i = 0; i < cart->num_items; i++) {
        float rating = cart->items[i].rating;
        float price = cart->items[i].price;
        printf("Items associated with %s:\n", cart->items[i].item_name);
        int count = 0;
        for (int j = 0; j < num_menu_items && count < 2; j++) {
            if (menu[j].price >= price - 50 && menu[j].price <= price + 50 && menu[j].item_id != cart->items[i].item_id) {
                printf(" - (Item ID: %d) %s (Rating: %.1f)\n", menu[j].item_id, menu[j].item_name, menu[j].rating);
                count++;
            }
        }
    }
}


/*
int menufromfile(char *search_restaurant, MenuItem2 menu[], int *menu_size) {
    FILE *file = fopen("C:\\Users\\NEW\\Desktop\\menuitems4.csv", "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    int count = 0;

    // Assuming the first line contains headers and needs to be skipped
    char buffer[1024];
    fgets(buffer, sizeof(buffer), file);

    while (fgets(buffer, sizeof(buffer), file)) {
        // Tokenize the line using strtok
        char *token = strtok(buffer, ",");
        if (token == NULL) {
            continue; // Skip empty lines
        }

        // Check if the restaurant name matches
        if (strcasecmp(token, search_restaurant) == 0) {
            strcpy(menu[count].restaurant, token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].item_id = atoi(token);

            // If the restaurant name matches, extract the food item name
            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            // Copy the food item name to the items array
            strcpy(menu[count].item_name, token);

            // Extract the price and convert it to float
            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].price = atof(token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            // Copy the food item name to the items array
            strcpy(menu[count].veg_non_veg, token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].quantity = atoi(token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].rating = atof(token);

            // Increment the item count
            count++;
        }
    }

    fclose(file);
    *menu_size = count;

    if (count == 0) {
        printf("No items found for the restaurant: %s\n", search_restaurant);
        return 0;
    }

    // Printing the menu items
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    printf("|%-7s |%-40s |%-10s |%-20s |%-10s |%-9s|\n", "Item ID", "Item", "Price", "Type", "Quantity", "Rating");
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    for (int i = 0; i < count; i++) {
        printf("|%-7d |%-40s |%-10.2f |%-20s |%-10d |%-9.2f|\n", menu[i].item_id, menu[i].item_name, menu[i].price, menu[i].veg_non_veg, menu[i].quantity, menu[i].rating);
    }
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");

    return 0;
}
*/


int menufromfile(char *search_restaurant, MenuItem2 menu[], int *menu_size) {
    FILE *file = fopen("C:\\Users\\NEW\\Desktop\\menuitems4.csv", "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    int count = 0;

    // Assuming the first line contains headers and needs to be skipped
    char buffer[1024];
    fgets(buffer, sizeof(buffer), file);

    while (fgets(buffer, sizeof(buffer), file)) {
        // Tokenize the line using strtok
        char *token = strtok(buffer, ",");
        if (token == NULL) {
            continue; // Skip empty lines
        }

        // Check if the restaurant name matches
        if (strcasecmp(token, search_restaurant) == 0) {
            strcpy(menu[count].restaurant, token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].item_id = atoi(token);

            // If the restaurant name matches, extract the food item name
            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            // Copy the food item name to the items array
            strcpy(menu[count].item_name, token);

            // Extract the price and convert it to float
            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].price = atof(token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            // Copy the food item name to the items array
            strcpy(menu[count].veg_non_veg, token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].quantity = atoi(token);

            token = strtok(NULL, ",");
            if (token == NULL) {
                continue; // Skip lines with missing data
            }
            menu[count].rating = atof(token);

            // Increment the item count
            count++;
        }
    }

    fclose(file);
    *menu_size = count;

    if (count == 0) {
        printf("No items found for the restaurant: %s\n", search_restaurant);
        return 0;
    }

    int choice;
    printf("Do you want to order (1) Veg or (2) Non-Veg? ");
    scanf("%d", &choice);

    // Validate choice
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter (1) for Veg or (2) for Non-Veg: ");
        scanf("%d", &choice);
    }

    char filter_type[10];
    if (choice == 1) {
        strcpy(filter_type, "Veg");
    } else {
        strcpy(filter_type, "Non-Veg");
    }

    // Printing the filtered menu items
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    printf("|%-7s |%-40s |%-10s |%-20s |%-10s |%-9s|\n", "Item ID", "Item", "Price", "Type", "Quantity", "Rating");
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");
    for (int i = 0; i < count; i++) {
        if (strcasecmp(menu[i].veg_non_veg, filter_type) == 0) {
            printf("|%-7d |%-40s |%-10.2f |%-20s |%-10d |%-9.2f|\n", menu[i].item_id, menu[i].item_name, menu[i].price, menu[i].veg_non_veg, menu[i].quantity, menu[i].rating);
        }
    }
    printf("+--------+-----------------------------------------+-----------+---------------------+-----------+---------+\n");

    return 0;
}


void write_menu_to_file(const char *filename, MenuItem2 menu[], int menu_size) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to open the file for writing.\n");
        return;
    }

    // Write the header
    fprintf(file, "Restaurant,ItemID,ItemName,Price,Type,Quantity,Rating\n");

    for (int i = 0; i < menu_size; i++) {
        fprintf(file, "%s,%d,%s,%.2f,%s,%d,%.2f\n",
                menu[i].restaurant,
                menu[i].item_id,
                menu[i].item_name,
                menu[i].price,
                menu[i].veg_non_veg,
                menu[i].quantity,
                menu[i].rating);
    }

    fclose(file);
    //printf("Menu successfully written to %s\n", filename);
}


void trim(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (isspace((unsigned char)str[start])) start++;
    while ((end > start) && isspace((unsigned char)str[end])) end--;
    str[end + 1] = '\0';
    strcpy(str, str + start);
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


// Graph representation using adjacency matrix
int graph[MAX_LOCATIONS][MAX_HOTELS][MAX_HOTELS] = {
    // Distance from each location to nearby hotels
    // Location 0: Medavakkam
    {
        {3, 4, 6, 9, 11},  // Distance from Medavakkam to each hotel
        {2, 0, 1, 5, 6},  // Distance from hotel 1 to other hotels
        {3, 1, 0, 3, 4},  // Distance from hotel 2 to other hotels
        {4, 5, 3, 0, 2},  // Distance from hotel 3 to other hotels
        {5, 6, 4, 2, 0}   // Distance from hotel 4 to other hotels
    },
    // Location 1: Besant Nagar
    {
        {0, 1, 2, 3, 4},  // Distance from Besant Nagar to each hotel
        {1, 0, 3, 5, 7},  // Distance from hotel 1 to other hotels
        {2, 3, 0, 2, 6},  // Distance from hotel 2 to other hotels
        {3, 5, 2, 0, 4},  // Distance from hotel 3 to other hotels
        {4, 7, 6, 4, 0}   // Distance from hotel 4 to other hotels
    },
    // Location 2: T Nagar
    {
        {0, 1, 2, 3, 4},  // Distance from T Nagar to each hotel
        {1, 0, 3, 5, 7},  // Distance from hotel 1 to other hotels
        {2, 3, 0, 2, 6},  // Distance from hotel 2 to other hotels
        {3, 5, 2, 0, 4},  // Distance from hotel 3 to other hotels
        {4, 7, 6, 4, 0}   // Distance from hotel 4 to other hotels
    },
    // Location 3: Anna Nagar
    {
        {0, 1, 2, 3, 4},  // Distance from Anna Nagar to each hotel
        {1, 0, 3, 5, 7},  // Distance from hotel 1 to other hotels
        {2, 3, 0, 2, 6},  // Distance from hotel 2 to other hotels
        {3, 5, 2, 0, 4},  // Distance from hotel 3 to other hotels
        {4, 7, 6, 4, 0}   // Distance from hotel 4 to other hotels
    },
    // Location 4: Thiruporur
    {
        {0, 1, 2, 3, 4},  // Distance from Thiruporur to each hotel
        {1, 0, 3, 5, 7},  // Distance from hotel 1 to other hotels
        {2, 3, 0, 2, 6},  // Distance from hotel 2 to other hotels
        {3, 5, 2, 0, 4},  // Distance from hotel 3 to other hotels
        {4, 7, 6, 4, 0}   // Distance from hotel 4 to other hotels
    }
};

// Function to find vertex with minimum distance value
int minDistance(int dist[], int visited[], int n) {
    int min = INF, min_index;

    for (int v = 0; v < n; v++) {
        if (visited[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to print the sorted hotels by distance from the selected location
void printSortedHotels(int dist[], float ratings[], int n, struct Hotel hotels[]) {
    /*printf("Hotels nearby (sorted by combined score):\n");
    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Distance: %d km, Rating: %.1f\n", hotels[i].name, dist[i], ratings[i]);
    }*/

    printf("Hotels nearby (sorted by combined score):\n");
    printf("-------------------------------------------------------------\n");
    printf("| %-30s | %-10s | %-7s |\n", "Hotel Name", "Distance (km)", "Rating");
    printf("-------------------------------------------------------------\n");

    // Print the table rows
    for (int i = 0; i < n; i++) {
        printf("| %-30s | %-10d | %-7.1f |\n", hotels[i].name, dist[i], ratings[i]);
    }

    // Print the table footer
    printf("-------------------------------------------------------------\n");
}

// Function to calculate the combined score for each hotel based on distance and rating
void calculateCombinedScore(int dist[], float ratings[], float combinedScores[], int n) {
    for (int i = 0; i < n; i++) {
        // Normalize distance and rating values (distance is already small, so no need to scale)
        float normalizedDistance = (float)dist[i];
        float normalizedRating = ratings[i] / 10.0; // Normalize rating to range [0, 1]

        // Calculate combined score using a weighted sum (adjust weights as needed)
        combinedScores[i] = (0.7 * normalizedRating) + (0.3 * (1 / normalizedDistance));
    }
}

int readMenuData(const char *menuFile, struct MenuItem menuItems[]) {
    FILE *fp = fopen(menuFile, "r");
    if (fp == NULL) {
        printf("Error opening file: %s\n", menuFile);
        return 0;
    }

    // Skip the header line (if any)
    fscanf(fp, "%*[^\n]"); // Skip to the end of the line
    fgetc(fp); // Skip the newline character

    int count = 0;
    while (fscanf(fp, "%[^,],%f,%[^,],%[^,],%d,%f\n", menuItems[count].name, &menuItems[count].price, menuItems[count].type, menuItems[count].restaurant, &menuItems[count].quantity, &menuItems[count].rating) == 6 && count < MAX_MENU_ITEMS) {
        count++;
    }

    fclose(fp);
    return count;
}



// Function to sort menu items based on ratings in descending order
void sortMenuItems(struct MenuItem menuItems[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (menuItems[j].rating < menuItems[j + 1].rating) {
                // Swap menu items
                struct MenuItem temp = menuItems[j];
                menuItems[j] = menuItems[j + 1];
                menuItems[j + 1] = temp;
            }
        }
    }
}

// Function to print menu items
void printMenuItems(struct MenuItem menuItems[], int n) {
    printf("Menu Items:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Price: %.2f, Type: %s, Quantity: %d, Rating: %.1f\n",
               menuItems[i].name, menuItems[i].price, menuItems[i].type,
               menuItems[i].quantity, menuItems[i].rating);
    }
}

// Function to implement Dijkstra's algorithm
void dijkstra(int location, int src, struct Hotel hotels[], int n) {
    int dist[MAX_HOTELS];  // Array to store shortest distances from source
    int visited[MAX_HOTELS];  // Array to track visited vertices

    // Initialize arrays
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;  // Distance from location to itself is 0

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, visited, n);  // Get vertex with minimum distance

        visited[u] = 1;  // Mark vertex as visited

        // Update distance value of adjacent vertices
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[location][u][v] &&
                dist[u] != INF && dist[u] + graph[location][u][v] < dist[v]) {
                dist[v] = dist[u] + graph[location][u][v];
            }
        }
    }

    // Print the sorted hotels by distance from the selected location
    float ratings[n];  // Array to store ratings for each hotel
    for (int i = 0; i < n; i++) {
        ratings[i] = hotels[i].rating;
    }

    // Calculate combined score for each hotel
    float combinedScores[n];
    calculateCombinedScore(dist, ratings, combinedScores, n);

    // Sort hotels based on combined score
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (combinedScores[i] < combinedScores[j]) {
                // Swap hotels
                int tempDist = dist[i];
                dist[i] = dist[j];
                dist[j] = tempDist;

                float tempRating = ratings[i];
                ratings[i] = ratings[j];
                ratings[j] = tempRating;

                float tempScore = combinedScores[i];
                combinedScores[i] = combinedScores[j];
                combinedScores[j] = tempScore;

                struct Hotel tempHotel = hotels[i];
                hotels[i] = hotels[j];
                hotels[j] = tempHotel;
            }
        }
    }

    // Print the sorted hotels by combined score
    printSortedHotels(dist, ratings, n, hotels);
}

void readHotelMenuData(char *restaurants, struct Hotel hotels[][MAX_HOTELS], int n) {
    FILE *fp = fopen(restaurants, "r");
    if (fp == NULL) {
        printf("Error opening file: %s\n", restaurants);
        return;
    }

    // Skip the header line (if any)
    fgets(NULL, MAX_LINE_LENGTH, fp);

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        char *token = strtok(line, ",");
        if (token == NULL) {
            continue; // Skip empty lines
        }

        // Extract hotel name
        char *hotelName = token;

        // Find the corresponding hotel index
        int hotelIndex = -1;
        for (int i = 0; i < n; i++) {
            if (strcmp(hotelName, hotels[0][i].name) == 0) {
                hotelIndex = i;
                break;
            }
        }

        if (hotelIndex == -1) {
            printf("Warning: Hotel '%s' not found in the hotel list.\n", hotelName);
            continue;
        }

        // Extract menu items (if any)
        token = strtok(NULL, "\n"); // Get the menu item list
        if (token == NULL) {
            continue; // Handle missing menu item list
        }

        // Remove leading and trailing brackets from the menu item list
        int len = strlen(token);
        if (token[0] == '[' && token[len - 1] == ']') {
            token[len - 1] = '\0'; // Remove trailing bracket
            memmove(token, token + 1, len - 2); // Remove leading bracket
        }

        // Parse the menu item list and store individual items
        char *menuItem = strtok(token, ",");
        while (menuItem != NULL) {
            strcpy(hotels[hotelIndex][n].name, menuItem); // Store menu item
            n++; // Increment menu item count for this hotel
            menuItem = strtok(NULL, ",");
        }
    }

    fclose(fp);
}

void printMenuItemsInTable(struct MenuItem menuItems[], int count) {
    printf("+----------------------------------+-------+--------+-------------------+----------+---------+\n");
    printf("|            Name                  | Price |  Type  |     Restaurant    | Quantity |  Rating |\n");
    printf("+----------------------------------+-------+--------+-------------------+----------+---------+\n");
    for (int i = 0; i < count; i++) {
        printf("| %-32s | %6.2f | %-8s | %-19s | %8d | %7.2f |\n",
               menuItems[i].name, menuItems[i].price, menuItems[i].type,
               menuItems[i].restaurant, menuItems[i].quantity, menuItems[i].rating);
    }
    printf("+----------------------------------+-------+--------+-------------------+----------+---------+\n");
}

int main() {
    int valid=0;
    Driver drivers[DRIVER_COUNT];
    int x,y;
    int a,b;
    while (!(valid)){
        printf("Enter the door number and the street number for the delivery: ");
        scanf("%d%d",&x,&y);
        if (road(x,y) && restaurant(x,y)){
            valid=1;
        }
        else{
            printf("\nInvalid Address\n");
        }
    }

    //printf("Enter destination x and y: ");
    //scanf("%d%d",&a,&b);
   
   
    char user_input_location[MAX_LOCATION_LENGTH];
    char search_restaurant[MAX_NAME_LENGTH], y_n[MAX_NAME_LENGTH], username[MAX_USERNAME_LENGTH];
    int item_id, quantity, i, flag, choice, new_quantity, full_size;
    MenuItem2 menu[MAX_ITEMS], fullmenu[MAX_ITEMS], item;
    //Cart cart;
     int num_menu_items = 0;
    FILE *file = fopen("menuitems3.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%d,%f,%49[^\n]", &menu[num_menu_items].item_id, &menu[num_menu_items].price, menu[num_menu_items].item_name) == 3) {
        num_menu_items++;
        if (num_menu_items >= MAX_ITEMS)
            break;
    }
    Itemset candidates[MAX_ITEMS];
    int num_candidates;
    loadMenuItems("menuitems3.csv", menu, &num_menu_items);
    Cart cart = { .num_items = 0, .total = 0.0 };
    

    load_users_from_file();
    
    // Sample locations in Chennai
    char locations[MAX_LOCATIONS][50] = {
        "Medavakkam",
        "Besant Nagar",
        "T Nagar",
        "Anna Nagar",
        "Thiruporur"
        // Add other locations here...
    };

    // Sample hotels nearby each location
    struct Hotel hotels[MAX_LOCATIONS][MAX_HOTELS] = {
        // Hotels nearby Medavakkam
        {
            {"Flower Drum", 8.5},
            {"Thalapakatti", 9.2},
            {"KFC", 7.8},
            {"McDonalds", 7.5},
            {"Dominos", 8.0}
        },
        // Hotels nearby Besant Nagar
        {
            {"Bilal", 8.0},
            {"Murugan Idli Shop", 9.0},
            {"Farzi Cafe", 8.5},
            {"Pizza Hut", 7.7},
            {"A2B", 8.8}
        },
        // Hotels nearby T Nagar
        {
            {"Barbeque Nation", 8.9},
            {"Steam & Whistles", 9.5},
            {"Bazaar", 7.6},
            {"J Hind", 8.2},
            {"Absolute Barbeque", 9.0}
        },
        // Hotels nearby Anna Nagar
        {
            {"Taco Bell", 7.9},
            {"Pind", 8.7},
            {"Burger King", 7.5},
            {"Krispy Kreme", 8.3},
            {"Nescafe", 8.0}
        },
        // Hotels nearby Thiruporur
        {
            {"Asia7", 8.6},
            {"Pakwan", 8.2},
            {"Udupi Hotel", 7.8},
            {"Kaithi", 8.4},
            {"Popeyes", 8.1}
        },

        // Add hotels for other locations similarly...
    };

    int n = sizeof(hotels[0]) / sizeof(hotels[0][0]);  // Number of hotels


    int location_choice;
   
      clearInputBuffer();

    //dijkstra(location_choice, 0, hotels[location_choice], n);
    printf("Select a location from the following:\n");
    for (int i = 0; i < MAX_LOCATIONS; i++) {
        printf("%d. %s\n", i, locations[i]);
    }
    printf("Enter your choice: ");
    scanf("%d", &location_choice);
    if (location_choice == 0){
        dijkstra(0, 0, hotels[0], n);
    }
    else if (location_choice == 1){
        dijkstra(1, 0, hotels[1], n);
    }
    else if (location_choice == 2){
        dijkstra(2, 0, hotels[2], n);
    }
    else if (location_choice == 3){
        dijkstra(3, 0, hotels[3], n);
    }
    else if (location_choice == 4){
        dijkstra(4, 0, hotels[4], n);
    }

    // Call Dijkstra's algorithm with the selected location
    


    printf("Enter the name of the restaurant: ");
    clearInputBuffer();
    fgets(search_restaurant, sizeof(search_restaurant), stdin);
    // Remove the newline character if present
    search_restaurant[strcspn(search_restaurant, "\n")] = '\0';

    initialize_cart(&cart);
    //load_frequent_itemsets();

    menufromfile(search_restaurant, menu, &full_size);

    printf("Do you want to begin ordering? (yes/no): ");
    scanf("%s", y_n);

    while (strcasecmp(y_n, "yes") == 0) {
        printf("Enter item id: ");
        scanf("%d", &item_id);
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        flag = 0;
        for (i = 0; i < full_size; i++) {
            if (item_id == menu[i].item_id) {
                item = menu[i];
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            add_item_to_cart(&cart, item, fullmenu, MAX_ITEMS, quantity);
            //addToCart(&cart, menu, item_id, quantity);
        } else {
            printf("Invalid item ID. Please try again.\n");
            continue;
        }
        //printf("%d\n",full_size);
       
        printf("Items in cart: %d\n", cart.num_items);
        printf("Do you want to order more (yes/no): ");
        scanf("%s", y_n);
    }

    strcpy(y_n, "yes");
    while (strcasecmp(y_n, "yes") == 0) {
        printf("The balance amount in the E Wallet is %f \n", ewallet_balance);
        printf("1. View cart and associated food items\n2. Add items to cart\n3. Modify quantity of an item\n4. Remove item from cart\n5. Generate Receipt and Payment\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            display_cart(&cart);
            //find_frequent_itemsets(&cart);
            findAssociations(&cart, menu, num_menu_items);
            
            
        } else if (choice == 2) {
            printf("+--------+-----------------------------------------+-----------+---------------------+-----------+\n");
            printf("|%-7s |%-40s |%-10s |%-20s |%-10s |%-9s|%-9s|\n", "Item ID", "Item", "Price", "Type", "Quantity", "Rating");
            printf("+--------+--------------------------------- --------+-----------+---------------------+-----------+\n");
            for (int i = 0; i < 20; i++) {
                printf("|%-7d |%-40s |%-10.2f |%-20s |%-10d |%-9.2f |%-10.2f |\n", menu[i].item_id, menu[i].item_name, menu[i].price, menu[i].veg_non_veg, menu[i].quantity, menu[i].rating);
            }
            printf("+--------+-----------------------------------------+-----------+---------------------+-----------+\n");
            printf("Enter item id: ");
            scanf("%d", &item_id);
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            flag = 0;
            for (i = 0; i < MAX_ITEMS; i++) {
                if (item_id == menu[i].item_id) {
                    item = menu[i];
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                add_item_to_cart(&cart, item, fullmenu, MAX_ITEMS, quantity);
            } else {
                printf("Invalid item ID. Please try again.\n");
                continue;
            }
        } else if (choice == 3) {
            printf("Enter item id: ");
            scanf("%d", &item_id);
            flag = 0;
            for (i = 0; i < cart.num_items; i++) {
                if (item_id == cart.items[i].item_id) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                printf("Enter new quantity: ");
                scanf("%d", &new_quantity);
                modify_quantity(&cart, item_id, new_quantity, fullmenu, MAX_ITEMS);
            } else {
                printf("Item ID not found. Please try again.\n");
                continue;
            }
        } else if (choice == 4) {
            printf("Enter item id: ");
            scanf("%d", &item_id);
            flag = 0;
            for (i = 0; i < cart.num_items; i++) {
                if (item_id == cart.items[i].item_id) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                remove_item_from_cart(&cart, item_id, fullmenu, MAX_ITEMS);
            } else {
                printf("Item ID not found. Please try again.\n");
                continue;
            }
        } else if (choice == 5) {
            printf("The receipt for the order is shown below\n");
            payment(&cart);
        } else if (choice == 6){
            break;
        }
    }

    readCSV(drivers);
    int userX, userY;
    printf("DELIVERY MANAGEMENT SYSTEM\n");
    printf("Enter your coordinates (x y): ");
    scanf("%d %d", &userX, &userY);

    double minDistance = 1e9;
    int closestDriverIndex = -1;

    for (int i = 0; i < DRIVER_COUNT; i++) {
        if (strcmp(drivers[i].status, "free") == 0) {
            double distance = calculateDistance(userX, userY, drivers[i].x, drivers[i].y);
            if (distance < minDistance) {
                minDistance = distance;
                closestDriverIndex = i;
            }
        }
    }

    if (closestDriverIndex == -1) {
        printf("No available drivers nearby.\n");
    } else {
        printf("Driver Details: \n");
        printf("Driver name: %s\n", drivers[closestDriverIndex].name);
        printf("Driver Phone Number: %d\n", drivers[closestDriverIndex].phone_number);
        printf("Driver Rating: %.2f\n", drivers[closestDriverIndex].rating);

        // Update the driver's coordinates to the user's coordinates
        drivers[closestDriverIndex].x = userX;
        drivers[closestDriverIndex].y = userY;

        // Write the updated data back to the CSV file
        writeCSV(drivers);

        printf("Driver %s's coordinates have been updated to (%d, %d).\n", drivers[closestDriverIndex].name, userX, userY);
    }

    char restaurant_name[100];
    double stars;

    printf("Enter restaurant name: ");
int c;
while ((c = getchar()) != EOF && c != '\n'); // Consume characters until newline
 
    fgets(restaurant_name, sizeof(restaurant_name), stdin);
 

    restaurant_name[strcspn(restaurant_name, "\n")] = 0;  // Remove newline character

    printf("Enter new rating (0.0 to 10.0): ");
    scanf("%lf", &stars);

    update_review(restaurant_name, stars);

    loyalty_points(&cart,users,username);
    save_user_to_file(users);
    write_menu_to_file("menuitems.csv", fullmenu, MAX_ITEMS);

    
    return 0;

}
