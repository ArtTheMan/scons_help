#include <cstdio>

#define str(s) #s
#define xstr(s) str(s)

int main(void) {
  printf("Hello, World! ARCH=%s Platform=%s",
	 xstr(ARCH),
	 xstr(PLATFORM));
  return 0;
}
