#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <iostream>

struct Student {
  int assigns, mt, final;
  float computeGrade() const;
  explicit Student(int assigns = 0, int mt = 0, int final = 0);
  Student(const Student &other);

  static int numInstances;
};

#endif
