#include <iostream>
#include <ctime>
#include <cstdlib>

int index(int* array,int begin,int end,int element)
{
	//std::cout<<std::endl;
	//std::cout<<begin<<" "<<end<<std::endl;
	if(begin == (end-1))
	{
		if(element <= array[begin])
		{
			return begin;
		}else
		if(element >= array[end])
		{
			return end+1;
		}else
		{
			return end;
		}
	}else
	{
		
		int m = (end + begin)/2;
		if(element == array[m])
		{
			
			return m+1;
		}
		if(element > array[m])
		{
			
			index(array,m,end,element);
		}
		if(element < array[m])
		{
			index(array,begin,m,element);
		}
	}
}

int* init_array(int n)
{
	int* arr = new int[n];
	srand(time(NULL));

	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 100;

	return arr;
}

void shift(int* array, int begin, int end)
{
	for(int i=begin+2;i<=end-1;++i)
	{
		int temp=array[i];
		array[i]=array[i-1];
	}
}

void print_array(int* a,int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
	std::cout << std::endl;
}


int main() {
   	int n=6;
   //	std::cout << "enter size of array  ";
   	//std::cin >> n;
	
//	int* a = init_array(n);
int a[n]={0,2,4,6,7,2};
	
	std::cout << "our array is : " << std::endl;
	print_array(a,n);
	
	std::cout <<  "array sorting  by greater :"<<std::endl;
    
	
	for(int i=2;i<n;++i)
	{
		int temp=a[i];
		int shift_index=index(a,0,i-1,a[i]);
		std::cout<<shift_index;
		shift(a,shift_index,i);
		a[shift_index]=temp;
	//	print_array(a,n);
	}
	
    print_array(a,n);
	return 0;
}
