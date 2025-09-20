#include "../project/inc/math.h"
#include "C:/Users/dell/.local/share/gem/ruby/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










void setUp(void)

{



}











void tearDown(void)

{



}



void test_project_Sum(void)

{



   unsigned int result = 0,x = 5, y = 4, z = 9;



   result = Sum(x, y);



   do {if ((result == z)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(29)));}} while(0);

}



void test_project_Subtract(void)

{



   unsigned int result = 0,x = 5, y = 4, z = 1;



   result = Subtract(x, y);



   do {if ((result == z)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(39)));}} while(0);

}



void test_project_Multiply(void)

{



   unsigned int result = 0,x = 4, y = 5, z = 20;



   result = Multiply(x, y);



   do {if ((result == z)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(49)));}} while(0);

}



void test_project_Divide_Case1(void)

{



   unsigned int result = 0,x = 20, y = 5, z = 4;



   result = Divide(x, y);



   do {if ((result == z)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(59)));}} while(0);

}



void test_project_Divide_Case2(void)

{



   unsigned int result = 0,x = 20, y = 0, z = 0;



   result = Divide(x, y);



   do {if ((result == z)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(69)));}} while(0);

}
