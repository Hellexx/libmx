#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    unsigned start = 0;
    unsigned end = size - 1;
    unsigned mid = (start + end) / 2;

    while (start <= end)
    {
        (*count)++;

        if (mx_strcmp(arr[mid], s) == 0)
            return mid;

        else if (mx_strcmp(arr[mid], s) < 0)
            start = mid + 1;

        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    *count = 0;
    return -1;
}

int BinarySearch(int *arr, size_t size, int x)
{
    unsigned start = 0;
    unsigned end = size - 1;
    unsigned mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] == x)
            return mid;

        // if (arr[mid] < x)
        //     start = mid + 1;

        // if (arr[mid] > x)
        //     end = mid - 1;

        start = (arr[mid] < x) * (mid + 1);
        end = (arr[mid] > x) * (mid - 1);

        mid = (start + end) / 2;
    }

    mx_printerr("Element not found");
    return -1;
}
