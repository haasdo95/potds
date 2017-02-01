/* Problem of the Day #2 */

#include <ctime>
#include <iostream>

using namespace std;

int main() {
  time_t sec_since_epoch = time(nullptr);
  int years = sec_since_epoch/(365*60*60*24);
  int days = sec_since_epoch/(60*60*24);
  int hours = sec_since_epoch/(60*60);
  cout << "Hours: " << hours << endl << "Days: " << days << endl << "Years: " << years << endl;
  return 0;
}
