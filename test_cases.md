# Danh sách Test Case Kiểm thử Hộp đen

Kỹ thuật áp dụng: Phân lớp tương đương (Equivalence Partitioning - EP), Phân tích giá trị biên (Boundary Value Analysis - BVA), dữ liệu hợp lệ/không hợp lệ.

---

## Bài 1: Tính chu vi hình chữ nhật (chu vi = 2*(a+b))

**Đầu vào:** a, b (số thực)

| Lớp tương đương | a | b | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|---|
| Hợp lệ - số bình thường | 5 | 3 | EP | Chu vi = 16.00 |
| Hợp lệ - số thập phân | 2.5 | 4.5 | EP | Chu vi = 14.00 |
| Biên - giá trị rất nhỏ | 0.01 | 0.01 | BVA | Chu vi = 0.04 |
| Không hợp lệ - a = 0 | 0 | 5 | EP (invalid) | Báo lỗi |
| Không hợp lệ - a âm | -3 | 5 | EP (invalid) | Báo lỗi |
| Không hợp lệ - cả hai âm | -3 | -5 | EP (invalid) | Báo lỗi |
| Không hợp lệ - sai kiểu dữ liệu | "abc" | 5 | Invalid data | Báo lỗi, không crash |

---

## Bài 2: Tính diện tích hình chữ nhật (S = a*b)

| Lớp tương đương | a | b | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|---|
| Hợp lệ - số bình thường | 5 | 3 | EP | Diện tích = 15.00 |
| Hợp lệ - số thập phân | 2.5 | 4 | EP | Diện tích = 10.00 |
| Biên - giá trị rất nhỏ | 0.01 | 0.01 | BVA | Diện tích ≈ 0.0001 |
| Không hợp lệ - b = 0 | 5 | 0 | EP (invalid) | Báo lỗi |
| Không hợp lệ - a âm | -5 | 3 | EP (invalid) | Báo lỗi |
| Không hợp lệ - sai kiểu dữ liệu | 5 | "xyz" | Invalid data | Báo lỗi, không crash |

---

## Bài 3: Giải phương trình bậc 2 (ax² + bx + c = 0)

| Lớp tương đương | a | b | c | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|---|---|
| Hợp lệ - delta > 0 (2 nghiệm) | 1 | -3 | 2 | EP | x1=2.00, x2=1.00 |
| Hợp lệ - delta = 0 (nghiệm kép) | 1 | -2 | 1 | EP + BVA | x = 1.00 |
| Hợp lệ - delta < 0 (vô nghiệm) | 1 | 1 | 1 | EP | Vô nghiệm |
| Biên - delta xấp xỉ 0 | 1 | 2.0001 | 1 | BVA | Gần nghiệm kép |
| Đặc biệt - a = 0, b ≠ 0 (bậc 1) | 0 | 2 | -4 | EP (đặc biệt) | x = 2.00 |
| Không hợp lệ - a=0, b=0, c=0 | 0 | 0 | 0 | Invalid data | Vô số nghiệm |
| Không hợp lệ - a=0, b=0, c≠0 | 0 | 0 | 5 | Invalid data | Vô nghiệm |
| Không hợp lệ - sai kiểu dữ liệu | "a" | 2 | 1 | Invalid data | Báo lỗi, không crash |

---

## Bài 4: Tính số ngày của một tháng

| Lớp tương đương | Tháng | Năm | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|---|
| Hợp lệ - tháng 31 ngày | 1 | 2024 | EP | 31 ngày |
| Hợp lệ - tháng 30 ngày | 4 | 2024 | EP | 30 ngày |
| Hợp lệ - tháng 2, năm nhuận | 2 | 2024 | EP | 29 ngày |
| Hợp lệ - tháng 2, năm không nhuận | 2 | 2023 | EP | 28 ngày |
| Biên - năm nhuận chia hết 400 | 2 | 2000 | BVA | 29 ngày |
| Biên - năm chia hết 100 nhưng không chia hết 400 | 2 | 1900 | BVA | 28 ngày |
| Biên - tháng = 1 (biên dưới) | 1 | 2024 | BVA | 31 ngày |
| Biên - tháng = 12 (biên trên) | 12 | 2024 | BVA | 31 ngày |
| Không hợp lệ - tháng = 0 | 0 | 2024 | BVA (invalid) | Báo lỗi |
| Không hợp lệ - tháng = 13 | 13 | 2024 | BVA (invalid) | Báo lỗi |
| Không hợp lệ - tháng âm | -1 | 2024 | EP (invalid) | Báo lỗi |
| Không hợp lệ - năm âm/0 | 2 | 0 | EP (invalid) | Báo lỗi |

