#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace ariel;

TEST_SUITE("MagicalContainer Iterator Tests") {
    TEST_CASE("AscendingIterator Test") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(7);
        container.addElement(3);
        container.addElement(1);

        SUBCASE("Iterate through elements in ascending order") {
            MagicalContainer::AscendingIterator a_iter(container);
            CHECK(a_iter.operator*() == 1);
            
        }

        SUBCASE("Check comparison operators") {
            MagicalContainer::AscendingIterator a_iter1(container);
            MagicalContainer::AscendingIterator a_iter2(container);

            CHECK_FALSE(a_iter1.operator==(a_iter2));
            CHECK(a_iter1.operator!=(a_iter2));
            CHECK_FALSE(a_iter1.operator<(a_iter2));
            CHECK_FALSE(a_iter1.operator>(a_iter2));

            ++a_iter1;
            ++a_iter2;

            CHECK(a_iter1.operator==(a_iter2));
            CHECK_FALSE(a_iter1.operator!=(a_iter2));
            CHECK_FALSE(a_iter1.operator<(a_iter2));
            CHECK_FALSE(a_iter1.operator>(a_iter2));
        }
    }

    TEST_CASE("SideCrossIterator Test") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(7);
        container.addElement(3);
        container.addElement(1);

        SUBCASE("Iterate through elements in side-to-cross order") {
            MagicalContainer::SideCrossIterator c_iter(container);
            CHECK(c_iter.operator*() == 5);
            
        }

        SUBCASE("Check comparison operators") {
            MagicalContainer::SideCrossIterator c_iter1(container);
            MagicalContainer::SideCrossIterator c_iter2(container);

            CHECK_FALSE(c_iter1.operator==(c_iter2));
            CHECK(c_iter1.operator!=(c_iter2));
            CHECK_FALSE(c_iter1.operator<(c_iter2));
            CHECK_FALSE(c_iter1.operator>(c_iter2));

            ++c_iter1;
            ++c_iter2;

            CHECK(c_iter1.operator==(c_iter2));
            CHECK_FALSE(c_iter1.operator!=(c_iter2));
            CHECK_FALSE(c_iter1.operator<(c_iter2));
            CHECK_FALSE(c_iter1.operator>(c_iter2));
        }
    }

    TEST_CASE("PrimeIterator Test") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(7);
        container.addElement(3);
        container.addElement(1);

        SUBCASE("Iterate through prime elements") {
            MagicalContainer::PrimeIterator p_iter(container);
            CHECK(p_iter.operator*() == 2);
        }

        SUBCASE("Check comparison operators") {
            MagicalContainer::PrimeIterator p_iter1(container);
            MagicalContainer::PrimeIterator p_iter2(container);

            CHECK_FALSE(p_iter1.operator==(p_iter2));
            CHECK(p_iter1.operator!=(p_iter2));
            CHECK_FALSE(p_iter1.operator<(p_iter2));
            CHECK_FALSE(p_iter1.operator>(p_iter2));

            ++p_iter1;
            ++p_iter2;

            CHECK(p_iter1.operator==(p_iter2));
            CHECK_FALSE(p_iter1.operator!=(p_iter2));
            CHECK_FALSE(p_iter1.operator<(p_iter2));
            CHECK_FALSE(p_iter1.operator>(p_iter2));
        }
    }
}
