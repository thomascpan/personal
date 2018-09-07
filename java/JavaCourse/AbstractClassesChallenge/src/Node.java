/**
 * Created by thomaspan on 10/3/16.
 */
public class Node extends ListItem {
    public Node(Object value) {
        super(value);
    }

    @Override
    public ListItem next() {
        return rightLink;
    }

    @Override
    public ListItem setNext(ListItem item) {
        rightLink = item;
        return rightLink;
    }

    @Override
    public ListItem previous() {
        return leftLink;
    }

    @Override
    public ListItem setPrevious(ListItem item) {
        leftLink = item;
        return item;
    }

    @Override
    public int compareTo(ListItem item) {
        if(item != null) {
            return ((String) getValue()).compareTo((String) item.getValue());
        } else {
            return -1;
        }
    }
}
