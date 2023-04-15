#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout<<"Введите имя: ";
    std::string name;
    std::cin>>name;

    std::cout<<"Введите сумму долга: ";
    int debt;
    std::cin>>debt;

    int pay=0;

    bool paidOff=pay>debt;

    while (!paidOff) {
        std::cout<<"Ваш долг: "<<debt<<". Внесите платёж!\n";
        std::cout<<"Ваш платёж: ";
        std::cin>>pay;
        paidOff=pay>=debt;
        debt-=pay;
        if (pay<0) {
            std::cout<<"Неверная сумма платежа!";
            break;
        }
    }

    if (debt<=0) {
        std::cout<<"Ваш остаток на счёте: "<<paidOff*(-debt);
    }



}
