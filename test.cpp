#include "pch.h"
#include "gtest/gtest.h"
#include "sort.h"
#include <vector>

TEST(GnomeSortTest, EmptyArray) {
    std::vector<int> arr;
    gnome_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(GnomeSortTest, SingleElement) {
    std::vector<int> arr = { 42 };
    gnome_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

TEST(GnomeSortTest, AlreadySortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    gnome_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(GnomeSortTest, ReverseSortedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    gnome_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(GnomeSortTest, ArrayWithDuplicates) {
    std::vector<int> arr = { 3, 1, 2, 3, 1 };
    gnome_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 3}));
}

TEST(GnomeSortTest, NegativeAndPositiveNumbers) {
    std::vector<int> arr = { -5, 3, -1, 0, 2, -3 };
    gnome_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -3, -1, 0, 2, 3}));
}
