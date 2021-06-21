#include <stdio.h>
#include <string.h>
#include <console_ui.h>
#include <unit_test.h>

int main(int argc, char *argv[]) {

  if (argc > 1) {
	if (strcasecmp(argv[1], "console") == 0) {
	  return RunConsoleUi(argc, argv);
	} else if (strcasecmp(argv[1], "unittest") == 0) {
	  return RunUnitTest(argc, argv);
	}else {

	}
  }

  return 0;
}
