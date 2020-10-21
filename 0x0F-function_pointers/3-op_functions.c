#include "3-calc.h"
/**
 *op_add-adds two numbers.
 *@a:first operand.
 *@b:Second operand.
 *Return:Sum of 2 numbers.
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}
/**
 *op_sub-subracts b from a.
 *@a:First operand.
 *@b:Second operand.
 *Return: result of b subracted from a.
 */
int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);
	return (diff);
}
/**
 *op_mul-Multiplies 2 numbers.
 *@a:First operand.
 *@b:second operand.
 *Return:Product of a & b.
 */
int op_mul(int a, int b)
{
	int product;

	product = (a * b);
	return (product);
}
/**
 *op_div-Divides a by b.
 *@a:First operand.
 *@b:Second operand.
 *Return:Quotient of a divided by b.
 */
int op_div(int a, int b)
{
	int quotient;

	quotient = (a / b);
	return (quotient);
}
/**
 *op_mod - performs a modulus b.
 *@a:First operand.
 *@b:second operand.
 *Return: a moduls b
 */
int op_mod(int a, int b)
{
	int modulus;

	modulus = (a % b);
	return (modulus);
}
