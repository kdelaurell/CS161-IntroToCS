/*************************************
 * Author: Kyle De Laurell
 * Date: 11/24/2015
 * Description: This is the IntSet class
 * specification file.
 * ***********************************/

#ifndef IntSet_HPP
#define IntSet_HPP

class IntSet
{
   private:
      int *intArray;
      int arraySize;
      int numValues;

   public:
      IntSet();
      ~IntSet();
      bool isEmpty();
      int size() const;
      bool contains(int) const;
      void add(int);
      void remove(int);
      void addAll(const IntSet&);
      void removeDifferent(const IntSet&);
      void removeSame(const IntSet&);
};

#endif
