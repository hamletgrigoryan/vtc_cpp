#include <iostream>
#include <ctime>
#include <cstdlib>


int* init_array(int n)
{
	int* arr = new int[n];
	srand(time(NULL));

	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 100;

	return arr;
}


void print_array(int* a,int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
	std::cout << std::endl;
}



void merge(int s[], int b[], int nb, int c[], int nc){
  int i = 0;
  int j = 0;
  while(i<nb||j<nc){
    if (i<nb && j<nc){
      if(b[i]<=c[j]){
        s[i+j] = b[i];
        ++i;
      }
      else{
        s[i+j] = c[j];
        ++j;
      }
    }
    else if(i<nb){
      s[i+j] = b[i];
      ++i;
    }
    else if(j<nc){
      s[i+j] = c[j];
      ++j;
    }
  }
}


void mergeSort(int a[], int n)
{
  if(n>1){
    int m = n/2;
    int r = n-m;
    int* b = new int[m];
    int* c = new int[r];
    for(int i=0;i<n;++i){
      if(i<m){
        b[i] = a[i];
      }
      else{
        c[i-m] = a[i];
      }
    }
    mergeSort(b,m);
    mergeSort(c,r);
    merge(a, b, m, c, r);
  }
}
 




int main() {
   	int n=10000;
 
	
	int* a = init_array(n);
	
	
	std::cout << "our array is : " << std::endl;
	print_array(a,n);
	
	
	
	
	
	std::cout <<  "array sorting  by greater :"<<std::endl;
    mergeSort(a,n);
    print_array(a,n);
    
 
    
	return 0;
}
