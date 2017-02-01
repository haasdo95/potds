#ifndef _PET_H
#define _PET_H

#include <string>

using namespace std;

class Pet {
 public:
  // Declare your constructors here!
  Pet(): name{"Rover"}, birth_year{2017}, type{"dog"}, owner_name{"Cinda"} {}

  Pet(string name, int birth_year, string type, string owner_name):
      name{name}, birth_year{birth_year}, type{type}, owner_name{owner_name} {}

  // Other member functions
  void setName(string newName);
  void setBY(int newBY);
  void setType(string newType);
  void setOwnerName(string newName);
  string getName();
  int getBY();
  string getType();
  string getOwnerName();

 private:
  string name;
  int birth_year;
  string type;
  string owner_name;
};

#endif
