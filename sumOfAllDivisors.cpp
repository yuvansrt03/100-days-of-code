int sumOfAllDivisors(int n){
	int sum=(n+1)*(n+2)/2 -2;
	int sqr=sqrt(n);
	int arr[n];
	for(int i=2;i<=sqr;i++){
		int temp=n/i;
		int ans=(temp*(temp+1)/2)+(i*temp)-((i-1)*i/2)-(i*(i-1))-i;
		sum+=ans;
	}
	return sum;	
}
