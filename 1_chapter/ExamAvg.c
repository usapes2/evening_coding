/* The user is going to input data about 0 or more students, followed by the input "# 0 0".
 * Each student input consists of their netid, midterm score, and final score. Example input:
 * lshu3 90 92
 * gma4 82 91
 * rahsan3 79 81
 * # 0 0
 * Job is to write a C program that inputs this data into an array of structs, prints them out in
 * reverse order (1 per line) with each student's exam average, followed by the overall averages for the
 * midterm and final. Here's the correct output for the input above:
 *
 * rahsan3: 79,81,80.000000
 * gm4: 82,91,86.500000
 * lshu3:90,92,91.000000
 * Midterm: 83.666667
 * Final: 88.00000
 * if no students are input . i.e. the input is simply
 * # 0 0
 * Then the output should be
 * Midterm: N/A
 * Final: N/A
 *
 * Declare an array of size 100 to store the student array; you may assume the input will never exceed 100
 * students. Each element of the array is a struct, defined as follows:
 *
 typedef struct Student
 {
 	char Netid[16];
	int Midterm;
	int Final;
	} Student;

Note that space for the student's Netid is already declared, assume 16 chars is sufficient.
Since the string-based input is a single word netid, it is safe to use scanf for obtaining the value.
However, since we are mixing strings and integers, it's best to discard the rest of the input line before
calling scanf again. Here is a good way to input data about one student.

char netid[16];
int mid, fnl;

scanf("%s %d %d" , netid, &mid, &fnl);
skipRestOfInput(stdin);

Strings in C are arrays of chars, and that in order to store the student's netid into the array.
You'll need to use strcpy() to copy the string-based input value into the corresponding Netid field of the array:
strcpy(students[i].Netid, netid);

Your input loop should stop when the netid "#" is input. Since valid UIC netids start with a letter, it's sufficient to check the first character of the input netid to see if it's a '#':

while (netid[0] != '#' )

Afarages output as
printf("Midterm: %f\n", midtermAverage);

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	char Netid[16];
	int Midterm;
	int Final;
}Student;

void skipRestOfInput(FILE *stream)
{
	char restOfLine[256];
	int rolLength = sizeof(restOfLine) / sizeof(restOfLine[0]);

	fgets(restOfLine, rolLength, stream);
}


int main (int argc, char *argv[]) {

	char netid[16];
	int mid, fnl;
	Student students[100];
	int i = 0;
	int count = 0;

	int sumMidterm = 0;
	int sumFinal = 0;
	double midtermAve,finalAve;

	while (1) {

		scanf("%s %d %d", netid, &mid, &fnl);
		skipRestOfInput(stdin);
		if ( netid[0] == '#' )
		      	break;
		Student s;
		strcpy(s.Netid, netid);
		s.Midterm = mid;
		s.Final = fnl;
		students[i] = s;
		i++;
		count++;

	}

	if (count == 0)
	{
		printf("Midterm: N/A\n");
		printf("Final: N/A\n");
	}
	else
	{
		for (i = count - 1; i >=0; i--){
	printf("%s: %d,%d,%f\n", students[i].Netid, students[i].Midterm, students[i].Final, (double) (students[i].Midterm + students[i].Final)/2);
		sumMidterm += students[i].Midterm;
		sumFinal += students[i].Final;

		}
		midtermAve = (double) sumMidterm / count;
		finalAve = (double) sumFinal / count;
		printf("Midterm: %f\n", midtermAve);
		printf("Final: %f\n", finalAve);
	}




return 0;

	}
