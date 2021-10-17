#include "binary_signal.h"


BS::Binary_signal::Binary_signal() {
    size = 0;
};


BS::Binary_signal::Binary_signal(int l) {
    size = 1;
    char t = '9';
    a[0].duration = t;
    a[0].level = l;
}

BS::Binary_signal::Binary_signal(char const d[K])
{
    std::cout << "Binary signal:";
    for (int i = 0; i < N; i++)
        std::cout << ' ' << d[i];
    std::cout << std::endl;

    int count = 0;
    int q = 0;
    size = 0;
    for(int i = 0; i < N; i++)
    {
        puts("iter");
        if (d[q] == '0')
        {
            puts("zero");
            a[i].level = 0;             // level - int
            while (d[q] == '0')
            {                 // duration - char
                count++;                        //
                q++;
            }
            a[i].duration = count;
            std::cout << "DURATION: ->";
            printf("%d \n", a[i].duration);
            size++;
            std::cout << "COUNT" << count << std::endl;
            count = 0;
            continue;
        }

        if (d[q] == '1')
        {
            puts("one");
            a[i].level = 1;
            while (d[q] == '1')
            {
                //std::cout << q << std::endl;
                count++;
                q++;
            }
            a[i].duration = count;
            std::cout << "DURATION: ->";
            printf("%d \n", a[i].duration);
            size++;
            std::cout << "COUNT" << count << std::endl;
            count = 0;
            continue;
        }
        i = q;
    }
    std::cout << std::endl << std::endl << std::endl;
    return;
    for (int i = 0; i < N; i++) {
        std::cout << "level " << a[i].level << std::endl;
        std::cout << "duration " << a[i].duration << std::endl;
    }
    std::cout << "SIZE " << size << std::endl;
}