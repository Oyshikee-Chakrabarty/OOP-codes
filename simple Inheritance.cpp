#include <iostream>

using namespace std;

  class B
  {
      int a;
  public:
    int b;
    void setab();
    int geta(void);
    void showa(void);
  };
  class D:public B
  {
      int c;
  public :
    void mul(void);
    void display (void);
  };
  void B:: setab(void)
  {
      a=5;b=10;
  }
  int B:: geta()
  {
      return a;
  }
  void B:: showa()
                 {
                     cout <<"a =" << a <<"\n";
                     }
    void D:: mul()
    {
        c =b* geta();
    }
    void D:: display()
    {
        cout <<"a ="<<geta()<<"\n";
        cout <<"b ="<<b<<"\n";
        cout <<"c ="<<c<<"\n \n";
    }
int main()
{
    D d;
    d.setab();
    d.mul();
    d.showa();
    d.display();

    d.b=20;
    d.mul();
    d.display();
    //cout << "Hello world!" << endl;
    return 0;
}
