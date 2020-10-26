#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char **argv)
{
	int pid, new_priority;
	new_priority = atoi(argv[1]);
	pid = atoi(argv[2]);
	set_priority(pid, new_priority);
	exit();
}
