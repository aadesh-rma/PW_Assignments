// Find the error

double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}

// here the error is :
// the function has accepts an array as a parameter, but this code is sending balance[0] as an argument., which is an integer.