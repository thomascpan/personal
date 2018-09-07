/**
 * Created by thomaspan on 10/3/16.
 */
public class LinkedList {
    private Node head;

    public LinkedList(Node head) {
        this.head = head;
    }

    public void add(Node node) {
        Node currentNode = head;
        boolean isSet = false;
        if(currentNode == null) {
            head = node;
            isSet = true;
        }
        Node nextNode = ((Node) head.next());

        while (!isSet) {
            if (node.compareTo(currentNode) > 0) {
                if (nextNode == null) {
                    node.setPrevious(currentNode);
                    currentNode.setNext(node);
                    isSet = true;
                } else {
                    currentNode = nextNode;
                    nextNode = ((Node) nextNode.next());
                }
            } else if (node.compareTo(currentNode) == 0) {
                System.out.println("Duplicate entry");
                isSet = true;
            } else {
                isSet = true;
                node.setNext(currentNode);
                if (head == currentNode) {
                    head = node;
                } else {
                    node.setPrevious(currentNode.previous());
                    node.previous().setNext(node);
                }
                node.next().setPrevious(node);
            }
        }
    }

    public void remove(String value) {
        Node currentNode = head;
        if(currentNode == null) {
            return;
        }
        Node nextNode = ((Node) head.next());

        while(currentNode != null) {
            if(value == currentNode.getValue()) {
                if(head == currentNode) {
                    head = nextNode;
                    nextNode.setPrevious(null);
                } else {
                    currentNode.previous().setNext(currentNode.next());
                    if(currentNode.next() != null) {
                        currentNode.next().setPrevious(currentNode.previous());
                    }
                }
                return;
            } else {
                currentNode = nextNode;
                if(nextNode != null) {
                    nextNode = ((Node) nextNode.next());
                }
            }
        }

        System.out.println("Value not found");
    }

    public void print() {
        Node current = head;
        while (current.next() != null) {
            System.out.print(current.getValue() + ", ");
            current = ((Node) current.next());
        }
        System.out.println(current.getValue());
    }
}
