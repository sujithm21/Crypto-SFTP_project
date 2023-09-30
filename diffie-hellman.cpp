#include<bits/stdc++.h>
using namespace std;

// Power function to return value of a ^ b mod P
long long int power(long long int a, long long int b,long long int P){
	if (b == 1)
		return a;
	else
		return (((long long int)pow(a, b)) % P);
}

int main(){
	long long int P, G, x, a, y, b, ka, kb;
    //public key available
	P = 23;
	cout << "The value of P : " << P << endl;

    //Primitive root of the public key
	G = 9;
	cout << "The value of G (primitive root) : " << G << endl;

	// Alice will choose the private key a
	// a = 4;
	cout << "Alice, please choose a private key, a(a < P) : ";
    cin>> a ;

	x = power(G, a, P);

	// Bob will choose the private key b
	// b = 3;
	cout << "Bob, Please choose a private key, b(b < P) : ";
    cin >> b;

	y = power(G, b, P);

	ka = power(y, a, P); // Secret key for Alice
	kb = power(x, b, P); // Secret key for Bob
	cout << "Secret key for the Alice is : " << ka << endl;

	cout << "Secret key for the Bob is : " << kb << endl;

	return 0;
}