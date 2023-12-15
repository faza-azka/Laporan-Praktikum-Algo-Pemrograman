# Laporan-Praktikum-Algoritma-Pemograman
Nama : Faza Azka Mahasya
Nomor Induk Mahasiswa : 23343038
Jurusan : Informatika
Universitas : Universitas Negeri Padang
Dosen : Randi Proska Sandra, M.Sc
Kode Kelas : INF1.62.1008
Semester : 1

<h1> Job Sheet 1 : Pengantar Algoritma dan Pemrograman</h1>

1. **Algoritma:**
Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan suatu masalah atau mencapai suatu tujuan tertentu.

3. **Pemrograman:**
Pemrograman bisa diartikan sebuah tindakan atau aktivitas penulisan, menguji, memperbaiki, dan memelihara kode yang dipahami oleh komputer.Pemrograman adalah proses penulisan kode menjadi sebuah program.Pemrograman adalah suatu seni dalam menggunakan satu atau lebih algoritme yang saling berhubungan dengan menggunakan suatu bahasa pemrograman tertentu sehingga menjadi suatu program komputer.

3. **Algoritma Pemrograman:**
 Algoritma pemrograman mengacu pada penggunaan algoritma dalam konteks pembuatan program komputer. Ini mencakup merancang dan mengimplementasikan langkah-langkah terstruktur untuk menyelesaikan tugas atau mencapai fungsi tertentu dalam sebuah program. Algoritma pemrograman mencakup pemilihan struktur data, logika kontrol, dan langkah-langkah detail lainnya yang diperlukan untuk menghasilkan program yang efisien dan efektif.

<h1> Job Sheet 2 : Pemrograman Dasar C</h1> 

<h3>1. Struktur Dasar C</h3>
Dalam setiap bahasa pemrograman memiliki sintaks tersendiri yang dapat diartikan sebagai aturan penulisan kode pada bahasa pemrograman tersebut.Ini adalah struktur dasar yang wajib dipahami. Struktur program C dibagi menjadi berikut

-Header Files<br>
-Main Function<br>
-Statement<br>
-Semicolons<br>
-Identifier<br>
-Comments<br>
-Whitespaces<br>

<h3>2. Proses Input dan Output</h3>

1. **Input** adalah sesuatu data yang kita masukan ke dalam program. Input biasanya diambil dari perangkat inputan seperti keyboard, mouse, kamera, microphone, dll. Dalam bahasa c Ada tiga macam fungsi yang bisa digunakan untuk menampilkan input, yaitu scanf(), gets(), dan fgets().<br>
2. **Proses** adalah langkah-langkah yang harus dilakukan program untuk menghasilkan output.
3. **Output** adalah informasi yang dihasilkan setelah dilakukan proses. Output biasanya ditampilkan ke layar komputer. Dalam bahasa c Ada dua macam fungsi yang bisa digunakan untuk menampilkan output, yaitu printf() dan puts()

<h1>Job Sheet 3 : Variabel, Konstanta & Tipe Data</h1>

1. **Variabel:**
   - **Variabel adalah tempat penyimpanan nilai dalam pemrograman.** 
   - **Tipe data menentukan jenis nilai yang disimpan dalam variabel.**
   - **Contoh deklarasi variabel dalam bahasa pemrograman C: int tinggi; atau int berat = 49;.**
    

2. **Aturan Penulisan Variabel pada C:**
   - **Nama variabel tidak boleh diawali dengan simbol atau angka.** 
   - **Tidak boleh menggunakan kata kunci bahasa C sebagai nama variabel.** 
   - **Penulisan nama variabel bersifat case-sensitive.**
   - **Disarankan menggunakan underscore untuk variabel dengan dua suku kata.**

3. **Tipe Data:**
   - **Tipe data adalah jenis data yang mengelompokkan cara data diolah.**
   - **Tipe data dasar dalam C mencakup Char, Integer, Float, dan Double.**
   - **Penggunaan format %f dan %.2f untuk mencetak tipe data Float dan Double.**
   - **Tipe data Void digunakan untuk menyatakan tidak ada data.**
     
4. **Konversi Tipe Data:**
   - **Konversi tipe data adalah proses mengubah tipe data menjadi tipe yang lain.** 
   - **Contoh konversi tipe data dalam C: float a = (float)10 / 4;.** 

