#include<stdio.h>
void main()
{
	/* short int
	signed range_ -2^15 to (2^15)-1
	unsigned range_ 0 to (2^16)-1 */
	
	short int a=-32768,b=32767;
	unsigned short int c=65535;
	printf("a=%hd b=%hd and c=%hu\n",a,b,c);
	
		/* int
	signed range_ -2^31 to (2^31)-1
	unsigned range_ 0 to (2^32)-1 */

	int d=-2147483648,e=2147483647;
unsigned int f=4294967295;
printf("d=%d e=%d and f=%u\n",d,e,f);

	/* long int
	signed range_ -2^31 to (2^31)-1
	unsigned range_ 0 to (2^32)-1 */
	

long int g=-2147483648,h=2147483647;
unsigned long int i=4294967295;
printf("g=%ld h=%ld and i=%lu\n",g,h,i);

	/* long long int
	signed range_ -2^63 to (2^63)-1
	unsigned range_ 0 to (2^64)-1 */

long long int j=-9223372036854775808,k=9223372036854775807;
unsigned long long int l=18446744073709551615;
printf("j=%lld k=%lld and i=%llu",j,k,l);

}

