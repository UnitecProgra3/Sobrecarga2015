#include <iostream>

using namespace std;

class Num
{
public:
    int num;
};

Num operator+(Num n1, Num n2)
{
    Num n;
    n.num = n1.num+n2.num;
    return n;
}

Num operator-(Num n1, Num n2)
{
    Num n;
    n.num = n1.num-n2.num;
    return n;
}

Num operator*(Num n1, Num n2)
{
    Num n;
    n.num = n1.num*n2.num;
    return n;
}

int main()
{
    Num n1,n2,n3,n4;
    n1.num = 10;
    n2.num = 20;
    n3.num = 30;
    n4.num = 40;
    int res = (n1*n2-n3+n4).num;
    cout<<res<<endl;
    return 0;
}
