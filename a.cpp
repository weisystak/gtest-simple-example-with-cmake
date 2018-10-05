#include <gtest/gtest.h>
#include <iostream>
#include <string>

int32_t add(int32_t a, int32_t b)
{
    return a + b;
}
int32_t sub(int32_t a, int32_t b)
{
    return a - b;
}


class R{
    public:
 
    R(std::string n):data(n){}
    
    const std::string& get_data() const{ 
        return data;
    }
    friend std::ostream& operator<<(std::ostream& os, const R& a)
    {
        os<<a.get_data();
        return os;
    }
    
    private:
        std::string data;
};

int i = 5;

TEST (Arithmetic, add)
{
    std::cout<<"add"<<std::endl;
    EXPECT_EQ(i, add(3, 2));
}

//int i = -1;

TEST (Arithmetic, sub)
{
    EXPECT_EQ(-1, sub(4, 5));
}


TEST (R, friend_function)
{

    R a("3");

    std::ostringstream oss;
    oss<<a;
    EXPECT_EQ(oss.str(), "3"); 
} 
