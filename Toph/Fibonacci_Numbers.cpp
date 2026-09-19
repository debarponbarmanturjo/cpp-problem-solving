#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;

	scanf("%d", &n);

	long long a=0, b=1;
	
	for(int i=1; i<n; i++){
		b=a+b;
    a=b-a;
	}

	printf("%lld\n", b);

    return 0;
}
