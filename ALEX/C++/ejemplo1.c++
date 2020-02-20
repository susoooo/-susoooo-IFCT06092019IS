#include <iostream>
 #include <string>
 using namespace std;
 
 class Date {
06     int d, m ,y;
07 
08 public:
09     Date();
10     Date(int, int, int);
11     ~Date();
12     void add_year(int);
13     void add_month(int);
14     void add_day(int);
15     void print_date(string);
16 };
17 
18 Date globaldate;
19 
20 int main() 
21 {
22     Date today (6, 11, 1995);
23     today.print_date("TODAY");
24 
25     Date tomorrow = today;
26     tomorrow.add_day(1);
27     tomorrow.print_date("TOMORROW");
28 }
29 Date::Date() 
30 {
31     d = 0; m = 0; y = 0;
32     cout << "\n Date: default constructor \n";
33 }
34 Date::Date(int dd, int mm, int yy) 
35 {
36     d = dd; m = mm; y = yy;
37     cout << "\n Date: constructor -> (int, int, int))\n";
38 }
39 Date::~Date()
40 {
41     cout << "\n Date: destructor -> ()\n";
42 }
43 void Date::add_year(int yy) { y += yy; }
44 void Date::add_month(int mm) { m += mm; }
45 void Date::add_day(int dd) { d += dd; }
46 void Date::print_date(string s) {
47     cout << s << "\n"
48          << " day   : " << d << "\n"
49          << " month : " << m << endl
50          << " year  : " << y << endl;
 }