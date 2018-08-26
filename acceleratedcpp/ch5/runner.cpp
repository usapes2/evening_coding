#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include "grade.h"
#include "Student_info.h"
#include "median.h"

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;
using std::domain_error;
using std::istream;
using std::max;


// predicate to determine whether a student failed 
bool fgrade(const Student_info & s)
{
	return grade(s)<60 ;
}

/*
// separate passing and failing student records: first try
vector<Student_info> extract_fails(vector<Student_info>& students)
{
	vector<Student_info> pass,fail;
	
	for(vector<Student_info>::size_type i=0;
			i != students.size(); ++i){
		if(fgrade(students[i]))
			fail.push_back(students[i]);
		else
			pass.push_back(students[i]);
	}

	students = pass;
	return fail;
} */
// Second try: correct but potentially slow ( space efficient )
vector<Student_info> extract_fails(vector<Student_info>& students)
{
	vector<Student_info> fail;
	vector<Student_info>::size_type i = 0;
	// invariant:elemts [0, i) of stuents represent passing grades
	while ( i! = students.size()) {
		if (fgrade(students[i])) {
			fail.push_back(students[i] };
			students.erase(students.begin() + 1);
			} else 
			++i;
			}
			return fail;}

int main () {

	vector<Student_info> students;
	Student_info record;
	//string::size_type maxlen = 0;
	string::size_type maxlen = 0 ;

	// read and store all the records, and find the length of the longest name
	
	while (read(cin,record)) {
		maxlen = max ( maxlen, record.name.size());
		students.push_back(record);
	}

	//alphabetize the records
	sort(students.begin(),students.end(),compare);

	for ( vector<Student_info>::size_type i = 0; i!=students.size(); ++i) {
		// write the name, padded on the right to maxlen +1 char
		cout << students[i].name 
			<<string(maxlen+1 - students[i].name.size(),' ');
		//coumpute and write the grade
		//
		try {
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade
				<< setprecision(prec);
		} catch(domain_error e) {
			cout << e.what();
		}
		cout << endl;

	}

	vector<Student_info> failed = extract_fails(students);

	cout << " Students who failed " << endl;

	for (vector<Student_info>::size_type i = 0 ; i!=failed.size(); ++i)
		cout << failed[i].name <<endl;

	return 0;
}
