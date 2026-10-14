calculate_square_area=lambda side_length:side_length**2
calculate_rectangle_area=lambda length,width:length*width
calculate_triangle_area=lambda base,height:0.5*base*height
sqs=int(input("enter the side of the square:"))
print("enter the base and height of the triangle:")
ht=int(input("height:"))
bs=int(input("base:"))
print("enter the length and breadth of the rectangle:")
l=int(input("length:"))
b=int(input("breadth:"))
square_area=calculate_square_area(sqs) 
print("Area of the square:", square_area) 
triangle_area = calculate_triangle_area(bs, ht) 
print("Area of the triangle:", triangle_area) 
rectangle_area = calculate_rectangle_area(l, b) 
print("Area of the rectangle:", rectangle_area) 