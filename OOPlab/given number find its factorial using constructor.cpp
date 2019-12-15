#include <iostream> using namespace std; class factorial { public:
int f=1;
factorial (int n) {
cout<<"The factorial of "<<n<<" is : "; for (int i=n; i>0; i--) {
f *= i; cout<<i; if (i==1)
cout<<" = "; else
cout<<" * ";
}
cout<<f<<endl;
}
};
int main() { int value;
cout<<"Enter your number : "; cin>>value;
factorial fact(value); return 0;
}

