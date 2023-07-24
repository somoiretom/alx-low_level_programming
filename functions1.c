#include "main.h"

/*
 * Print Unsigned Number
 * print_unsigned - Prints an unsigned number
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates active flag
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: the no of chars printed
 */
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision, int size)
{
	int k = BUFF_SIZE-2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[k--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[k--] = (num % 10) + '0';
		num /= 10;
	}

	k++;

	return (write_unsgned(0, k, buffer, flags, width, precision, size));
}

/**print unsigned number in octal
 * print_octal - Prints an unsigned number in octal notation
 * @types: list of arg
 * @buffer: Buffer array
 * @flags: calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: size specifier
 * Return: no of chars printed
 */
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int k = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[k--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[k--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags &  F_HASH && init_num != 0)
		buffer[k--] = '0';

	k++;

	return (write_unsgned(0, k, buffer, flags, width, precision, size));
}

/**print unsigned number in hexadecimal
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: list of arg
 * @buffer: Buffer array to handle
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars to be printed
 */
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer, flags, 'x', width, precision, size));
}

/** upper hexadecimal
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * #types: list of arg
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: no of chars printed
 */
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer, flags, 'X', width, precision, size));
}

/**print hexx num in low or upper
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: no of chars to be printed
 */
int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size)
{
	int k = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[k--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[k--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[k--] = flag_ch;
		buffer[k--] = '0';
	}

	k++;

	return (write_unsgned(0,k,buffer,flags,width,precision,size));
}
