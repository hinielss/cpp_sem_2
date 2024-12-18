# **Система обслуживания клиентов банка**  

Этот проект реализует модель банка с использованием принципов объектно-ориентированного программирования (ООП) и стандартных структур данных: стек, очередь и дек. Система распределяет клиентов по приоритетным и обычным очередям, позволяет операторам обрабатывать запросы и предоставляет возможность отмены завершенных операций.

---

## **Описание функциональности**  

Программа поддерживает следующие функции:  
1. Добавление клиента в систему.  
2. Обработка запросов клиентов операторами.  
3. Просмотр текущего состояния очередей.  
4. Просмотр истории завершенных операций.  
5. Отмена последней операции.  
6. Выход из системы.  

Пользователь взаимодействует с программой через консольное меню.  

---

## **Структура проекта**  

### **1. Класс `Client`**  
Хранит данные о клиенте (ID, тип запроса, время обращения).  

### **2. Класс `Operator`**  
Отвечает за обработку запросов клиентов, хранит статус занятости оператора.  

### **3. Класс `Queue` и `Deque`**  
Реализуют обычную очередь (FIFO) и двустороннюю очередь для управления клиентами.  

### **4. Класс `Stack`**  
Используется для хранения истории завершенных операций с возможностью их отмены.  

### **5. Класс `BankSystem`**  
Объединяет все модули системы и предоставляет интерфейс командной строки для управления банком.  

---

## **Распределение задач на 6 человек**  

### **Холин Михаил Вячеславович**: Реализация класса `Client`  
- Создать класс `Client`, который будет хранить информацию о клиенте (ID, тип запроса, время обращения).  
- Написать функцию добавления клиентов в обычную очередь или дек в зависимости от типа запроса.  

### **Флигинский Виктор Мизайлович**: Реализация класса `Queue`  
- Создать класс `Queue` для реализации обычной очереди (FIFO).  
- Добавить методы для добавления элементов (`enqueue`), удаления элементов (`dequeue`), проверки пустоты (`isEmpty`) и отображения содержимого очереди.  

### **Шмарин Артем Алексеевич**: Реализация класса `Deque`  
- Создать класс `Deque`, наследующий функциональность `Queue`.  
- Добавить методы для работы с двусторонней очередью: добавление/удаление элементов в начало и конец.  

### **Тимофеенко Артем Алексеевич**: Реализация класса `Operator`  
- Создать класс `Operator`, хранящий ID и статус занятости.  
- Реализовать метод обработки клиента оператором (`processRequest`) и метод для получения статуса оператора.  

### **Пшенников Данила Максимович**: Реализация класса `Stack`  
- Создать класс `Stack` для хранения истории завершенных операций.  
- Реализовать методы для добавления (`push`), удаления (`pop`) и просмотра верхушки стека (`top`).  

### **Слинков Владимир Анатольевич**: Реализация класса `BankSystem`  
- Интегрировать все модули в единую систему.  
- Реализовать интерфейс командной строки для взаимодействия с пользователем.  

---

## **Пошаговые сценарии для тестирования**  
1. Добавить несколько клиентов с различным приоритетом запроса.  
2. Просмотреть состояние очередей.  
3. Обработать несколько запросов клиентов операторами.  
4. Проверить историю завершенных операций.  
5. Отменить последнюю выполненную операцию.  
6. Убедиться, что состояние системы обновляется корректно.  

---

## **Инструкция по запуску**  

1. Скомпилируйте проект и запустите с помощью cmake (например, `cmake`).  
   ```bash
   cmake build .
   ```  

---

## **Рекомендации для совместной работы**  

- **Единый стиль кодирования**: Используйте один стиль оформления кода (например, стандарт C++17).  
- **Система контроля версий**: Работайте через Git для управления изменениями кода.  
- **Тестирование модулей**: Каждая команда протестировала свой модуль перед интеграцией.  
- **Сборка и тестирование всей системы**: После завершения разработки всех компонентов объедините код и протестируйте систему целиком.  

---

## **Контакты для обратной связи**  
@danirodplay