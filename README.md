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
    }```
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
     }; ```
   - **Akses Elemen:**
     ```c
     int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int nilai = matriks[1][2]; // Mengakses elemen baris kedua, kolom ketiga```

7. **Penggunaan Pointer dengan Array:**
   - **Contoh:**
     ```c
     int angka[] = {10, 20, 30};
     int *pointer = angka;
     int nilai = *pointer; // Mendapatkan nilai pertama dalam array
     ```

<h1>Job Sheet 8 : Fungsi & Prosedur</h1>

1. **Pengertian Fungsi:**
   - **Definisi:** 
   Fungsi adalah sub-program yang memiliki nama, parameter, dan nilai kembalian. Parameter adalah variabel yang digunakan untuk menerima input dari pemanggil fungsi. Nilai 
   kembalian adalah hasil yang dikirimkan oleh fungsi ke pemanggil fungsi. Fungsi bisa dipanggil berkali-kali dari tempat yang berbeda dalam program.

  Contoh fungsi yang paling sering kita buat dan panggil adalah fungsi main(). Fungsi ini adalah fungsi utama yang akan dieksekusi pertama kali oleh program C. Fungsi 
  main() biasanya tidak memiliki parameter dan nilai kembalian, sehingga kita menggunakan tipe data void untuk menyatakannya.
  
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
   Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri di dalam tubuh fungsi. Fungsi rekursif biasanya digunakan untuk menyelesaikan masalah yang memiliki pola berulang atau bisa dibagi menjadi sub-masalah yang lebih kecil. Fungsi rekursif harus memiliki kondisi berhenti (base case) untuk menghindari looping tanpa akhir.

Contoh fungsi rekursif adalah fungsi untuk menghitung faktorial dari sebuah bilangan. Faktorial dari n adalah hasil perkalian dari 1 sampai n. Rumusnya adalah:

`n! = n x (n-1) x (n-2) x ... x 2 x 1`

**Contoh:**

`5! = 5 x 4 x 3 x 2 x 1 = 120`

Fungsi rekursif untuk menghitung faktorial adalah:

```c
// fungsi untuk menghitung faktorial
int faktorial(int n) {
  // n adalah parameter berupa bilangan bulat positif
  // kondisi berhenti jika n = 0 atau n = 1
  if (n == 0 || n == 1) {
    return 1;
  }
  // rekursi dengan memanggil fungsi faktorial dengan argumen n-1
  else {
    return n * faktorial(n-1);
  }
}
```

4. **Variabel Lokal & Global:**
   -Variabel lokal dan variabel global adalah dua jenis variabel yang berbeda dalam cakupan dan ruang lingkupnya. Variabel lokal adalah variabel yang hanya bisa diakses dari dalam fungsi tempat variabel itu dideklarasikan. Variabel global adalah variabel yang bisa diakses dari semua fungsi dalam program.

**Contoh:**

```c
#include <stdio.h>

// variabel global
int x = 10;

// fungsi untuk menampilkan nilai x
void tampil() {
  // variabel lokal
  int x = 20;
  // mencetak nilai x lokal
  printf("Nilai x lokal adalah %d\n", x);
}

void main() {
  // memanggil fungsi tampil
  tampil();
  // mencetak nilai x global
  printf("Nilai x global adalah %d\n", x);
}
```

Hasil:

```
Nilai x lokal adalah 20
Nilai x global adalah 10
```

5. **Pass by Value:**
   Pass by value dan pass by reference adalah dua cara untuk memberikan nilai ke parameter fungsi. Pass by value berarti kita memberikan nilai langsung ke parameter, sehingga parameter akan memiliki salinan dari nilai tersebut. Perubahan yang terjadi pada parameter tidak akan mempengaruhi nilai aslinya.

Pass by reference berarti kita memberikan alamat memori dari nilai ke parameter, sehingga parameter akan menunjuk ke lokasi yang sama dengan nilai tersebut. Perubahan yang terjadi pada parameter akan mempengaruhi nilai aslinya.

**Contoh:**

