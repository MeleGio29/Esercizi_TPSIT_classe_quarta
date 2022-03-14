class Node:
    def __init__(self, value):
        self.value = value
        self.left = None #istanza nodo sinistro
        self.right = None #istanza nodo destro
    
    def insertNode(self, value):
        if self.value:
            if value < self.value:
                if self.left is None:
                    self.left = Node(value)
                else:
                    self.left.insertNode(value)
            elif value > self.value:
                if self.right is None:
                    self.right = Node(value)
                else:
                    self.right.insertNode(value)
        else:
            self.value = value

    def printTree(self):
        if self.left:
            self.left.printTree()

        print(self.value)

        if self.right:
            self.right.printTree()

def main():
    albero = Node(60)
    albero.insertNode(80)
    albero.insertNode(20)
    albero.insertNode(40)
    albero.insertNode(55)
    albero.insertNode(100)
    albero.insertNode(45)

    albero.printTree()

if __name__ == "__main__":
    main()