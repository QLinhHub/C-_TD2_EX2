#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
template <typename T, typename A, template <typename X, typename Y> class C>
std::ostream &operator<<(std::ostream &os, const C<T,A> &container)
{
 if(!container.empty())
   std::copy(container.begin(), container.end(), std::ostream_iterator<T>(os, " "));
 return os;
}

int main(){
	vector<int> v = {3, 4, 6};
	list<string> ls = {"dud", "uie", "oiu"};
	cout << v << endl << ls;
	return 0;
}
