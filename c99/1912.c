#include <stdio.h>

int main()
{
  int n,i, buffer,sum = 0, max_sum = -1001;
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    scanf("%d", &buffer);
    sum += buffer;
    if (max_sum < sum){
      max_sum = sum;
    }
    if (sum < 0){
      sum = 0;
    }
  }
  printf("%d", max_sum);

  return 0;
}

