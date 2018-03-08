/* Hash funciton that takes a BIN and returns the unique integer in character positions
 * 5-9 ( note that positions are 0-based, the first character is position 0).
 * Example given the BIN " US-HM22198H011", hash functin should return the integer
 * 22198.*/

/* Every car has a unique VIN. Boats have a similar BIN. The BIN for boat is the 
 * string. The first 2 characters are the cou the boat was built. Dash, then the next 
 * 2 character denoted the company: HM is Hanover Marine. The next 5 characters are a 
 * unique integer, followed by "H". and the followed by the year of manufacture:"011" denotes
 * 2011. The result is a 14-character string that uniquely identifies every boat in the world.
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hash(char *BIN) 
{
	// TO DO
	//
	char * dest = (char *)malloc(sizeof(char) * 7 );
	strncpy(dest,BIN+5,5);
	int n = atoi(dest);
	return n;
}

int main() 
{

	printf("%d",hash("US-HM22000198H011"));
return 0 ;
}
