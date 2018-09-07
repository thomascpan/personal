//
// Created by Thomas Pan on 5/26/18.
//

#ifndef NOTES_QUEUEINTERFACE_H
#define NOTES_QUEUEINTERFACE_H

template<class ItemType>
class QueueInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual bool enqueue(const ItemType& newEntry) = 0;
    virtual bool dequeue() = 0;
    virtual ItemType peekFront() const = 0;
};


#endif //NOTES_QUEUEINTERFACE_H
