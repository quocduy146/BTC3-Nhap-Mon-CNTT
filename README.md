# BTC3nv2 - Tổng các số chẵn trong đoạn [a, b]

## Mô tả bài toán

**Đề bài:** Cho hai số nguyên `a` và `b`. Tính tổng tất cả các số nguyên chẵn nằm trong đoạn `[a, b]` (bao gồm cả `a` và `b`).

**Input:** hai số nguyên `a`, `b` nhập từ bàn phím, mỗi số một dòng.

**Output:** một số nguyên là tổng các số chẵn trong đoạn đó.

**Lưu ý:**
- Nếu `a > b`, chương trình tự hoán đổi để `a` luôn là đầu nhỏ hơn.
- Số âm và số 0 vẫn được xử lý đúng (0 là số chẵn, cộng vào tổng không đổi).
- Nhập sai định dạng (chữ, ký tự lạ) thì chương trình báo lỗi và dừng.

**Cách giải:** duyệt từng số `x` từ `a` đến `b`, nếu `x % 2 == 0` thì cộng `x` vào biến tổng.

**Ví dụ:**

| a | b | Các số chẵn | Kết quả |
|---|---|-------------|---------|
| 1 | 10 | 2, 4, 6, 8, 10 | 30 |
| 10 | 1 | 2, 4, 6, 8, 10 | 30 |
| -4 | 3 | -4, -2, 0, 2 | -4 |
| 5 | 5 | (không có) | 0 |

## Cách chạy

**1. Biên dịch** (cần cài sẵn `g++`, và đứng đúng thư mục chứa file):

```bash
g++ -o BTC3nv2 BTC3nv2.cpp
```

**2. Chạy:**

- Linux / macOS:
  ```bash
  ./BTC3nv2
  ```
- Windows (CMD hoặc PowerShell):
  ```bash
  BTC3nv2.exe
  ```

**3. Nhập dữ liệu theo yêu cầu:**

```
Nhap so nguyen a: 1
Nhap so nguyen b: 10
Tong cac so chan trong doan [1, 10] la: 30
```

**Nếu dùng IDE** (Code::Blocks, Dev-C++, Visual Studio Code...): mở file `BTC3nv2.cpp` rồi bấm Build & Run, không cần gõ lệnh.
