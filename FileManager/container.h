#ifndef CONTAINER_H
#define CONTAINER_H

#include<QFileSystemModel>

struct Node //элемент контейнера List
{
    QString info="";    //структурный атрибут для хранения файловых путей
    Node* next=nullptr; //указатель на следующий элемент контейнера
};

class List  //контейнер списочного типа
{
    Node* node=nullptr; //указатель на текущий элемент
    Node* head=nullptr; //указатель на первый элемент
    Node* tail=nullptr; //указатель на последний элемент
public:
    List() = default;
    ~List() = default;
    void Push(QString); //метод добавления элемента
    Node* PeekHead(bool flag);  //метод передачи первого либо текущего элемента
    void Pop(); //метод очистки контейнера
    bool IsEmpty(); //метод проверки, пуст ли контейнер
    class Iterator  //вложенный итератор контейнера List
    {
       Node *current=nullptr;   //указатель на текущий элемент
    public:
       Iterator() = default;
       ~Iterator()= default;
       void SetIter(Node* node);    //метод установки итератора на элемент, связанный с указателем *node
       bool operator ++();  //перегруженный оператор для перехода к следующему элементу
       Node* operator *();  //перегруженный оператор для получения информации текущего элемента
    };
};
#endif // CONTAINER_H
