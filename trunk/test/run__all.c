
# include "testing.h"

# define NEW SUITE_COLLECTION(allSuites)
# define COLLECTION(RUN_SUITE) \
	RUN_SUITE(a) \
	RUN_SUITE(b) \
	RUN_SUITE(c) \
	RUN_SUITE(d) \
	RUN_SUITE(e) \
	RUN_SUITE(f) \
	RUN_SUITE(g) \
	RUN_SUITE(h) \

END_SUITE_COLLECTION