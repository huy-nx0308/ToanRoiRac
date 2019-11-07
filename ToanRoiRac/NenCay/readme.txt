Tìm mã pruffer của cây gán nhãn cho trước 

Thuật toán: tìm đỉnh có nhãn thấp nhất (trừ nhãn 0) và có bậc bằng 1 của cây, xóa nó khỏi đồ thị đồng thời
điền đỉnh duy nhất kề với nó vào mã pruffer code. Khi một đỉnh bị xóa đi cạnh liên quan tới nó 
cũng bị xóa và đỉnh kề duy nhất với nó giảm 1 bậc. Thuật toán dừng khi còn lại duy nhất đỉnh nhãn 0 .
 
Input: danh sách cạnh nhập từ bàn phím
dòng đầu : n cạnh
n dòng tiếp theo mỗi dòng là 1 cặp đỉnh ( ứng với 1 cạnh )

Output: Mã pruffer của cây với độ dài là ( n+1 ) -2 

Viết bằng ngôn ngữ C
