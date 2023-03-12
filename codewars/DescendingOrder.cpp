#include <iostream>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  std::string ans = std::to_string(a); 
  std::sort(ans.begin(),ans.end()); // sort nums from low to high
  std::reverse(ans.begin(), ans.end()); // sort string from high to low
  return std::stoull(ans); // return long long ( string to long long )
}
