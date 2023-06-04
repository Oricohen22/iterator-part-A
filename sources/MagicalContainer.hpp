#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>
using namespace std;
namespace ariel
{
    class MagicalContainer
    {
    private:
        vector<int> Source_list;
        vector<int> Sorted_list;
        vector<int> Prime_list;
        vector<int> Cross_list;
        bool back;
        bool isPrime(int num);

    public:
        MagicalContainer();
        ~MagicalContainer();
        void addElement(int element);
        void removeElement(int element);
        int size();
       

        class AscendingIterator
        {
        private:
            std::set<int>::iterator a_iter;
            std::set<int> *a_ptr;

        public:
            AscendingIterator(MagicalContainer &container);
            AscendingIterator &operator++();
            bool operator>(const AscendingIterator &other) const;
            bool operator<(const AscendingIterator &other) const;
            bool operator==(const AscendingIterator &other) const;
            bool operator!=(const AscendingIterator &other) const;
            int operator*() const;
            AscendingIterator begin() const;
            AscendingIterator end() const;
            AscendingIterator &operator=(const AscendingIterator &other);
        };

        class SideCrossIterator
        {
        private:
            std::vector<int>::iterator c_iter;
            std::vector<int> *c_ptr;

        public:
            SideCrossIterator(MagicalContainer &container);
            SideCrossIterator &operator++();
            bool operator>(const SideCrossIterator &other) const;
            bool operator<(const SideCrossIterator &other) const;
            bool operator==(const SideCrossIterator &other) const;
            bool operator!=(const SideCrossIterator &other) const;
            int operator*() const;
            SideCrossIterator begin() const;
            SideCrossIterator end() const;
            SideCrossIterator &operator=(const SideCrossIterator &other);
        };
        class PrimeIterator
        {
        private:
            std::vector<int>::iterator p_iter;
            std::vector<int> *p_ptr;

        public:
            PrimeIterator(MagicalContainer &container);
            PrimeIterator &operator++();
            bool operator>(const PrimeIterator &other) const;
            bool operator<(const PrimeIterator &other) const;
            bool operator==(const PrimeIterator &other) const;
            bool operator!=(const PrimeIterator &other) const;
            int operator*() const;
            PrimeIterator begin() const;
            PrimeIterator end() const;
            PrimeIterator &operator=(const PrimeIterator &other);
        };
    };

}