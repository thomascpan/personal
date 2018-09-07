//
// Created by Thomas Pan on 6/24/18.
//

#ifndef NOTES_GRAPHINTERFACE_H
#define NOTES_GRAPHINTERFACE_H

template<class LabelType>
class GraphInterface {
public:
    virtual int getNumVertices() const = 0;
    virtual int getNumEdges() const = 0;
    virtual bool add(LabelType start, LabelType end, int edgeWeight) = 0;
    virtual bool remove(LabelType start, LabelType end) = 0;
    virtual int getEdgeWeight(LabelType start, LabelType end) const = 0;
    virtual void depthFirstTraversal(LabelType start, void visit(LabelType&)) = 0;
    virtual void breadthFirstTraversal(LabelType start, void visit(LabelType&)) = 0;
};


#endif //NOTES_GRAPHINTERFACE_H
