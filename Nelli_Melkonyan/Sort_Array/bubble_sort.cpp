#include <iostream>
#include <ctime>
#include <cstdlib>


int* init_array(int n)
{
	int* arr = new int[n];
	srand(time(NULL));

	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 10;

	return arr;
}


void print_array(int* a,int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ; ";
	std::cout << std::endl;
}



void sort_array(int *a,int size,char sorting_type)
{
	for(int i=0;  i<size; ++i) 
    {
       int index = i;
       for(int j = i+1; j < size; ++j)
       {
       	  if(sorting_type == 'l')
       	  {
       	  		if(a[j] < a[index]) 
         	 {
            	 index=j;
         	 }
       	  	
		  }else 
		  {
		  	if(sorting_type == 'g')
		  	{
		  		if(a[j] > a[index]) 
          		{
             		index = j;
         		 }
		    }
		  }
          
       }
       int clone = a[i];
       a[i] = a[index];
       a[index] = clone;
    }
}


int main() {
   	int n;
   	std::cout << "enter size of array  ";
   	std::cin >> n;
	
	int* a = init_array(n);
	
	std::cout << "our array is : " << std::endl;
	print_array(a,n);
	
	std::cout <<  "array sorting  by greater :"<<std::endl;
    sort_array(a,n,'g');
    print_array(a,n);
    
    std::cout<<"array sorting by less :"<<std::endl;
    sort_array(a,n,'l');
    print_array(a,n);
    
	return 0;
}
