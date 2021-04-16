/* 
 * CS:APP Data Lab 
 * 
 * Jonathan Chu
 * 004832220
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* 
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int bang(int x) {
  // Convert x to its negative value.
  // When x == 0, its negative value will remain a 0.
  // When x != 0, its most significant bit will always be opposite of its negative value.
  int a = ~x + 1;

  // x | y == 0 when both are 0.
  // Right shift 31 to get most significant bit. 
  // Add 1 to turn 0 to 1 or -1 to 0.
  return ((x | a) >> 31) + 1;
}
/*
 * bitCount - returns count of number of 1's in word
 *   Examples: bitCount(5) = 2, bitCount(7) = 3
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 40
 *   Rating: 4
 */
int bitCount(int x) {
  // Create a bit mask of 0x0F == 00001111.
  int mask = 0x0F;
  int toBeReturned = 0;
  // Create a pattern of 0x11111111 == 00010001...0001
  int pattern = 0x11+(0x11<<8) +( 0x11 << 16) + (0x11 << 24);
  // Sum of the number of 1s in least significant 4 bits of x.
  toBeReturned = (x & pattern) +((x>>1) & pattern) + ((x>>2)&pattern) + ((x>>3) & pattern);
  // Check by increments of 4, whether there are ones. Sum them all together. 
  return (toBeReturned & mask) + ((toBeReturned>>4) & mask) + ((toBeReturned >> 8)& mask) + ((toBeReturned >> 12) & mask) + ((toBeReturned >> 16) & mask)+ ((toBeReturned >> 20) & mask)+ ((toBeReturned >> 24) & mask)+((toBeReturned >> 28) & mask);
}

/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y) {
  // De Morgan's law. 
  return ~((~x) & (~y));
}
/*
 * bitRepeat - repeat x's low-order n bits until word is full.
 *   Can assume that 1 <= n <= 32.
 *   Examples: bitRepeat(1, 1) = -1
 *             bitRepeat(7, 4) = 0x77777777
 *             bitRepeat(0x13f, 8) = 0x3f3f3f3f
 *             bitRepeat(0xfffe02, 9) = 0x10080402
 *             bitRepeat(-559038737, 31) = -559038737
 *             bitRepeat(-559038737, 32) = -559038737
 *   Legal ops: int and unsigned ! ~ & ^ | + - * / % << >>
 *             (This is more general than the usual integer coding rules.)
 *   Max ops: 40
 *   Rating: 4
 */
int bitRepeat(int x, int n) {
  printf("%x\n", x);
  // Create a bit mask of n length.
  // Create n 1s. Invert so that they are the lowest n significant bits. 
  // Special case if n == 32. 
  int mask = ~(-1<<n%32) | ((n/32)<< 31)>> 31;

  // Get the n bits that should be repeated. 
  int value = x & mask;

  // Shift by n and add to value.
  // Do not do anything if n >=32.
  value = value + ((value << n%32)*(!(n/32)));

  // Repeat 4 times. 2^4 == 16 + original 16 bits.
  // 2 + 2; 4 + 4; 8 + 8; 16 + 16.
  n = n * 2;
  value = value+ ((value << n%32)*(!(n/32)));
  n = n* 2;
  value = value+ ((value << n%32)*(!(n/32)));
  n = n* 2;
  value = value+ ((value << n%32)*(!(n/32)));
  n = n* 2;
  value = value+ ((value << n%32)*(!(n/32)));
  return value;
}
/* 
 * fitsBits - return 1 if x can be represented as an 
 *  n-bit, two's complement integer.
 *   1 <= n <= 32
 *   Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int fitsBits(int x, int n) {
  /*Shifts left then shifts right so that only n bits aren't truncated. Then, the result after these
  two shifts is compared to the original bit pattern to check whether it has the same value or a 
  different value.*/
  // Shifts left and then right by 32-n. Truncate all except the n bits. 
  // This result is compared with the original.
  // This works because values will be lost if x can not be represented in n bits.
  // If x is a non-negative number, it will need an extra bit so that it won't become a negative number after the shifts.
  int shift = (32-n);
  int a = (x << shift) >> shift;
  return a == x;
}
/* 
 * getByte - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: getByte(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 *   Rating: 2
 */
