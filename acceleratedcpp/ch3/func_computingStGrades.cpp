
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;
using std::domain_error;

// grade (double,double,double)
// grade (double,double,const vector<double>&) 
// read_hw(istream&, vector<double>&)
// Calculating the median 
double grade ( double midterm, double final, double homework) {
	return 0.2*midterm + 0.4*final + 0.4 * homework;
} 

double median(vector<double> vec)  {

	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();

	if(size ==0)
		throw domain_error("median of an empty vector");
	sort(vec.begin(),vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? ( vec[mid] + vec[mid-1] ) / 2 : vec[mid];
}

double grade ( double midterm, double final, const vector<double>& hw) {
	if(hw.size() == 0)
		throw domain_error("student has done no hw");
	return grade(midterm,final,median(hw));
}


int main () {


	return 0;
}
