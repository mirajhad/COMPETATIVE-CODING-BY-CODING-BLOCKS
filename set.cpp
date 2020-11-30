/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<set>
#include <bits/stdc++.h>
using namespace std;


int
main ()
{
  set < int >s;
  s.insert (10);
  s.insert (12);
  s.insert (14);
  s.insert (16);
  s.erase (12);
  auto f = s.find (16);

  if (f != s.end ())
    {
      cout << "exist" << endl;
    }
for (auto no:s)
    {
      cout << no << " ";
    }

  return 0;
}
