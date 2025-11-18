/*
 * Course: Getting Started With Raspberry Pi 46
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Getting Started With Raspberry Pi 46
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include standard I/O for printing status
#include <unistd.h> // Include POSIX sleep functions for delays

// Define Raspberry Pi GPIO numbers for LED control
static const int LED_GPIO = 17; // Use GPIO17 for the LED pin

// Declare stub functions to emulate GPIO operations on Raspberry Pi
int gpio_export(int gpio) { return 0; } // Export GPIO to user space (stub)
int gpio_set_direction(int gpio, int output) { return 0; } // Set direction (stub)
int gpio_write(int gpio, int value) { return 0; } // Write logical value to GPIO (stub)

// Entry point for the program
// Main routine: orchestrates the getting started with raspberry pi 46 scenario
int main(void) { // Start of main function
  printf("Raspberry Pi GPIO LED Blink (Course 46)\n"); // Print a startup message
  gpio_export(LED_GPIO); // Make sure the LED GPIO is exported
  gpio_set_direction(LED_GPIO, 1); // Configure GPIO17 as output
  for (int i = 0; i < 10; ++i) { // Loop to blink LED ten times
    gpio_write(LED_GPIO, 1); // Turn LED on
    printf("LED ON\n"); // Report LED state
    usleep(500000); // Delay for 500 ms
    gpio_write(LED_GPIO, 0); // Turn LED off
    printf("LED OFF\n"); // Report LED state
    usleep(500000); // Delay for 500 ms
  } // End of blink loop
  printf("Done.\n"); // Print completion message
  return 0; // Return success exit code
} // End of main function

