class Shape:
    def __init__(self, width, height):
        self._width = width
        self._height = height
        print("Created Shape")
        
class Rectangle(Shape):
    def __init__(self, width, height):
        super().__init__(width, height)
        self.area = width * height
        print(f"Created Rectangle with area {self.area}")
        
    @property
    def width(self):
        return f"{self._width:.1f}cm"
    
    @property
    def height(self):
        return f"{self._height:.1f}cm"
    
    @width.setter
    def width(self, newWidth):
        if newWidth > 0:
            self._width = newWidth
        else:
            print("Width must be greater than 0")
            
    @height.setter
    def height(self, newHeight):
        if newHeight > 0:
            self._height = newHeight
        else:
            print("Height must be greater than 0")
            
    @width.deleter
    def width(self):
        print("Deleting width")
        del self._width
        
    @height.deleter
    def height(self):
        print("Deleting height")
        del self._height
        
rec = Rectangle(3, 2)

rec.width = 5
rec.height = 10
print(rec.height)
print(rec.width)

del rec.height
del rec.width
