# BTC3-Nhap-Mon-CNTT
def tong_so_chan(a: int, b: int) -> int:
   """Trả về tổng các số nguyên chẵn nằm trong khoảng [a, b] (bao gồm cả a và b)."""
   if a > b:
       a, b = b, a
   return sum(x for x in range(a, b + 1) if x % 2 == 0)


def main() -> None:
   try:
       a = int(input("Nhập số nguyên a: "))
       b = int(input("Nhập số nguyên b: "))
       ket_qua = tong_so_chan(a, b)
       print(f"Tổng các số chẵn trong đoạn [{a}, {b}] là: {ket_qua}")
   except ValueError:
       print("Vui lòng nhập hai số nguyên hợp lệ!")


if __name__ == "__main__":
   main()