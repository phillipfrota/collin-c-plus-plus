#include <iostream>
int main()
{
void calc (int a, int& b)
{
   int c;
   c = a + 2;
   a = a * 3;
   b = c + a;
}

int x = 1, y = 2, z = 3;
calc(x, y);
cout << x << "  " << y << "  "  << z << endl;
return 0;
}