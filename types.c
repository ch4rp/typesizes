/*	
Bu program, çalıştırıldığı sistemde sayı türlerinin sınırlarını gösterir.
This program shows the limits of number types on the system on which it is run.
*/

#include <stdio.h>

char ch;
short sh;
int in;
long ln;
long long ll;

float fl;
double db;
long double ldb;

int main(void)
{
	unsigned char uch;
	unsigned short ush;
	unsigned int uin;
	unsigned long uln;
	unsigned long long ull;

	/*
	ch--;
        sh--;
        in--;
        ln--;
        ll--;

	uch |= ch;
	ush |= sh;
	uin |= in;
	uln |= ln;
	ull |= ll;
	*/

	uch = --ch;
	ush = --sh;
        uin = --in;
        uln = --ln;
        ull = --ll;

	printf( "unsigned char: 0, %u\n"
		"unsigned short: 0, %u\n"
		"unsigned int: 0, %u\n"
		"unsigned long: 0, %lu\n"
		"unsigned long long: 0, %llu\n\n", uch, ush, uin, uln, ull);

	uch >>= 1;
	ch = uch;
	ch++;

	ush >>= 1;
	sh = ush;
	sh++;

	uin >>= 1;
	in = uin;
	in++;

	uln >>= 1;
	ln = uln;
	ln++;

	ull >>= 1;
	ll = ull;
	ll++;

	printf( "char: %d, %u\n"
		"short: %d, %u\n"
		"int: %d, %u\n"
		"long: %ld, %lu\n"
		"long long: %lld, %llu\n", 
		ch, uch, 
		sh, ush, 
		in, uin, 
		ln, uln, 
		ll, ull );

	/*
	I haven't found a clever method yet for real number types.
	*/

	return 0;
}
