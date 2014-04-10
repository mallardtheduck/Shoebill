#include "../core/shoebill.h"
#include "../core/core_api.h"

int main(){
	shoebill_control_t control={0};

	if(!shoebill_initialize(&control)){
		printf("Fail! %s\n", control.error_msg);
	}
	shoebill_start();
	return 0;
}
