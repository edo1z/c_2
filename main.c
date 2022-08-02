#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void display(long now_sec) {
  system("clear");
  printf("hello world %ld\n", now_sec);
}

int main() {
  clock_t prev_cpu_time = clock();
  clock_t now_cpu_time;
  display(0);
  while (1) {
    now_cpu_time = clock();
    long duration_sec = (now_cpu_time - prev_cpu_time) / CLOCKS_PER_SEC;
    if (duration_sec >= 1) {
      prev_cpu_time = now_cpu_time;
      display(now_cpu_time / CLOCKS_PER_SEC);
    }
  }
}
