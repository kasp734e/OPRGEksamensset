#include <__stddef_size_t.h>
//Opgave 2 b)
void minmax(double* measurements_p, size_t size, double* min, double* max) {

    // measurements_p er en pointer der pointer til første ting i
    // arrayet.
    // min og max er pointers til doubles.

    *min = measurements_p[0];
    *max = measurements_p[0];

    // værdien ved den adresse min og max pointer til bliver sat til
    // den første værdi i measurements_p

    for (size_t count = 1; count<size; count++) {
        // jeg går igennem alle værdier fra 1 til size.
        if (*min > measurements_p[count]) {
            // hvis værdien min pointer til er større end measurements_p
            // værdi nummer "count" så
            *min = measurements_p[count];
            // sæt værdien min pointer til til measurements_p værdi nummer
            // count
        }
        if (*max < measurements_p[count]) {
            *max = measurements_p[count];
        }
    }
}
