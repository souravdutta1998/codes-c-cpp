#include<stdio.h>
#include<math.h>
int main(){
	float n, v1, v2;
  	scanf("%f%f%f",&n, &v1,  &v2);
  	float n1 = sqrt(2)*n;
  	float n2 = 2*n;
  	float time1 = n1/ v1;
  	float time2 = n2/v2;
  	if(time1 < time2) printf("Walk");
  	else printf("Taxi");
  	return 0;
}
