#include <iostream>
#include <vector>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos


void print(vector<int>& v) {
  cout << "[";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << "]" << endl;
}

int main() {
  Solution S;
  vector<int> result;
  vector<int> v1{4,3,2,7,8,2,3,1};
  cout << "[5,6]? ";
  result = S.findDisappearedNumbers(v1);
  print(result);

  std::cout << "Hello World!\n";
}