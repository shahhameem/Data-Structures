template <typename T>
class Algo {
    public:
    const int lsearch(T arr[], int size, T item)
    {
    	for (int i = 0; i < size; ++i)
    		if (arr[i] == item)
    			return i;
    	return -1;
    }

    const int bsearch(T arr[], T item)
    {
    	int beg, mid, end;
    	while(beg < end)
    	{
    		mid = (beg + end) / 2;
    		if(item < arr[mid])
    			end = mid - 1;
    		else if(item > arr[mid])
    			beg = mid + 1;
    		else 
    			return mid;
    	}
    	return -1;
    }
};