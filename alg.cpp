int cbinsearch(int* arr, int& n, int value)
{
	int left = 0;
	int right = Size - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == n)
		{
			value++;
			for (int i = mid + 1; arr[i] == n; i++)
			{
				value++;
			}
			for (int j = mid - 1; arr[j] == n; j--)
			{
				value++;
			}
			break;
		}
		if (arr[mid] > n)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return value;
}
