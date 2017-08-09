
```C
// if the include file is in local path
// it will generated as link
#include "test.h"
/***
 * such comment will be extracted
 ***/
// This will be enclosed in code block
int main(int argc, char *argv[]) {
/// This comment will be extracted and devide the code block
  return 0;
}
```
