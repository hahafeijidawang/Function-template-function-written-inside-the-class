/*
场景一

所有的函数写在类的内部。

*/

#include <iostream>

using namespace std;

template<typename T>

class Complex{

public:
    //所有的函数写到类里面。
    friend ostream & operator <<(ostream &out,Complex &c3){

        out<<"a:"<<c3.a<<"b:"<<c3.b<<endl;

        return out;

    }


    Complex( T a,T b ){

        this->a = a;

        this->b = b;

    }



   Complex operator +(Complex<int> &c2){

       return Complex(a+c2.a,b+c2.b);

          // Complex tmp(a+c2.a,b+c2.b);

                // return tmp;

   }

void printCom(){

    cout<<"a:"<<a<<"b:"<<b<<endl;
}

private:
  T a;
  T b;

};

//ostream & operator <<(ostream &out,Complex &c3){

//    out<<"a:"<<c3.a<<"b:"<<c3.b<<endl;

//    return out;
//}




int main()
{
    Complex<int> c1(10,30);

    Complex<int> c2(2,3);

    Complex<int> c3=c1+c2;

    cout<<c3<<endl;

   // c3.printCom();


    return 0;
}

