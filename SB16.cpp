#include <time.h>
#include <iostream>

struct tm buf;
time_t t = time(NULL);


int main() {
	localtime_s(&buf, &t);
	//std::cout << buf.tm_mday % N;
	const int N = 10;
	int a[N][N];
	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = i + j;
			std::cout << a[i][j]<<"\t";
		}
		std::cout << std::endl;
	}

	for (int j = 0; j < N; j++) {
		sum = sum + a[buf.tm_mday % N][j];
	}

	std::cout << sum;
}