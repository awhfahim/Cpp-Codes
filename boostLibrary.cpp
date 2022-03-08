#include <iostream>
#include <string>
//#include <boost/algorithm/string/trim.hpp>
using namespace std;

int main()
{
    string s = "\n\tHello World \r\n";
    boost::algorithm::trim(s);

    cout << "START::" << s << "::END";
    return 0;
}
