
#include <vector>
#include <memory>

class Object {
public:
    Object(Object* parent = nullptr);
    virtual ~Object();

    // Запрещаем копирование
    Object(const Object&) = delete;
    Object& operator=(const Object&) = delete;

    // Добавление/удаление дочерних объектов
    void addChild(Object* child);
    void removeChild(Object* child);

    // Получение списка детей
    const std::vector<Object*>& children() const { return _children; }
    Object* parent() const { return _parent; }

protected:
    Object* _parent = nullptr;
    std::vector<Object*> _children;
};
