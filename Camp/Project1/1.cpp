#include <iostream>
#include <vector>
using namespace std;

long long sum(const vector<int>& v) {
	long long total_sum = 0;

	for (int i : v)
	{
		total_sum += i;
	}
	return total_sum;
}

int main() {
    vector<int> v{ 3, 6, 7, 9 };
    cout << sum(v) << "\n"; // 25
}