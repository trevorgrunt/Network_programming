#include <stdio.h>
#include <stdlib.h>

int main()
{
	int name = system("uname -n");
	int ipv4 = system("ip -4 a");
	int ipv6 = system("ip -6 a");
	int mac = system("ip -o link show eth0");
	return 0;
}


