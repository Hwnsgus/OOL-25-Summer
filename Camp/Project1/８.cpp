#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

// 추가로 필요하다고 생각하는 헤더들은 여기다가 자유롭게 추가할 것
using namespace std;

vector<int> removeDuplicates(const vector<int>& v) {
    // 중복을 제거하고 순서를 유지한 벡터 반환
    // 예: [1,3,2,3,1,4] -> [1,3,2,4]

    vector<int> result;
    unordered_set<int> seen;

    for (int num : v)
    {
        if (seen.find(num)==seen.end())
        {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;

}

int main() {
    vector<int> nums = { 1, 3, 2, 3, 1, 4, 2, 5 };
    vector<int> result = removeDuplicates(nums);

    cout << "Result: ";
    for (int n : result) {
        cout << n << " ";
    }
    cout << "\n"; // 1 3 2 4 5
}