#include "utils.h"
#include "main.h"
#include "setupmenu.h"
#include "print.h"
void switchToMenu(int i) {
switch (i) {
        case 1:
            kernel_main();
            break;
        case 2:
            setup_menu();
            break;
        default:
            // Handle invalid input
            print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
            print_str("[ ");
            print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
            print_str(" ERROR ");
            print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
            print_str(" ] ");

                        print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);

            print_str("Specified Wrong Number, Available Numbers: 1, 2\n");
            break;
    }
}