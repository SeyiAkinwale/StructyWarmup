//max value
#include <iostream>
#include <vector>>
#include <limits>
using namespace std;

float maxValue(vector<float> numbers)
{
  float max = -numeric_limits<float>::infinity();
  for(auto num :numbers)
    if(num>max) max = num;
  return max;
}

int main()
{
  std::vector<float> numbers1{ 10, 5, 40, 40.3 };

  std::vector<float> numbers2{ -5, -2, -1, -11 };

  std::vector<float> numbers3{ 42 };

  std::vector<float> numbers4{ 1000, 8 };

  std::vector<float> numbers5{ 1000, 8, 9000 };

  std::vector<float> numbers6{ 2, 5, 1, 1, 4 };
  cout<<endl<<maxValue(numbers1);
  cout<<endl<<maxValue(numbers2);
  cout<<endl<<maxValue(numbers3);
  cout<<endl<<maxValue(numbers4);
  cout<<endl<<maxValue(numbers5);
  cout<<endl<<maxValue(numbers6);

}