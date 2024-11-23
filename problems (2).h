

void days2years(int &days, int &years) {
   int year=*days/365;
   int day=*days%365;
  cout<<"Years:"<<year<<"Days:"<<days<<endl;
}
// Problem 2
double func(double *x,double *y) {
double y=(11*pow(x,3))/3+5;
return y;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
    int m=14400-hour*60-min;
    return m;
}

// Problem 4
double probability(int *y,int *w) {
   double prob;
   if(y>w){prob=(6-y)/6}
   if(y<w){prob=(6-w)/6}
   return prob;
}

// Problem 5
int presses(int *x) {
    int k;
    int t;
    while(t!=x){
      for(k=1;k<10;k++){
        for(int i=1;i<=10000;i+10*k){
          t=i+10*k;
          k+=1;
        }
      }
    }
    return k;
}

