#include <iostream>
#include <chrono>
#include <time.h>
#include "quicksort.h"
#include "selectionsort.h"


class Timer
{
private:
	using Clock = std::chrono::steady_clock;
	using Second = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<Clock> m_beg { Clock::now() };

public:
	void reset()
	{
		m_beg = Clock::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
	}
};

int main(int argc, char const *argv[])
{
    const int min_tab_size = 1000;
    const int max_tab_size = 500000;
    const int step = 1000;
    std::cout << "Quicksort\n";
    //quicksort
    for (int i = min_tab_size; i <= max_tab_size; i+=step)
    {
        //generate
        srand(time(NULL));
        int tab[i];
        for (int j = 0;j < i;j++)
        {
            tab[j] = rand()%i;
        }
        Timer t;
        quicksort(tab,0,i-1);
        std::cout << i << " " << t.elapsed() << "\n";

    }
    std::cout << "Selection Sort\n";
    //selection sort
    for (int i = min_tab_size; i <= max_tab_size; i+=step)
    {
        //generate
        srand(time(NULL));
        int tab[i];
        for (int j = 0;j < i;j++)
        {
            tab[j] = rand()%i;
        }
        Timer t;
        selectionSort(tab,i);
        std::cout << i << " " << t.elapsed() << "\n";
    }
    return 0;
}
