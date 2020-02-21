#include <iostream>
#include <string>
using namespace std;
 
class Date {
    int d, m ,y;
    public:
    Date();
    Date(int, int, int);
    ~Date();
    void add_year(int);
    void add_month(int);
    void add_day(int);
    void print_date(string);
};
 
Date globaldate;
 
int main() 
{
    Date today (6, 11, 1995);
    today.print_date("TODAY");
 
    Date tomorrow = today;
    tomorrow.add_day(1);
    tomorrow.print_date("TOMORROW");
}
Date::Date() 
{
    d = 0; m = 0; y = 0;
    cout << "\n Date: default constructor \n";
}

Date::Date(int dd, int mm, int yy) 
{
    d = dd; m = mm; y = yy;
    cout << "\n Date: constructor -> (int, int, int))\n";
}

Date::~Date()
{
    cout << "\n Date: destructor -> ()\n";
}

void Date::add_year(int yy) { y += yy; }
void Date::add_month(int mm) { m += mm; }
void Date::add_day(int dd) { d += dd; }
void Date::print_date(string s) {
    cout << s << "\n"
        << " day   : " << d << "\n"
        << " month : " << m << endl
        << " year  : " << y << endl;
}