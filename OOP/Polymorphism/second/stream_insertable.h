#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H

#include <iostream>

class Stream_insertable
{
    friend std::ostream& operator<<(std::ostream& out, Stream_insertable& operand);
public:
    virtual void stream_insert(std::ostream& out) const = 0;  
};

std::ostream& operator<<(std::ostream& out, Stream_insertable& operand){
    operand.stream_insert(out);
    return out;
}

#endif