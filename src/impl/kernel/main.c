#include "print.h"
#include "utils.h"
#include "main.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Welcome to ");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Banana ");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Kernal");

    print_str("\n");
    print_str("\n");
    print_str("\n");

    PassCheck("Kernel Initialized");
    
    CheckInternet();


        print_clear();
    switchToMenu(2);

}

void CheckInternet() {
    if (check_internet_connection()) {
        PassCheck("Internet connection dectected");
    } else {
        FailCheck("Internet connection dectected");
    }
}

void PassCheck(char msg[]) {
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("[ ");
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str(" OK ");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(" ] ");


    print_str(msg);

    print_str("\n");
}

void FailCheck(char msg[]) {
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("[ ");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str(" FAIL ");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(" ] ");


    print_str(msg);

    print_str("\n");
}

int check_internet_connection() {
    // This function would send an ICMP echo request and check for a response.
    // It returns 1 if successful, 0 otherwise.
    // Hypothetically, assuming net_send_icmp_ping is implemented in net.h/.c
     const char* test_ip = "8.8.8.8"; // Google's public DNS
    // return net_send_icmp_ping(test_ip);
}