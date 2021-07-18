#include <iostream>
#include <thread>

using namespace std;

int main() {
	thread t1 = thread([](const string& strMsg){cout << strMsg << endl; }, "hello");

	t1.join();

	return 0;
}