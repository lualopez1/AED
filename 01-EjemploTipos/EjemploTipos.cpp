#include<cassert>
#include<string>
using namespace std::literals;


int main()
{
	//Tipo de dato BOOL

    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false); 
   
    //Tipo de dato DOUBLE
   
    assert(2.0 != 3.1 + 0.2 + 0.1 + 0.7 + 0.1 + 1.1 + 1.1 + 1.1 + 0.1); //Comparacion y suma
    assert(4.5>1.7+2.4);    // Mayor 
    assert(10.0>=8.2+1.2); // Mayor o igual 
    assert(3.7<1.0+8.2);  // Menor y suma
    assert(2!=3.5+1.0);  // Comparacion y suma 

    //Tipo de dato STRING
   
    assert("luana"s=="lu"s+"ana"s);
    assert("pacheco"s.length()==7); //length("pacheco")
    assert("ventana"s=="ven"s+"ta"s+"na"s);
    assert( "1" <="4");
    
    //Tipo de dato INT


    assert(2==2*1);
    assert(4>-1+2);  
    assert(21>=8+3);
    assert(1<9+2);
    assert(6==10-4);
    assert(0== -1+1);
    
    
    // Tipo de dato CHAR 

    assert('A'==65);
    assert('a'==43+54);
    assert('t'==120-4);
    assert ('A'!= 'B'); 

    // Tipo de dato UNSIGNED

    assert(0u==0u);
    assert(0u==15u%3u);
    assert(6u==3u+3u);
    assert(9999999999u == 9999999998u + 1u);
    assert(5400u <= 6500u);
    assert(8000u >= 3000u); 
  
   } 