```c
#include <stdio.h>

// fungsi untuk menukar nilai dua variabel dengan pass by value
void tukar_value(int a, int b) {
  // a dan b adalah parameter yang menerima salinan dari nilai variabel
  // membuat variabel sementara untuk menyimpan nilai a
  int temp = a;
  // menukar nilai a dengan b
  a = b;
  // menukar nilai b dengan temp
  b = temp;
  // mencetak nilai a dan b setelah ditukar
  printf("Nilai a dan b di dalam fungsi tukar_value adalah %d dan %d\n", a, b);
}

// fungsi untuk menukar nilai dua variabel dengan pass by reference
void tukar_reference(int *a, int *b) {
  // a dan b adalah parameter yang menerima alamat memori dari variabel
  // membuat variabel sementara untuk menyimpan nilai a
  int temp = *a;
  // menukar nilai a dengan b
  *a = *b;
  // menukar nilai b dengan temp
  *b = temp;
  // mencetak nilai a dan b setelah ditukar
  printf("Nilai a dan b di dalam fungsi tukar_reference adalah %d dan %d\n", *a, *b);
}

void main() {
  // membuat variabel x dan y
  int x = 10;
  int y = 20;
  // mencetak nilai x dan y sebelum ditukar
  printf("Nilai x dan y sebelum ditukar adalah %d dan %d\n", x, y);
  // memanggil fungsi tukar_value dengan argumen x dan y
  tukar_value(x, y);
  // mencetak nilai x dan y setelah ditukar dengan pass by value
  printf("Nilai x dan y setelah ditukar dengan pass by value adalah %d dan %d\n", x, y);
  // memanggil fungsi tukar_reference dengan argumen alamat memori dari x dan y
  tukar_reference(&x, &y);
  // mencetak nilai x dan y setelah ditukar dengan pass by reference
  printf("Nilai x dan y setelah ditukar dengan pass by reference adalah %d dan %d\n", x, y);
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
   - **Definisi:** Pointer adalah variabel yang menyimpan alamat memori dari variabel lain.Dapat digunakan untuk mengakses variabel secara tidak langsung.

2. **Deklarasi Pointer:**
   Deklarasi pointer menggunakan bentuk umum tipe_data *nama_pointer;.tipe_data adalah tipe data dari variabel yang akan diakses oleh pointer.nama_pointer adalah nama pointer.

3. **Nilai Pointer:**
Nilai pointer adalah alamat memori dari variabel yang diakses oleh pointer.Nilai pointer diakses menggunakan operator *, misalnya: printf("%p\n", angka).
  
4. **Mengakses Variabel Melalui Pointer:**
  Variabel dapat diakses secara tidak langsung melalui pointer dengan menggunakan operator *.Contoh: printf("%d\n", *angka); // 10.

5. **Operasi Pointer:**
    Pointer dapat dioperasikan dengan operator matematika, seperti penjumlahan, pengurangan, perkalian, dan pembagian.Contoh: *angka += 10; untuk menambahkan nilai 10 ke variabel melalui pointer

6. **Pointer Null:**
Pointer null adalah pointer yang tidak menyimpan alamat memori dari variabel apa pun.Dapat digunakan untuk menandakan bahwa pointer tersebut tidak valid.Deklarasi: int *angka = NULL;.

<h1>Job Sheet 10 : Enumerasi & Structure</h1>

**Enumerasi:**

Enumerasi adalah tipe data untuk mendefinisikan daftar nilai-nilai konstan.Digunakan untuk membuat program lebih ringkas dan mudah dibaca.
**Deklarasi Enumerasi:**
Deklarasi enumerasi menggunakan bentuk umum enum nama_enumerasi { konstanta_1, konstanta_2, ... };.nama_enumerasi adalah nama enumerasi, dan konstanta_1, konstanta_2, ... adalah daftar nilai konstan.
**Structure:**
Structure adalah tipe data untuk mendefinisikan kumpulan data terkait.Digunakan untuk membuat program lebih ringkas dan memudahkan pemahaman.Deklarasi Structure:
Deklarasi structure menggunakan bentuk umum struct nama_structure { tipe_data_1 nama_variabel_1; tipe_data_2 nama_variabel_2; ... };.
nama_structure adalah nama structure, tipe_data_1, tipe_data_2, ... adalah tipe data variabel dalam structure, dan nama_variabel_1, nama_variabel_2, ... adalah nama variabel dalam structure.

**Akses Elemen Structure:**
Elemen structure dapat diakses menggunakan operator ..Contoh: printf("%s\n", mahasiswa.nama); untuk mencetak nama variabel nama dalam structure mahasiswa.Materi ini memberikan pemahaman tentang penggunaan enumerasi dan structure dalam pemrograman. Enumerasi berguna untuk mendefinisikan konstan, sementara structure membantu mengorganisir data terkait dalam program.

<h1>Job Sheet 11 : File Handling in C</h1>

**1. Membaca File dengan C:**

fopen: Fungsi untuk membuka file. Contoh: FILE *file = fopen("nama_file.txt", "r");.
Pengecekan Ketersediaan File: Gunakan if (file != NULL) untuk memastikan file berhasil dibuka.
Membaca Data dari File: Gunakan fgets untuk membaca data dari file dalam bentuk baris.

**2. Menulis dalam File dengan C:**

fopen: Juga digunakan untuk membuka file, namun dengan mode "w" atau "a" untuk menulis atau menambahkan pada akhir file.
Mode fopen() dapat bervariasi untuk memperlakukan file berbeda.
Penjelasan variasi mode pada fopen() dalam memperlakukan file.
Menulis Data ke dalam File: Gunakan fprintf untuk menulis data ke dalam file.
Menutup File: Gunakan fclose untuk menutup file setelah selesai membaca atau menulis.

**Contoh Program:**

#include <stdio.h>

int main() {
    // Membaca File
    FILE *bacaFile = fopen("baca_file.txt", "r");
    if (bacaFile != NULL) {
        char buffer[100];
        while (fgets(buffer, sizeof(buffer), bacaFile) != NULL) {
            printf("%s", buffer);
        }
        fclose(bacaFile);
    } else {
        printf("Gagal membaca file\n");
    }

    // Menulis ke File
    FILE *tulisFile = fopen("tulis_file.txt", "w");
    if (tulisFile != NULL) {
        fprintf(tulisFile, "Hello, World!\n");
        fclose(tulisFile);
    } else {
        printf("Gagal menulis ke file\n");
    }

    return 0;
}
Program di atas menunjukkan cara membaca isi file ("baca_file.txt") dan mencetaknya ke layar, serta menulis teks ke file baru ("tulis_file.txt"). Pemeriksaan ketersediaan file sebelum membaca atau menulis sangat penting.