int getByte(int x, int n) {
  // Output is 1 byte. 
  int byte = 8;

  // Offset is n bytes. n << 3 == n * 8.
  int offset = n << 3;

  // Shift left and then right so that only selected byte and offset are left. 
  int shift = 32-(byte+offset);
  int a = (x << shift) >> shift;

  // Shift right to get rid of remaining offset.
  a = a >> offset;

  // Return only desired byte via bit mask.
  return a & 0xff;  
}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  // Check if most significant bit is different.
  // differentSign == 1 means that one is negative, one is positive. 
  int bothDifferent = (x ^ y) >> 31;

  // Get negative value of x.
  int negativeX = ~x + 1;

  // Check if x is negative.
  int x_is_negative = x >> 31;

  // Check if y is greater.
  // If so, y - x should be positive. 
  int y_is_greater = ~((y+negativeX) >> 31);


  return !!(y_is_greater & ~differentSign) | !!(x_is_negative & differentSign);
}
/* 
 * isPositive - return 1 if x > 0, return 0 otherwise 
 *   Example: isPositive(-1) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 3
 */
int isPositive(int x) {
  // Get most significant bit.
  int mostSignificantBit = x >> 31;

  // !mostSignificantBit = 0 if x is negative. 
  // !!x = 0 if x is 0.
  return !!x & !mostSignificantBit;
}
/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3 
 */
int logicalShift(int x, int n) {
  // Arithmethic right shift by n.
  int result = x >> n;
  // Create a mask of n bit length starting from most significant bit. 
  // Invert to create a mask of 32-n bits from least significant bit.
  int mask = ~(-1<<(32 + (~n + 1)));
  return result & mask;
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
  /*The bit equivlaent to 0x8, 1000, shifted to the leftmost position 
  is equivalent to the minimum 2's complement integer.*/
  return 0x8 << 28;
}


int main() {
  printf("bang(3) should equal 0. bang(3) equals %d\n", bang(3));
  printf("bang(0) should equal 1. bang(0) equals %d\n", bang(0));
  printf("\n");

  printf("bitCount(5) should equal 2. bitCount(5) equals %d\n", bitCount(5));
  printf("bitCount(7) should equal 3. bitCount(7) equals %d\n", bitCount(7));
  printf("\n");

  printf("bitOr(6, 5) should equal 7. bitOr(6, 5) equals %d\n", bitOr(6, 5));
  printf("\n");

  printf("bitRepeat(1, 1) should equal -1. bitRepeat(1, 1) equals %d\n", bitRepeat(1, 1));
  printf("bitRepeat(7, 4) should equal 0x77777777. bitRepeat(7, 4) equals %x\n", bitRepeat(7, 4));
  printf("bitRepeat(0x13f, 8) should equal 0x3f3f3f3f. bitRepeat(0x13f, 8) equals %x\n", bitRepeat(0x13f, 8));
  printf("bitRepeat(0xfffe02, 9) should equal 0x10080402. bitRepeat(0xfffe02, 9) equals %x\n", bitRepeat(0xfffe02, 9));
  printf("bitRepeat(-559038737, 31) should equal -559038737. bitRepeat(-559038737, 31) equals %d\n", bitRepeat(-559038737, 31));
  printf("bitRepeat(-559038737, 32) should equal -559038737. bitRepeat(-559038737, 32) equals %d\n", bitRepeat(-559038737, 32));
  printf("\n");

  printf("fitsBits(5,3) should equal 0. fitsBits(5,3) equals %d\n", fitsBits(5,3));
  printf("fitsBits(-4,3) should equal 1. fitsBits(-4,3) equals %d\n", fitsBits(-4,3));
  printf("\n");

  printf("getByte(0x12345678,1) should equal 0x56. getByte(0x12345678,1) equals %x\n", getByte(0x12345678,1));
  printf("getByte(0x1234F678,1) should equal 0xf6. getByte(0x1234F678,1) equals %x\n", getByte(0x1234F678,1));
  printf("\n");

  printf("isLessOrEqual(4,5) should equal 1. isLessOrEqual(4,5) equals %d\n", isLessOrEqual(4,5));
  printf("isLessOrEqual(5,4) should equal 0. isLessOrEqual(5,4) equals %d\n", isLessOrEqual(5,4));
  printf("\n");

  printf("isPositive(-1) should equal 0. isPositive(-1) equals %d\n", isPositive(-1));
  printf("isPositive(1) should equal 1. isPositive(1) equals %d\n", isPositive(1));
  printf("isPositive(0) should equal 0. isPositive(0) equals %d\n", isPositive(0));
  printf("\n");

  printf("logicalShift(0x87654321,4) should equal 0x08765432. logicalShift(0x87654321,4) equals %x\n", logicalShift(0x87654321,4));
  printf("\n");

  printf("tmin() should equal 80000000. tmin() equals %d\n", tmin());
  printf("\n");
}