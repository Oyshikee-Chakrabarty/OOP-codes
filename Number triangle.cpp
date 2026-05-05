#include <iostream>

using namespace std;
  class counting
  {
  public :
    int i,j;
    void func()
    {
        for (i =5;i>=1;i--){
            for( j=1;j<=(5+1-i);j++)
            {
                cout<<i;
            }
            cout <<endl;
        }
    }
  };

int main()
{
    counting trinagle;
    trinagle.func();
    return 0;
}
