
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

// median
// grade (double,double,double)
// grade (double,double,const vector<double>&) 
// read_hw(istream&, vector<double>&)

double median(vector<double> vec)  {

	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();

	if(size ==0)
		throw domain_error("median of an empty vector");
	sort(vec.begin(),vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? ( vec[mid] + vec[mid-1] ) / 2 : vec[mid];
}
int main () {


	return 0;
}
