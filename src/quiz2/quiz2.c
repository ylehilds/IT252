/*
 * quiz2.c
 *
 *  Created on: Sep 28, 2010
 *      Author: lehilds
 */

/*
    Name:
*/

#include <stdio.h>

int bitCount (unsigned x);

int main (int argc, char* argv[])
{
    return 0;
}

int bitCount (unsigned x)
{
	int val=0;
	int i =0;
	while (i<32)
	{
		val = (val <<1) | (x & 0x1);
		x >>=1;
		i++;
	}
	return val;

}