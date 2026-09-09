# Kết quả chạy Test Case

> Điền cột **Kết quả thực tế** và **Pass/Fail** sau khi chạy chương trình. Kết quả mong đợi lấy từ `test_cases.md`.

---

## Bài 1: Tính chu vi hình chữ nhật

| # | a | b | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|---|
| 1 | 5 | 3 | Chu vi = 16.00 | Chu vi hinh chu nhat: 16.00 | Pass |
| 2 | 2.5 | 4.5 | Chu vi = 14.00 | Chu vi hinh chu nhat: 14.00 | Pass |
| 3 | 0.01 | 0.01 | Chu vi = 0.04 | Chu vi hinh chu nhat: 0.04 | Pass |
| 4 | 0 | 5 | Báo lỗi | Loi: chieu dai va chieu rong phai la so duong | Pass |
| 5 | -3 | 5 | Báo lỗi | Loi: chieu dai va chieu rong phai la so duong | Pass |
| 6 | -3 | -5 | Báo lỗi | Loi: chieu dai va chieu rong phai la so duong | Pass |
| 7 | "abc" | 5 | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 2: Tính diện tích hình chữ nhật

| # | a | b | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|---|
| 1 | 5 | 3 | Diện tích = 15.00 | Dien tich hinh chu nhat: 15.00 | Pass |
| 2 | 2.5 | 4 | Diện tích = 10.00 | Dien tich hinh chu nhat: 10.00 | Pass |
| 3 | 0.01 | 0.01 | Diện tích ≈ 0.0001 | Dien tich hinh chu nhat: 0.00 | **Fail** (`%.2f` làm tròn 0.0001 xuống 0.00 — nên đổi định dạng in số cho bài này, ví dụ `%.4f`) |
| 4 | 5 | 0 | Báo lỗi | Loi: chieu dai va chieu rong phai la so duong | Pass |
| 5 | -5 | 3 | Báo lỗi | Loi: chieu dai va chieu rong phai la so duong | Pass |
| 6 | 5 | "xyz" | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 3: Giải phương trình bậc 2

| # | a | b | c | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|---|---|
| 1 | 1 | -3 | 2 | x1=2.00, x2=1.00 | Phuong trinh co 2 nghiem phan biet: x1 = 2.00, x2 = 1.00 | Pass |
| 2 | 1 | -2 | 1 | x = 1.00 | Phuong trinh co nghiem kep x = 1.00 | Pass |
| 3 | 1 | 1 | 1 | Vô nghiệm | Phuong trinh vo nghiem | Pass |
| 4 | 1 | 2.0001 | 1 | Gần nghiệm kép | Phuong trinh co 2 nghiem phan biet: x1 = -0.99, x2 = -1.01 | Pass |
| 5 | 0 | 2 | -4 | x = 2.00 | Phuong trinh co nghiem duy nhat x = 2.00 | Pass |
| 6 | 0 | 0 | 0 | Vô số nghiệm | Phuong trinh co vo so nghiem | Pass |
| 7 | 0 | 0 | 5 | Vô nghiệm | Phuong trinh vo nghiem | Pass |
| 8 | "a" | 2 | 1 | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 4: Tính số ngày của một tháng

| # | Tháng | Năm | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|---|
| 1 | 1 | 2024 | 31 ngày | Thang 1 nam 2024 co 31 ngay | Pass |
| 2 | 4 | 2024 | 30 ngày | Thang 4 nam 2024 co 30 ngay | Pass |
| 3 | 2 | 2024 | 29 ngày | Thang 2 nam 2024 co 29 ngay | Pass |
| 4 | 2 | 2023 | 28 ngày | Thang 2 nam 2023 co 28 ngay | Pass |
| 5 | 2 | 2000 | 29 ngày | Thang 2 nam 2000 co 29 ngay | Pass |
| 6 | 2 | 1900 | 28 ngày | Thang 2 nam 1900 co 28 ngay | Pass |
| 7 | 1 | 2024 | 31 ngày | Thang 1 nam 2024 co 31 ngay | Pass |
| 8 | 12 | 2024 | 31 ngày | Thang 12 nam 2024 co 31 ngay | Pass |
| 9 | 0 | 2024 | Báo lỗi | Loi: thang khong hop le (phai tu 1 den 12) | Pass |
| 10 | 13 | 2024 | Báo lỗi | Loi: thang khong hop le (phai tu 1 den 12) | Pass |
| 11 | -1 | 2024 | Báo lỗi | Loi: thang khong hop le (phai tu 1 den 12) | Pass |
| 12 | 2 | 0 | Báo lỗi | Loi: nam khong hop le | Pass |

