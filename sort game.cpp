/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//not compiled

bool
myCompare (pair < string, int >p1, pair < string, int >p2)
{
  if (p1.second == p2.second)
    {
      return p1.first < p2.first;
    }
  return p1.second > p2.second;
}

void
Sort (emp[])
{
  for (int i = 0; i < n; i++)
    {
      if (myCompare (emp[i], emp[i + 1]))
	{
	swap (emp[i], emp[i + 1])}
    }
}

int
main ()
{
  int min_salary, n;
  pair < string, int >emp[100005];
  cin >> min_salary;
  cin >> n;
  string name;
  int salary;

  for (int i = 0; i < n; i++)
    {
      cin >> name >> salary;
      emp[i].first = name;
      emp[i].second = salary;
    }

  sort (emp, emp + n, myCompare);

  for (int i = 0; i < n; i++)
    {
      if (emp[i].second >= min_salary)
	{
	  cout << emp[i].first << " " << emp[i].second << endl;
	}
    }
  return 0;
}
