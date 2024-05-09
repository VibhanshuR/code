#include <iostream>
using namespace std;

class complex
{
  int a, b;

public:
  void setdata(int x, int y)
  {
    a = x;
    b = y;
  }
  void printdata()
  {
    cout << "the sum of complex no is " << a << " + i" << b << endl;
  }
  void sumdata(complex o1, complex o2)
  {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
  }
};

int main()
{
  complex c1, c2, c3;
  c1.setdata(3, 4);
  c1.printdata();
  c2.setdata(4, 6);
  c2.printdata();

  c3.sumdata(c1, c2);
  c3.printdata();
  return 0;
}