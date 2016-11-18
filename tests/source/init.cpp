#include <calculator.hpp>
#include <catch.hpp>

 SCENARIO("calculator summary", "[summary]") {
    float a = 7.0;
    float b = 4.0;
    
    double rv = summary(a,b);
    
      REQUIRE( rv == 11.0);
  }
   SCENARIO("calculator subtraction", "[subtraction]") {
     float a = 7.0;
     float b = 4.0;
     
     double rv = subtraction(a,b);
      REQUIRE (rv == 3.0);
   }
  SCENARIO("calculator multiplication", "[multiplication]") {
     float a = 7.0;
     float b = 4.0;
     
     double rv = multiplication(a,b);
      REQUIRE (rv == 28.0);
   }
  SCENARIO("calculator division", "[division]") {
     float a = 7.0;
     float b = 4.0;
     
     double rv = division(a,b);
      REQUIRE (rv == 1.75);
   }
  SCENARIO("calculator involution", "[involution]") {
     float a = 7.0;
     int c = 2;
     
     float rv = involution(a,c);
      REQUIRE (rv == 49.0);
   } 

    SCENARIO ("calculator square_root", "[square_root]"){
    float a = 0.04;
    double long rv = square_root (a);
REQUIRE ( rv == 0.2 );
}
