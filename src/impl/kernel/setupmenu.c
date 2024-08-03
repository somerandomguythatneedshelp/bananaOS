#include "utils.h"
#include "setupmenu.h"
#include "io.h"

void setup_menu() {

    int choice;
    print_str("Select an option:\n");
    print_str("1. Option 1\n");
    print_str("2. Option 2\n");
    print_str("3. Option 3\n");
    print_str("4. Option 4\n");
    print_str("Enter your choice: ");
    //choice = asm_get_key();
}

unsigned char get_key() {
    // unsigned char key;
    // while ((inb(0x64) & 0x01) == 0); // wait for a key press
    // key = inb(0x60); // read the key
    // return key;
}
