#include <iostream>
#include <map>
#include <vector>

const std::array<std::pair<std::size_t, const char*>, 2> words =
        {
                std::pair(3, "Fizz"),
                std::pair(5, "Buzz")

        };

int main()
{
    std::array<const char*, 2> values{};
    std::size_t values_used = 0;

    for(std::size_t i = 0; i < 100; i++)
    {
        for(const auto& it : words)
            if(i % it.first == 0)
                values[values_used++] = it.second;

        if(values_used)
        {
            for(std::size_t vi = 0; vi < values_used; vi++)
            {
                if(vi)
                    std::cout << " ";

                std::cout << values[vi];
            }
            std::cout << std::endl;

            values_used = 0;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}
