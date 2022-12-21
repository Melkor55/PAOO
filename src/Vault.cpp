#include "Company.hpp"

/*  --- using Mutex lock and unlock functions ---
    void lock(Mutex *pm); // lock mutex pointed to by pm
    void unlock(Mutex *pm); // unlock the mutex
*/

class Vault {
public:
    explicit Vault(Mutex *pm) : mutexPtr(pm, unlock) // the unlock func will be ussed as a replacement for the destructor
    { 
        lock(mutexPtr.get()); // passes the raw pointer from mutexPtr into lock
    }
private:
    std::tr1::shared_ptr<Mutex> mutexPtr; 
};