## Bài 5: Kiểm tra n có phải số nguyên tố

| # | n | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|
| 1 | 7 | Là số nguyên tố | 7 la so nguyen to | Pass |
| 2 | 12 | Không phải số nguyên tố | 12 khong phai la so nguyen to | Pass |
| 3 | 97 | Là số nguyên tố | 97 la so nguyen to | Pass |
| 4 | 2 | Là số nguyên tố | 2 la so nguyen to | Pass |
| 5 | 1 | Không phải số nguyên tố | 1 khong phai la so nguyen to | Pass |
| 6 | 0 | Không phải số nguyên tố | 0 khong phai la so nguyen to | Pass |
| 7 | -5 | Không phải số nguyên tố / báo lỗi | -5 khong phai la so nguyen to | Pass |
| 8 | "abc" | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 6: Tính tổng S = 1 - 2 + 3 - 4 + ... + n

| # | n | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|
| 1 | 4 | S = -2 | S = -2 | Pass |
| 2 | 5 | S = 3 | S = 3 | Pass |
| 3 | 1 | S = 1 | S = 1 | Pass |
| 4 | 0 | Báo lỗi | Loi: n phai la so nguyen duong | Pass |
| 5 | -5 | Báo lỗi | Loi: n phai la so nguyen duong | Pass |
| 6 | "n" | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 7: Tìm UCLN của a và b

| # | a | b | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|---|
| 1 | 12 | 18 | UCLN = 6 | UCLN cua a va b la: 6 | Pass |
| 2 | 7 | 13 | UCLN = 1 | UCLN cua a va b la: 1 | Pass |
| 3 | 9 | 9 | UCLN = 9 | UCLN cua a va b la: 9 | Pass |
| 4 | 1 | 20 | UCLN = 1 | UCLN cua a va b la: 1 | Pass |
| 5 | 0 | 5 | UCLN = 5 | UCLN cua a va b la: 5 | Pass |
| 6 | -12 | 18 | UCLN = 6 | UCLN cua a va b la: 6 | Pass |
| 7 | 0 | 0 | Báo lỗi | Loi: a va b khong the dong thoi bang 0 | Pass |
| 8 | "a" | 18 | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

## Bài 8: Tính tổng S = 1! + 2! + ... + n!

| # | n | Kết quả mong đợi | Kết quả thực tế | Pass/Fail |
|---|---|---|---|---|
| 1 | 3 | S = 9 | S = 9 | Pass |
| 2 | 5 | S = 153 | S = 153 | Pass |
| 3 | 1 | S = 1 | S = 1 | Pass |
| 4 | 20 | Tổng giai thừa đến 20! | S = 2561327494111820313 | Pass |
| 5 | 0 | Báo lỗi | Loi: n phai la so nguyen duong | Pass |
| 6 | -3 | Báo lỗi | Loi: n phai la so nguyen duong | Pass |
| 7 | 25 | Báo lỗi tràn số | Loi: n qua lon, ket qua co the bi tran so | Pass |
| 8 | "n" | Báo lỗi, không crash | Loi: du lieu khong hop le | Pass |

---

## Tổng kết

| Bài | Tổng số test case | Pass | Fail |
|---|---|---|---|
| 1 | 7 | 7 | 0 |
| 2 | 6 | 5 | 1 |
| 3 | 8 | 8 | 0 |
| 4 | 12 | 12 | 0 |
| 5 | 8 | 8 | 0 |
| 6 | 6 | 6 | 0 |
| 7 | 8 | 8 | 0 |
| 8 | 8 | 8 | 0 |
| **Tổng** | **63** | **62** | **1** |

**Ghi chú:** Test case #3 của Bài 2 (diện tích với a=b=0.01) Fail vì chương trình dùng `%.2f` khi in kết quả, làm tròn 0.0001 xuống 0.00 — trông như sai nhưng thực chất là do định dạng in số. Nên sửa `printf` trong `bai2_dien_tich_hcn.c` sang `%.4f` (hoặc nhiều số thập phân hơn) nếu muốn hiển thị đúng số rất nhỏ.
