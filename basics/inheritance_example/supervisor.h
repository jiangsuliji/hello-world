#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include <string>
#include "manager.h"

using namespace std;

class Supervisor : public Manager {
public:
  Supervisor(string theName,
		  float thePayRate,
		  string thedepartment);
   
  string getDept() const;
  void setDept(string thedepartment);
  
protected:
  string department;

};

#endif 

