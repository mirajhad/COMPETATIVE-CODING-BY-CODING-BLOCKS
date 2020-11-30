/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<unordered_map>
using namespace std;

// class Fruit{
//     price;
//     color;
//     sweetness;
//     state;
//     id;
//     vendor;
// }
int
main ()
{
  unordered_map < string, int >h;
  h["mango"] = 100;
  h["mango"] = 80;

  if (h.count ("mango") != 0)
    {
      cout << h["mango"] << endl;
    }
  h.insert (make_pair ("kiwi", 170));
  string f;
  cin >> f;
  if (h.count (f))
    {
      cout << "fruit cost" << h[f] << endl;

    }
  else
    {
      cout << "fruits does not exist";
    }
  h.erase ("mango");

for (auto p:h)
    {
      cout << p.first << "and" << p.second << endl;
    }

  return 0;
}
