#include "supervisor.h"

Supervisor::Supervisor(string theName,
		float thePayRate,
		string thedepartment)
	:Manager(theName, thePayRate, true)
{
  department = thedepartment;
}

string Supervisor::getDept() const
{
  return department;
}

void Supervisor::setDept(string thedepartment)
{
  department = thedepartment;
}





