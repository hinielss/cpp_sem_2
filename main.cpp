#include "BankSystem.h"

int main() {
    BankSystem bank(2); // 2 оператора

    int choice;
    do {
        std::cout << "\n=== Система обслуживания клиентов банка ===\n";
        std::cout << "1. Добавить клиента в систему\n";
        std::cout << "2. Обработать запрос клиента\n";
        std::cout << "3. Просмотреть состояние очередей\n";
        std::cout << "4. Показать историю завершенных операций\n";
        std::cout << "5. Отменить последнюю операцию\n";
        std::cout << "6. Выход\n";
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string type;
                std::cout << "Введите тип запроса (low/high): ";
                std::cin >> type;
                bank.addClient(type);
                break;
            }
            case 2:
                bank.processRequest();
            break;
            case 3:
                bank.displayQueues();
            break;
            case 4:
                bank.displayHistory();
            break;
            case 5:
                bank.undoLastOperation();
            break;
            case 6:
                std::cout << "Выход из программы.\n";
            break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 6);

    return 0;
}