5. **Konstanta:**
   - **Konstanta adalah nilai tetap yang tidak dapat diubah.** 
   - **Dapat dibuat dengan menggunakan #define atau const.**
   - **Penulisan huruf kapital disarankan untuk nama konstanta.**

<h1>Job Sheet 4 : Operator</h1>

1. **Operator Aritmatika:**
   - **Contoh**Penjumlahan (+)Pengurangan (-)Perkalian (*)Pembagian (/)Sisa Bagi (%)
   - **Fungsi:** Digunakan untuk operasi matematika.

2. **Operator Penugasan:**
   - **Contoh:** Pengisian Nilai (=)Pengisian dan Penambahan (+=)Pengisian dan Pengurangan (-=)Pengisian dan Perkalian (*=)Pengisian dan Pembagian (/=)Pengisian dan Sisa bagi (%=)
   - **Fungsi:** Digunakan untuk memberikan nilai atau tugas pada variabel.
   
3. **Operator Pembanding:**
   - **Contoh:** LLogika AND (&&)Logika OR (||)Negasi/kebalikan (!)
   - **Fungsi:** Membandingkan dua nilai atau variabel.

4. **Operator Logika:**
   - **Contoh:** `&& (AND), || (OR), ! (NOT)`
   - **Fungsi:**  Digunakan untuk operasi logika.

5. **Operator Bitwise:**
   - **Contoh:** Bitwise AND (&)Bitwise OR (|)Bitwise XOR (^)Bitwise NOT (~)Bitwise Left Shift (<<)Bitwise Right Shift (>>)
   - **Fungsi:** Operasi berdasarkan bit (biner) dari suatu nilai.
 6. **Operator Lain-lain**
   - **Contoh:** Alamat memori (&)Pointer (*)Ternary (?:)Increment (++)Decrement (--)Lainnya (seperti operator untuk manipulasi pointer dan alamat memori).
   - **Fungsi:** Menyediakan cara singkat untuk menulis ekspresi kondisional. Jika kondisi benar, ekspresi1 dievaluasi; jika salah, ekspresi2 dievaluasi.

<h1>Job Sheet 5 : Flow Control: Decision Making</h1>

Percabangan dalam pemrograman C memungkinkan kontrol alur program berdasarkan kondisi tertentu. `if` dan `if else` menyediakan percabangan kondisional, `switch case` memberikan alternatif berdasarkan nilai ekspresi, operator ternary memberikan cara singkat untuk menyatakan kondisi, dan percabangan bersarang memungkinkan keputusan yang lebih kompleks.

1. **Fungsi If:**
   - **Contoh**
     ```c
     if (total_belanja > 100000) {
    printf("Selamat, Anda dapat bonus diskon!");
}
    - **Percabangan dengan satu blok pilihan saat kondisi benar.Blok program diapit oleh '{}'.**
  

2. **Fungsi If Else:**
   - **Contoh**
     ```c
     if (password_benar) {
    printf("Selamat datang bos!");
} else {
    printf("Password salah, coba lagi!");
}  ```
   - **Percabangan dengan dua blok pilihan (benar dan salah).Pesan luar blok tetap ditampilkan.** 

3. **Switch Case:**
   - **Contoh**
     ```c
   switch (grade) {
    case 'A':
       // ...
       break;
    case 'B':
    case 'E':
       // ...
       break;
    // ...
    default:
       // ...
}```
   - **Alternatif untuk percabangan if/else if.Banyak blok kode (case) di dalam blok switch.Menggunakan break untuk menghentikan pengecekan.**

4. **Operator Ternary:**
   - **Struktur:**
     ```c
     (kondisi) ? nilai1 : nilai2;
     ```
   - **Bentuk singkat dari if/else.Menggantikan kondisi if/else dengan operator ternary.** 

5. **Percabangan Bersarang (Nested):**
   - **Contoh:**
     ```c
     if (kondisi1) {
         if (kondisi2) {
             // blok kode
         } else {
             // blok kode
         }
     } else {
         // blok kode
     }
     ```
   - **Menempatkan percabangan di dalam percabangan.Meningkatkan kompleksitas logika program.** 

<h1>Job Sheet 6 : Flow Control: Loop (Perulangan)</h1>

1. **Perulangan For:**
   - **Contoh**
     ``for (int i = 0; i < 10; i++) {
    // Blok program yang diulang
}

     ```
   - **Fungsi:** Mengeksekusi blok kode dalam loop selama kondisi terpenuhi. Inisialisasi dilakukan hanya sekali, kondisi dievaluasi sebelum setiap iterasi, dan iterasi dilakukan setelah setiap iterasi.

