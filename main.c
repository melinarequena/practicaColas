#include <stdio.h>
#include "Cola.h"

int main() {
    Queue * queue = newQue();
    enque(queue, newNode("duki"));
    enque(queue, newNode("ysya"));
    enque(queue, newNode("taylorswift"));
    enque(queue, newNode("travisscott"));
    enque(queue, newNode("alexturner"));

    print(queue);

    deque(queue);

    print(queue);

}
