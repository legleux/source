#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;
int main(){
	std::cout << "rippled version 1.10.0-b1" << std::endl;
	while(1){
		time_t my_time = time(NULL);
		std::cout << ctime(&my_time) << std::endl;
		std::this_thread::sleep_for(1s);
	}

	return 0;
}
