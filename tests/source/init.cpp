#include <Calculator.hpp>
#include <catch.hpp>

 SCENARIO("calculator summary", "[summary]") {
    float a = 7.0;
    float b = 4.0;
    
    float rv = summary(a,b);
    
      REQUIRE( rv == 11.0);
  }
   SCENARIO("calculator sub", "[sub]") {
     float a = 7.0;
     float b = 4.0;
     
     float rv = sub(a,b);
      REQUIRE (rv == 3.0);
   }
  SCENARIO("calculator multiplication", "[multiplication]") {
     float a = 7.0;
     float b = 4.0;
     
     float rv = multiplication(a,b);
      REQUIRE (rv == 28.0);
   }
  SCENARIO("calculator division", "[division]") {
     float a = 7.0;
     float b = 4.0;
     
     float rv = division(a,b);
      REQUIRE (rv == 1.75);
   }
  SCENARIO("calculator involution", "[involution]") {
     float a = 7.0;
     float b = 4.0;
     
     float rv = involution(a,b);
      REQUIRE (rv == 2401.0);
   } 

    SCENARIO ("calculator square-root", "[square_root]"){
    float x = 0.04;
    double long rv = square_root (x);
REQUIRE ( rv == 0.2 );
}
