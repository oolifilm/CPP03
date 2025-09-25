#include <iostream>
class Animal { // herite publiquement de Animal
    private:
        int _numberOfLegs;
    public:
        Animal();
        Animal(Animal const &);
        Animal& operator=(Animal const &);
        virtual ~Animal();
        void run(int distance); // comportement commun
};

class Cat : public Animal {
    private:
        int _numberOfLegs;
    public:
        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        virtual ~Cat();
        void scornSomeone(std::string const & target); // comportement propre
};

class Pony : public Animal { // herite publiquement de Animal
    private:
        int _numberOfLegs;
    public:
        Pony();
        Pony(Pony const &);
        Pony& operator=(Pony const &);
        virtual ~Pony();
        void doMagic(std::string const & target); // comportement propre
};

class Otter : public Animal {
    private:
        int _numberOfLegs;
    public:
        Otter();
        Otter(Otter const &);
        Otter& operator=(Otter const &);
        virtual ~Otter();
};


class Quadruped {// can access _name, run() and legs
    private:
        std::string _name; // only accessible from a Quaduped object
    protected:
        Leg Legs[4];       // only accessible from a Quaduped object or derived object
    public:
        void run();        // only accessible from wherever
};

class Dog : public Quadruped { // can access run() and legs
};

int main() { // can only access run()   
}