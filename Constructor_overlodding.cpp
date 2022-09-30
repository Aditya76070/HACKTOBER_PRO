//#include<iostream>
//using namespace std;
//
//class A
//{ 
//  private:
//     int age;
//public:
//	A()    //Non Parameterised constructor
//	{
//		age=0;
//	}
//     A( int x)   //Parameterised  constructor 
//      {
//	  age = x; 
//	  }
//	  A(A &obj1)  //copy  constructor 
//	  {
//	  	age =obj1.age;
//	  }
//     int getData() 
//	 { 
//	 return age; 
//	 }
//
//};
//int main()
//    {
//      A a_obj1(78);
//      A a_obj2(a_obj1);
//      cout <<a_obj1.getData();
//      cout <<a_obj2.getData();
//	}

//Over loadding above code
#include<iostream>
using namespace std;

class A
{ 
  private:
     int age;
public:
//	A()    //Non Parameterised constructor
//	{
//		age=0;
//	}
     A( int x=0)   //Parameterised  constructor 
      {
	  age = x; 
	  }
	  A(A &obj1)  //copy  constructor 
	  {
	  	age =obj1.age;
	  }
     int getData() 
	 { 
	 return age; 
	 }

};
int main()
    {
//      A a_obj1;     // in case you pass nothing a non -parameterised constructor call
         A a_obj1(12);
      A a_obj2(a_obj1);
      cout <<a_obj1.getData();
      cout<<"\nnext\n";
      cout <<a_obj2.getData();
	}

