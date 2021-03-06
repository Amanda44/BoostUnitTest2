	  
#include "stdafx.h"
#include "myComplex.cpp"

BOOST_AUTO_TEST_CASE(MyComplexAddTests)  
{
	myComplex a(3, 5);
	myComplex b(3, 0);

	BOOST_CHECK(a.getReal() == 3);

	BOOST_CHECK(a.getImag() == 5);

	BOOST_CHECK((a.getReal()+b.getReal()) == 6);

}

BOOST_AUTO_TEST_CASE(MyComplexValAbsTests)
{

	myComplex classictest(2, 2);
	myComplex pureReal(3, 0);
	myComplex pureImg(0, 4);
	myComplex nullVal(0, 0);

	BOOST_CHECK(classictest.abs() == sqrt(8));

	BOOST_CHECK(pureReal.abs() == 3);

	BOOST_CHECK(pureImg.abs() == 4);

	BOOST_CHECK(nullVal.abs() == 0);

	BOOST_CHECK(nullVal.abs() == sqrt(0));
}

BOOST_AUTO_TEST_CASE(MyComplexValOperatorEqualTests) {

	myComplex classictest(2, 2); 

	myComplex classictestCp = classictest;

	BOOST_CHECK(classictest.getReal() == classictestCp.getReal());
	BOOST_CHECK(classictest.getImag() == classictestCp.getImag());
}

BOOST_AUTO_TEST_CASE(MyComplexValOperatorPlusTests1) {

	myComplex op1(5, 8);
	myComplex op2(2, 2); 

	myComplex plusTest = op1+op2;

	BOOST_CHECK(plusTest.getReal() == 7);
	BOOST_CHECK(plusTest.getImag() == 10);
}


BOOST_AUTO_TEST_CASE(MyComplexValOperatorPlusTests2) {

	myComplex op1(500,834);
	myComplex op2(4, 4); 

	myComplex plusTest = op1+op2;

	BOOST_CHECK(plusTest.getReal() == 504);
	BOOST_CHECK(plusTest.getImag() == 838);
}

