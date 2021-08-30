#include <stdio.h>
#include <bits/stdc++.h>

void input(int *x, int n);
void sortMax(int arr[], int n);
void sortMin(int arr[], int n);
void swap(int *xp, int *yp);

int main()
{
  int n;
  scanf("%d", &n);
  int total = 1000000;
  int z[n];
  //int z[-1] = 0;
  int t[n], h[n];
  input(t, n);
  input(h, n);
  sortMax(t, n);
  sortMin(h, n);
  for (int i = 0; i < n; i++)
  {
    z[i] = t[i] + h[i];
    int sum = abs(z[i] - z[i-1]);
  }
  printf("%d", sum);
}

void input(int *x, int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x[i]);
  }
}
void sortMax(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        swap(&arr[max], &arr[i]);
    }
}
void sortMin(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
