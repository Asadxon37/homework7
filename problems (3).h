#include <string>

void days2years(int &days, int &years) {
   years=days/365;
   days=days%365;
}
// Problem 2
double func(double *x,double *y) {
    double *y=(11*(*x)*(*x)*(*x))/3.0+5;
    return *y;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
    int m=1440-(*hour)*60-(*min);
    return m;
}

// Problem 4
double probability(int *y,int *w) {
   double prob;
   while(y>0&&y<7&&w>0&&w<7){
     if(*y>*w){prob=(7-(*y))/6;}
     if(*y<*w){prob=(7-(*y))/6;}
     return prob;

  }
}

// Problem 5
int presses(int *x) {
    string num=to_string(*x);
    int digit=num[0]-'0';
    int length=num.length();
    int count=0;
    for(int i=1;i<digit;++i){
      count+=1+2+3+4;}
    for(int i=1;i<length;++i){
      count+=i;

}
return count;}
