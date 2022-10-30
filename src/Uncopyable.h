//
// Created by Melkor on 10/30/2022.
//

#ifndef HELLO_THERE_UNCOPYABLE_H
#define HELLO_THERE_UNCOPYABLE_H


class Uncopyable {
protected: // allow construction
    Uncopyable() {} // and destruction of
    ~Uncopyable() {} // derived objects...
private:
    Uncopyable(const Uncopyable&); // ...but prevent copying
    Uncopyable& operator=(const Uncopyable&);
};


#endif //HELLO_THERE_UNCOPYABLE_H