2. **Perulangan While:**
   - **Contoh**
     ```c
    while (ulangi == 'y') {
    // Blok program yang diulang selama ulangi == 'y'
} ```
   - **Fungsi:** Mengeksekusi blok kode dalam loop selama kondisi terpenuhi. Kondisi dievaluasi sebelum setiap iterasi.

3. **Perulangan Do While:**
   - **Contoh**
     ```c
     do {
    // Blok program yang diulang
} while (ulangi == 'y');```
   - **Fungsi:** Mirip dengan `while`, tetapi blok kode dieksekusi setidaknya satu kali karena kondisi dievaluasi setelah eksekusi.

4. **Perulangan Bersarang (Nested Loop):**
   - **Contoh:**
     ```c
    for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 3; j++) {
        // Blok program yang diulang
    }
}     ```
   - **Fungsi:** Menempatkan satu atau lebih loop di dalam loop lainnya. Digunakan untuk melakukan iterasi melalui elemen dalam struktur data berdimensi atau untuk menghasilkan pola khusus.

<h1>Job Sheet 7 : Struktur Data: Array</h1>

**Pengertian Array dan Penggunaan Array dalam Bahasa Pemrograman C:**

Array adalah alat yang kuat dalam bahasa pemrograman C yang memungkinkan pengelolaan kumpulan data dengan cara yang efisien. Penggunaannya sangat umum dalam memproses dan menyimpan data terstruktur, seperti daftar nilai, elemen matriks, atau karakter dalam string.

1. **Pengertian Array:**
   - **Definisi:** Array adalah struktur data yang digunakan untuk menyimpan kumpulan elemen dengan tipe data yang sama dalam satu variabel.
   - **Karakteristik:** Elemen-elemen array diakses melalui indeks numerik, dimulai dari 0. Ukuran array ditentukan saat deklarasi dan tidak dapat diubah setelahnya.

2. **Deklarasi dan Inisialisasi Array:**
   - **Deklarasi:**
     ```c
     tipe_data nama_array[ukuran];
     ```
   - **Inisialisasi:**
     ```c
     tipe_data nama_array[] = {elemen1, elemen2, ..., elemenN};
     ```

3. **Akses Elemen Array:**
   - **Menggunakan Indeks:**
     ```c
     int angka[3] = {10, 20, 30};
     int nilai = angka[1]; // Mengakses elemen kedua (indeks 1)
     ```

4. **Perulangan untuk Memproses Array:**
   - **Contoh Perulangan For:**
     ```c
     for (int i = 0; i < ukuran_array; i++) {
         // Blok kode untuk memproses elemen array
     }
     ```

5. **Operasi pada Array:**
   - **Pengisian Array:**
     ```c
     int numbers[5];
     for (int i = 0; i < 5; i++) {
         numbers[i] = i * 10;
     }
     ```
   - **Penjumlahan Elemen:**
     ```c
     int total = 0;
     for (int i = 0; i < ukuran_array; i++) {
         total += angka[i];
     }
     ```

6. **Array Multidimensi:**
   - **Deklarasi dan Inisialisasi:**
     ```c
     tipe_data nama_array[baris][kolom] = {
         {elemen1, elemen2},
         {elemen3, elemen4}
         // ...
     };
     ```
   - **Akses Elemen:**
     ```c
     int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int nilai = matriks[1][2]; // Mengakses elemen baris kedua, kolom ketiga
     ```

7. **Penggunaan Pointer dengan Array:**
   - **Contoh:**
     ```c
     int angka[] = {10, 20, 30};
     int *pointer = angka;
     int nilai = *pointer; // Mendapatkan nilai pertama dalam array
     ```

<h1>Job Sheet 8 : Fungsi & Prosedur</h1>

