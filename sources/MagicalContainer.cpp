#include <iterator>
#include <cmath>
#include "MagicalContainer.hpp"

namespace ariel
{
    MagicalContainer::MagicalContainer()
    {
        this->back = true;
    }

    MagicalContainer::~MagicalContainer()
    {
        this->Source_list.clear();
        this->Sorted_list.clear();
        this->Prime_list.clear();
        this->Cross_list.clear();
    }

    void MagicalContainer::addElement(int element)
    {
        Source_list.push_back(element);
        Sorted_list.push_back(element);
        Prime_list.push_back(element);
        Cross_list.push_back(element);
    }

    void MagicalContainer::removeElement(int element)
    {
        // Remove the element from the Source_list
        Source_list.erase(std::remove(Source_list.begin(), Source_list.end(), element), Source_list.end());

        // Remove the element from the Sorted_list
        Sorted_list.erase(std::remove(Sorted_list.begin(), Sorted_list.end(), element), Sorted_list.end());

        // Remove all occurrences of the element from the Prime_list
        Prime_list.erase(std::remove(Prime_list.begin(), Prime_list.end(), element), Prime_list.end());

        // Remove all occurrences of the element from the Cross_list
        Cross_list.erase(std::remove(Cross_list.begin(), Cross_list.end(), element), Cross_list.end());
    }

    bool MagicalContainer::isPrime(int num)
    {
        if (num < 2)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int MagicalContainer::size() 
    {
        return Source_list.size();
    }
 

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container)
    {
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
    {
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*() const
    {
        return 0;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const
    {
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const
    {
        MagicalContainer container;
        AscendingIterator ans(container);
        return ans;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container)
    {
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*() const
    {
        return 0;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const
    {
        MagicalContainer container;
        MagicalContainer::SideCrossIterator ans(container);
        return ans;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
    {
        return *this;
    }
       MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container)
    {
        this->p_iter = container.Prime_list.begin();
        this->p_ptr = &container.Prime_list;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {
        this->p_iter++;
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
    {
        return this->p_iter == other.p_iter;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    int MagicalContainer::PrimeIterator::operator*() const
    {
        return 0;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const
    {
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const
    {
        MagicalContainer container;
        MagicalContainer::PrimeIterator ans(container);
        return ans;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
    {
        return *this;
    }
}