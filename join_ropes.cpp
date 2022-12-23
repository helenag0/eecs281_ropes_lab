/* 
 * join_ropes.cpp 
 * Univeristy of Michigan, Ann Arbor
 * EECS 281 Lab 4 Written.
 * SUBMIT ONLY THIS FILE TO GRADESCOPE.
 */

// Common #includes for convience.
// No need to use them. 
// Remove any of them if you want.
//#include <algorithm>
#include <cassert>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "join_ropes.h"

using namespace std;

int join_ropes(const vector<int>& rope_lengths) {
  
//    vector<int> smallest;
    int total = 0;
    int curr = 0;
    sort(rope_lengths.begin(), rope_lengths.end());
    for(int i = 0; i < rope_lengths.size(); i += 2) {
        curr = (rope_lengths[i] + rope_lengths[i+1]);
        total += curr;
    }
    return total;
    
}
 
// Driver program to test above functions
int main()
{
    vector<int> ropes = {10, 5, 8, 11};
    std::cout << "Total cost for connecting ropes is " << join_ropes(ropes);
    return 0;
}
