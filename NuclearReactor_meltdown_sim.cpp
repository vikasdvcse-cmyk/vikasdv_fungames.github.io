#include<iostream>
#include<random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(5.0,20.0);
    double randValue = dis(gen);
    int temp=dis(gen);
    std::cout << "Current reactor temperature: " << temp << " degrees Celsius" << std::endl;
}