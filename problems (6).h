#include <vector>
using namespace std;
void delete11 ( vector < int > & v ) {
    for (int i = 0; i < v.size();) {
        if (v[i]%11==0) {
            v.erase(v.begin()+i);
        }else{++i;}
    }
}
void insertMany ( vector < int > &v , int a , int b ) {
    if(v.size()%2==0) {
        for(int s=0;s<a;s++){
            v.insert(v.begin()+v.size()/2, b);
        }
    }
    if(v.size()%2==1) {
        for(int d=0;d<a;d++){
            v.insert(v.begin()+v.size()/2+1, b);
        }
    }
    for(int e:v) {
        cout<<e<<" ";
    }
}

int* allocateAndSet(int a, int b){

    if (a > b) {return nullptr;
    }
    int* arr=new int[b-a+1];

    for (int i = 0; i < b-a+1; ++i) {
        arr[i]=a+i;
    }
    if(b>a) {
        for(int i=0;i<=b-a;++i) {
            cout<<arr[i]<<" ";
        }
    }
  return arr;
}
void deallocate(int* arr) {
    delete[] arr;
    arr=nullptr;
}
int*reallocate(int *arr, int N, int n) {
    if(n>=N){
      return nullptr;}
    int newSize=N-n;
    int* newArr=new int[newSize];
    for (int i = 0; i < newSize; ++i) {
      newArr[i]=arr[i+n];
    }
    delete[] arr;
    
    return newArr;
}



int **transposed(int **arr, int n, int m) {
    int **newArr = new int*[m];
    for(int i=0;i<m;++i) {
      newArr[i]=new int[n];
    }

    for(int i=0;i<n;++i) {
      for(int j=0;j<m;++j) {
        newArr[i][j]=arr[i][j];
    }
    }
    return newArr;
}
void deallocateMatrix(int**& matrix, int rows) {
    for(int i=0;i<rows;++i) {
      delete[] matrix[i];
     }
     delete[] matrix;
     matrix=nullptr;
}

