#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char const *argv[]) {
	int pid;
	int w_time, r_time, err_number;

	//child
	if ((pid = fork()) == 0) 
		exec(argv[1], argv + 1);
	//parent
	else {
		err_number = waitx(&w_time, &r_time);
		printf(1, "w_time: %d\n", w_time);
		printf(1, "r_time: %d\n", r_time);
	}
	exit();
}