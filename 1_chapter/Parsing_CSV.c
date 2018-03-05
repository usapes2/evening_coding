

/* 12345,jhummel2,100,88,92
 * first value is student's UIN, the nxt value is the students NetID,
 * and the remainig 3 values are the students exam scores. Extrcacting these values is konwn as parsing, and a common way to parse CSV format is using the built in strtok function.
 * 
 * To begin parsing this line, we call strtok and pass 2 parameters: the line to parse, 
 * and a string containing the delimiter characters. In this case",", is the delimiter character between values, so we call strtok as follows:
 *
 * char *token;
 * token = strtok(line,",");
 * The variable token now points to the first value : "12345". ONe can use token to strcpy this value, or call atoi to convert to an integer.
 * Interestingly, to retrieve the second value the NetID one call strtok again but this time
 * passes NULL as the first parameter.
 * Write a function to parse student data in the CSV format shown above: UIN,NetID,Exam 1,
 * exam 2,exam3. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ParseStudentData(char line[],int *UIN,char NetID[],int *Exam1,int *Exam2,int *Exam3) 
{
	char *token;

	token = strtok(line,",");
	*UIN = atoi(token);

	token = strtok(NULL,",");
	strcpy(NetID, token);

	token = strtok(NULL,",");
	*Exam1 = atoi(token);

	token = strtok(NULL,",");
	*Exam2 = atoi(token);

	token = strtok(NULL,",");
	*Exam3 = atoi(token);
}
int main () {


	return 0;
}
