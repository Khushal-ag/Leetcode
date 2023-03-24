class MyCircularQueue {
int[] circularQueue;
    int len = 0, front = 0, rear = -1;
    public MyCircularQueue(int k) {
        circularQueue = new int[k];
    }
    
    public boolean enQueue(int value) {
        if (!isFull()) {
            rear = (rear + 1) % circularQueue.length;
            circularQueue[rear] = value;
            len++;
            return true;
        }
        return false;
    }
    
    public boolean deQueue() {
        if (!isEmpty()) {
            front = (front + 1) % circularQueue.length;
            len--;
            return true;
        }
        return false;
    }
    
    public int Front() {
        return isEmpty() ? -1 : circularQueue[front];
    }
    
    public int Rear() {
        return isEmpty() ? -1 : circularQueue[rear];
    }
    
    public boolean isEmpty() {
        return len == 0;
    }
    
    public boolean isFull() {
        return len == circularQueue.length;
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */