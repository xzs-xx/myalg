#pragma once
class  __declspec(dllexport)fastsortList
{
private :
	template <class T>
	__declspec(dllexport)int sort(T a[], int p, int r, bool(*cmp)(T, T));
public:
	template <class T>
	__declspec(dllexport)void quickSort(T a[], int p, int r, bool (*cmp)(T, T));
	template <class T>
	__declspec(dllexport)void printsort(T a[],int j);
};

template<class T>
inline int fastsortList::sort(T a[], int p, int r,bool (*cmp)(T,T))
{
	T key = a[r];
	int i = p - 1;
	int j = p;
	while (j < r)
	{
		if (cmp(key, a[j]))
		{
			i++;
			T b = a[i];
			a[i] = a[j];
			a[j] = b;
		}
		j++;
	}
	T b = a[i + 1];
	a[i + 1] = a[r];
	a[r] = b;
	return i + 1;
}

template<class T>
inline void fastsortList::quickSort(T a[], int p, int r, bool (*cmp)(T, T))
{
	int position = 0;
	if (p < r)
	{
		position = sort(a, p, r, cmp);
		quickSort(a, p, position - 1,cmp);
		quickSort(a, position + 1, r,cmp);
	}
}

template<class T>
inline void fastsortList::printsort(T a[],int j)
{
	int i = 0;
	while (i < j)std::cout << a[i++] << std::endl;
}
