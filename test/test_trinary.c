#include <stdio.h>
#include <stdlib.h>
#include "../src/trinary/trinary.h"

int main()
{
    signed char *trytes_test_case = "SCYLJDWIM9LIXCSLETSHLQOOFDKYOVFZLAHQYCCNMYHRTNIKBZRIRACFYPOWYNSOWDNXFZUG9OEOZPOTD";
    int length_test_case = 81;

    Trobject_t *trytes = initTrytes(trytes_test_case, length_test_case);

    Trobject_t *trits = trits_from_trytes(trytes);

    Trobject_t *ret_trytes = trytes_from_trits(trits);

    if (!compareTrobject(trytes, ret_trytes)) {
        printf("Test Failed!\n");
        return -1;
    }

    printf("Trinary Test Passed!\n");

    freeTrobject(trytes);
    freeTrobject(trits);
    freeTrobject(ret_trytes);
    
    return 0;
}
