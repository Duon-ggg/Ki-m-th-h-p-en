# Bài thực hành: Kiểm thử hộp đen

## Cấu trúc repo

```
├── src/
│   ├── bai1_chu_vi_hcn.c
│   ├── bai2_dien_tich_hcn.c
│   ├── bai3_phuong_trinh_bac2.c
│   ├── bai4_so_ngay_thang.c
│   ├── bai5_so_nguyen_to.c
│   ├── bai6_tong_dan_xen.c
│   ├── bai7_uwcln.c
│   ├── bai8_tong_giai_thua.c
├── test_cases.md      # Danh sách test case cho cả 8 bài
├── test_results.md     # Kết quả chạy kiểm thử (điền sau khi chạy thực tế)
└── README.md
```

## Quy trình làm việc trên GitHub

1. Tạo repo, push mã nguồn `src/` và `test_cases.md` lên nhánh `main`.
2. **Issue 1** – "Thiết kế test case dữ liệu hợp lệ": copy các dòng test case *hợp lệ* của từng bài từ `test_cases.md` vào nội dung issue.
   - Giải quyết issue: viết/chạy các test case đó, commit với message dạng `test: thuc hien test case du lieu hop le - issue #1`.
3. **Issue 2** – "Thiết kế test case dữ liệu không hợp lệ, biên, ngoại lệ": copy các dòng test case *không hợp lệ / biên* từ `test_cases.md` vào nội dung issue.
   - Giải quyết issue: viết/chạy các test case đó, commit với message dạng `test: thuc hien test case du lieu khong hop le - issue #2`.
4. Đóng từng issue sau khi commit tương ứng đã push, tham chiếu issue trong commit message (ví dụ `Closes #1`).
5. Điền `test_results.md` với kết quả thực tế (Pass/Fail) sau khi chạy từng test case.

## Biên dịch và chạy

```bash
gcc -o bai1 src/bai1_chu_vi_hcn.c -lm
./bai1
```

(Áp dụng tương tự cho các bài còn lại; bài 3 cần liên kết thư viện `-lm`.)
