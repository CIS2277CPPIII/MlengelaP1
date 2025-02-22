/********************************************************************
* Program: Class in C++III
* Programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: January 19th 2022
* Purpose: Person Class
*********************************************************************/

#include <iostream>
#include "person.h"

int main()
{
   Date theDate(7, 19, 1966, "birthday");

   Person p1;
   Person p2("Johnny", theDate);
   Person p3("Johnny", 7, 19, 1966);

   std::cout << p1.GetFullDesc() << "\n";
   std::cout << p2.GetFullDesc() << "\n";
   std::cout << p3.GetFullDesc() << "\n";

   p2.SetName("Jenny");
   std::cout << p2.GetName() << "\n";

   Date theOtherDate(1, 1, 2000, "birthday2");

   p2.SetBirthday(theOtherDate);
   std::cout << p2.GetNameAge() << "\n";

   p2.SetBirthday(20, 20, 2020);
   p2.SetBirthday(1, 1, 2001);
   std::cout << p2.GetNameAge() << "\n";

   Date bday = p3.GetBirthDay();

   std::cout << bday.GetFormattedDate() << "\n";

   Person pa("a", 1, 2, 2000);
   Person pb("b", 1, 2, 2000);
   Person pc("a", 1, 1, 2000);

   if(pa < pb)
      std::cout << "pa < pb\n";

   else
      std::cout << "pa > pb\n";

   if(pa < pc)
      std::cout << "pa < pc\n";

   else
      std::cout << "pa > pc\n";
}
