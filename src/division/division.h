#ifndef CMAKE_DIVISION_H
#define CMAKE_DIVISION_H

static const char* const DIVISION_BY_ZERO_MESSAGE = "Division by zero is illegal";

#include <iostream>
#include <stdexcept>

using namespace std;

class DivisionByZero : public exception
{
public:
  virtual const char* what() const throw() { return DIVISION_BY_ZERO_MESSAGE; }
};

/**
 * Fraction
 *
 * Struct to hold the division parameters.
 */
struct Fraction
{
  long long numerator;
  long long denominator;
};

/**
 * DivisionResult
 *
 * Struct to hold division result.
 */
struct DivisionResult
{
  long long division;
  long long remainder;  //!< stores the number of variables

  friend bool operator==(const DivisionResult& lhs, const DivisionResult& rhs)
  {
    return lhs.division == rhs.division ? lhs.remainder < rhs.remainder
                                        : lhs.division < rhs.division;
  }
};

class Division
{
public:
  explicit Division(Fraction fraction) { this->fraction = fraction; }

  ~Division(){};

  DivisionResult divide();

protected:
  Fraction fraction;
  DivisionResult result;
};

#endif  // CMAKE_DIVISION_H