1. **Pengertian Fungsi:**
   - **Definisi:** Fungsi adalah blok kode terorganisir yang dapat dipanggil oleh nama dan dapat digunakan untuk mengeksekusi tugas tertentu. Fungsi membantu membagi program menjadi bagian-bagian yang lebih kecil dan terkelola.

2. **Penggunaan Fungsi:**
   - **Deklarasi dan Definisi:**
     ```c
     tipe_data nama_fungsi(parameter) {
         // Blok kode fungsi
     }
     ```
   - **Pemanggilan Fungsi:**
     ```c
     tipe_data hasil = nama_fungsi(argumen);
     ```

3. **Fungsi Rekursif:**
   - **Definisi:** Fungsi yang memanggil dirinya sendiri selama eksekusi.
   - **Contoh:** Faktorial
     ```c
     int faktorial(int n) {
         if (n == 0 || n == 1)
             return 1;
         else
             return n * faktorial(n - 1);
     }
     ```

4. **Variabel Lokal & Global:**
   - **Variabel Lokal:**
     - Dideklarasikan di dalam fungsi dan hanya dapat diakses di dalam fungsi tersebut.
     - Hidup selama eksekusi fungsi.
   - **Variabel Global:**
     - Dideklarasikan di luar fungsi dan dapat diakses oleh seluruh bagian program.
     - Hidup sepanjang program.

5. **Pass by Value:**
   - **Definisi:** Metode melewatkan argumen ke fungsi dengan menyalin nilainya.
   - **Karakteristik:**
     - Variabel asli tidak terpengaruh oleh perubahan di dalam fungsi.
     - Efisiensi memori karena nilai disalin.
   - **Contoh:**
     ```c
     void fungsi(int x) {
         x = x + 10;
     }
     ```

6. **Pass by Reference:**
   - **Definisi:** Metode melewatkan argumen ke fungsi dengan memberikan referensi atau alamat memorinya.
   - **Karakteristik:**
     - Perubahan di dalam fungsi mempengaruhi variabel asli.
     - Memerlukan operator dereference (`*`) untuk mengakses nilai.
   - **Contoh:**
     ```c
     void fungsi(int *x) {
         *x = *x + 10;
     }
     ```

<h1>Job Sheet 9 : Pointer</h1>

1. **Pengertian Pointer:**
   - **Definisi:** Pointer adalah variabel yang berisi alamat memori. Mereka digunakan untuk menyimpan alamat memori dari variabel atau fungsi.

2. **Penggunaan Pointer:**
   - **Deklarasi dan Inisialisasi:**
     ```c
     tipe_data *nama_pointer;
     ```
   - **Menggunakan Operator Address-of (&) dan Dereference (*):**
     ```c
     int angka = 10;
     int *pointer_angka = &angka; // Pointer menyimpan alamat memori
     int nilai = *pointer_angka; // Mengakses nilai dengan dereference
     ```

3. **Pointer untuk Pass by Reference:**
   - **Menggunakan Pointer sebagai Parameter Fungsi:**
     ```c
     void tambahSepuluh(int *x) {
         *x = *x + 10;
     }
     // Pemanggilan fungsi
     int angka = 5;
     tambahSepuluh(&angka);
     ```
   - **Fungsi di atas akan mengubah nilai variabel `angka` karena melewatkan alamat memori ke fungsi.**

4. **Pointer untuk Mengakses Array:**
   - **Deklarasi Pointer untuk Array:**
     ```c
     int angka[] = {1, 2, 3, 4, 5};
     int *pointer_angka = angka; // Pointer menyimpan alamat elemen pertama
     ```
   - **Menggunakan Pointer untuk Mengakses Elemen Array:**
     ```c
     for (int i = 0; i < 5; i++) {
         printf("%d ", *(pointer_angka + i)); // Mengakses elemen dengan pointer
     }
     ```

<h1>Job Sheet 10 : Enumerasi & Structure</h1>

1. **Pengertian Enum:**
   - **Definisi:** Enum (Enumerated Types) adalah tipe data khusus yang memungkinkan programmer untuk mendefinisikan kumpulan konstanta bernama yang memiliki nilai-nilai terkait.

2. **Pengertian Structure:**
   - **Definisi:** Structure adalah tipe data yang memungkinkan penyimpanan berbagai tipe data yang berbeda dalam satu unit, yang disebut sebagai "struktur."