---

## Bài 5: Kiểm tra n có phải số nguyên tố

| Lớp tương đương | n | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|
| Hợp lệ - số nguyên tố nhỏ | 7 | EP | Là số nguyên tố |
| Hợp lệ - hợp số | 12 | EP | Không phải số nguyên tố |
| Hợp lệ - số nguyên tố lớn | 97 | EP | Là số nguyên tố |
| Biên - n = 2 (số nguyên tố nhỏ nhất) | 2 | BVA | Là số nguyên tố |
| Biên - n = 1 | 1 | BVA | Không phải số nguyên tố |
| Biên - n = 0 | 0 | BVA (invalid) | Không phải số nguyên tố |
| Không hợp lệ - n âm | -5 | EP (invalid) | Không phải số nguyên tố / báo lỗi |
| Không hợp lệ - sai kiểu dữ liệu | "abc" | Invalid data | Báo lỗi, không crash |

---

## Bài 6: Tính tổng S = 1 - 2 + 3 - 4 + ... + n

| Lớp tương đương | n | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|
| Hợp lệ - n chẵn | 4 | EP | S = -2 |
| Hợp lệ - n lẻ | 5 | EP | S = 3 |
| Biên - n = 1 (nhỏ nhất hợp lệ) | 1 | BVA | S = 1 |
| Không hợp lệ - n = 0 | 0 | BVA (invalid) | Báo lỗi |
| Không hợp lệ - n âm | -5 | EP (invalid) | Báo lỗi |
| Không hợp lệ - sai kiểu dữ liệu | "n" | Invalid data | Báo lỗi, không crash |

---

## Bài 7: Tìm ước chung lớn nhất (UCLN) của a và b

| Lớp tương đương | a | b | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|---|
| Hợp lệ - hai số bình thường | 12 | 18 | EP | UCLN = 6 |
| Hợp lệ - số nguyên tố cùng nhau | 7 | 13 | EP | UCLN = 1 |
| Biên - a = b | 9 | 9 | BVA | UCLN = 9 |
| Biên - một số bằng 1 | 1 | 20 | BVA | UCLN = 1 |
| Biên - một số bằng 0 | 0 | 5 | BVA | UCLN = 5 |
| Hợp lệ - số âm (lấy trị tuyệt đối) | -12 | 18 | EP | UCLN = 6 |
| Không hợp lệ - cả hai đều bằng 0 | 0 | 0 | BVA (invalid) | Báo lỗi |
| Không hợp lệ - sai kiểu dữ liệu | "a" | 18 | Invalid data | Báo lỗi, không crash |

---

## Bài 8: Tính tổng S = 1! + 2! + 3! + ... + n!

| Lớp tương đương | n | Kỹ thuật | Kết quả mong đợi |
|---|---|---|---|
| Hợp lệ - n nhỏ | 3 | EP | S = 1+2+6 = 9 |
| Hợp lệ - n trung bình | 5 | EP | S = 153 |
| Biên - n = 1 (nhỏ nhất hợp lệ) | 1 | BVA | S = 1 |
| Biên - n = 20 (lớn nhất trước tràn số) | 20 | BVA | Tổng giai thừa đến 20! |
| Không hợp lệ - n = 0 | 0 | BVA (invalid) | Báo lỗi |
| Không hợp lệ - n âm | -3 | EP (invalid) | Báo lỗi |
| Không hợp lệ - n quá lớn (tràn số) | 25 | BVA (invalid) | Báo lỗi tràn số |
| Không hợp lệ - sai kiểu dữ liệu | "n" | Invalid data | Báo lỗi, không crash |

---

## Ghi chú áp dụng kỹ thuật kiểm thử hộp đen

- **Phân lớp tương đương (EP):** mỗi bài chia đầu vào thành các lớp hợp lệ (số dương, số âm hợp lệ theo bài toán, năm nhuận/không nhuận...) và lớp không hợp lệ (số 0, số âm không phù hợp, sai kiểu dữ liệu).
- **Phân tích giá trị biên (BVA):** kiểm tra tại các mốc biên như tháng = 1/12, n = 1, năm nhuận chia hết 400/100, n = 20 (giới hạn tràn số của long long khi tính giai thừa).
- **Dữ liệu không hợp lệ:** mỗi bài có tối thiểu 1 test case dữ liệu sai/không hợp lệ (số âm, số 0 không phù hợp, sai kiểu dữ liệu nhập vào) để kiểm tra chương trình xử lý lỗi thay vì crash.
