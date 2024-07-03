/* 
 *    This demo program shows how to use the standard C routine printf on an Arduino Giga R1 board.
 *    
 *    Author: Glaive Software Group
 *    Revised: 7/3/2024.
 *    
 *    To run this sketch, you will need to specify that you are using the Arduino Giga R1 board
 *    in the IDE's board manager (under Arduino Mbed OS Giga boards).
  *    
 *    This program is Free Software and has ABSOLUTELY NO WARRANTY.
 */

REDIRECT_STDOUT_TO(Serial)

void setup()
{
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  while (!Serial) ; // Wait for the serial port to connect.
 
  printf("Hello world!\n");
}

void loop()
{
  // Nothing to do in the loop
}
