#include <stdio.h>
#include <sys/sysinfo.h>


int main() {
	int num_cores = get_nprocs_conf();
	printf("This machine has %d core(s).\n", num_cores);
	return num_cores;
}