3. **Penggunaan Enum:**
   - **Deklarasi dan Penggunaan:**
     ```c
     enum Hari {MINGGU, SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU};
     enum Hari hari_ini = SELASA;
     ```

4. **Penggunaan Struct:**
   - **Deklarasi dan Penggunaan:**
     ```c
     struct Mahasiswa {
         char nama[50];
         int usia;
         float ipk;
     };
     struct Mahasiswa mhs1;
     ```

5. **Penggunaan typedef pada Struct:**
   - **Deklarasi dengan typedef:**
     ```c
     typedef struct {
         char nama[50];
         int usia;
         float ipk;
     } Mahasiswa;
     Mahasiswa mhs1;
     ```

6. **Struct Bersarang:**
   - **Contoh Struct Bersarang:**
     ```c
     struct Alamat {
         char jalan[50];
         char kota[30];
     };

     struct Mahasiswa {
         char nama[50];
         int usia;
         struct Alamat alamat;
     };
     ```

7. **Passing Struct ke dalam Fungsi:**
   - **Menggunakan Parameter:**
     ```c
     void tampilkanMahasiswa(struct Mahasiswa mhs) {
         printf("Nama: %s\nUsia: %d\n", mhs.nama, mhs.usia);
     }
     // Pemanggilan fungsi
     tampilkanMahasiswa(mhs1);
     ```
   - **Menggunakan Pointer:**
     ```c
     void updateUsia(struct Mahasiswa *mhs, int usia_baru) {
         mhs->usia = usia_baru;
     }
     // Pemanggilan fungsi
     updateUsia(&mhs1, 22);
     ```

<h1>Job Sheet 11 : File Handling in C</h1>

File handling adalah kemampuan untuk membaca, menulis, dan memanipulasi file di dalam program bahasa C. File handling dapat digunakan untuk berbagai keperluan, antara lain:

* **Menyimpan data**
* **Membaca data**
* **Mengedit data**
* **Menghapus data**
* **Membuat file baru**

**Fungsi-fungsi File Handling dalam Bahasa C**

Berikut adalah beberapa fungsi file handling yang sering digunakan dalam bahasa C:

* **fopen()** : digunakan untuk membuka file
* **fclose()** : digunakan untuk menutup file
* **fread()** : digunakan untuk membaca data dari file
* **fwrite()** : digunakan untuk menulis data ke file
* **fseek()** : digunakan untuk memindahkan posisi pointer di file
* **ftell()** : digunakan untuk mendapatkan posisi pointer di file

**Contoh Penggunaan File Handling**

Berikut adalah contoh penggunaan file handling untuk menulis data ke file:

```c
#include <stdio.h>

int main() {
  // membuka file untuk ditulis
  FILE *file = fopen("data.txt", "w");

  // menulis data ke file
  fprintf(file, "Ini adalah data yang akan ditulis ke file.\n");

  // menutup file
  fclose(file);

  return 0;
}
```

Output:

```
Ini adalah data yang akan ditulis ke file.
```

Berikut adalah contoh penggunaan file handling untuk membaca data dari file:

```c
#include <stdio.h>

int main() {
  // membuka file untuk dibaca
  FILE *file = fopen("data.txt", "r");

  // membaca data dari file
  char buffer[100];
  fgets(buffer, sizeof(buffer), file);

  // menutup file
  fclose(file);

  // menampilkan data yang dibaca
  printf("Data yang dibaca dari file: %s\n", buffer);

  return 0;
}
```

Output:

```
Data yang dibaca dari file: Ini adalah data yang akan ditulis ke file.
```

**Kesimpulan**

File handling adalah kemampuan yang penting dalam bahasa C. Dengan menggunakan fungsi-fungsi seperti fopen(), fclose(), fread(), dan fwrite(), program dapat membuka, menutup, membaca, dan menulis data ke dalam file. Contoh-contoh di atas menunjukkan bagaimana kita dapat dengan mudah membuat dan mengakses file, serta melakukan operasi dasar seperti penulisan dan pembacaan data. File handling sangat berguna untuk menyimpan dan memanipulasi informasi, sehingga memungkinkan program C untuk berinteraksi dengan data yang disimpan di dalam file.
