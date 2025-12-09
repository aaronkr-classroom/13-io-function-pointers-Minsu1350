#pragma once
// my_math.h

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Div(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*));

// my_math.lib

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a); // => MyAbs(a)
	}
	if (NULL != pb) {
		(*pb)(&b); // => MyAbs(b)
	}
	return a + b;
}


int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a); // => MyAbs(a)
	}
	if (NULL != pb) {
		(*pb)(&b); // => MyAbs(b)
	}
	return a - b;
}


int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a); // => MyAbs(a)
	}
	if (NULL != pb) {
		(*pb)(&b); // => MyAbs(b)
	}
	return a * b;
}


int Div(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a); // => MyAbs(a)
	}
	if (NULL != pb) {
		(*pb)(&b); // => MyAbs(b)
	}
	return a / b;
}


int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*)) {
	if (NULL != pa) {
		(*pa)(&a); // => MyAbs(a)
	}
	if (NULL != pb) {
		(*pb)(&b); // => MyAbs(b)
	}
	return a % b;
}
