
    int pi = partition(arr, l, r);

    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
