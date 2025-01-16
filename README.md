## **Inheritance in C++:**

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.

- **Sub Class:** The class that inherits properties from another class is called Subclass or Derived Class.
- **Super Class:** The class whose properties are inherited by a subclass is called Base Class or Superclass.
  ### Using inheritance,
   we have to write the functions only one time instead of three times as we have inherited the rest of the three classes from the base class (Vehicle).

**Implementing inheritance in C++**: For creating a sub-class that is inherited from the base class we have to follow the below syntax.

**Derived Classes:** A Derived class is defined as the class derived from the base class.

**Syntax**:

```
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
```

Where

class      — keyword to create a new class

derived_class_name   — name of the new class, which will inherit the base class

access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default

base-class-name  — name of the base class

**Note**: A derived class doesn’t inherit ***access*** to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

**Example:**

1. class ABC : private XYZ              //private derivation

{                }

2. class ABC : public XYZ              //public derivation

{               }

3. class ABC : protected XYZ              //protected derivation

o When a base class is **privately** inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.

o On the other hand, when the base class is **publicly** inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

**The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed. For example, Classes B, C, and D all contain the variables x, y, and z in the below example. It is just a question of access.**

[**Data Redundancy](https://www.geeksforgeeks.org/the-problem-of-redundancy-in-database/) :**

It is defined as the redundancy means duplicate data and it is also stated that the same parts of data exist in multiple locations into the database. This condition is known as Data Redundancy.

**Problems with Data Redundancy :**

Here, we will discuss the few problems with data redundancy as follows.

1. Wasted Storage Space.
2. More Difficult Database Update.
3. It will lead to Data Inconsistency.
4. Retrieval of data is slow and inefficient.

### Types Of Inheritance:-

1. Single inheritance
2. Multilevel inheritance
3. Multiple inheritance
4. Hierarchical inheritance

# **Multiple Inheritance in C++**

Multiple Inheritance is a [feature of Object-Oriented Programming (OOP)](https://www.makeuseof.com/tag/object-oriented-programming-explained/) where a subclass can inherit from more than one superclass. In other words, a child class can have more than one parent.

The figure below shows a pictorial representation of multiple inheritances.
