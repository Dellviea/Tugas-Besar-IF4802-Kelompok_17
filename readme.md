# 🏥 Sistem Poli Klinik – Multi Linked List (C++)
Program ini merupakan **Tugas Besar Struktur Data** yang mengimplementasikan  **Multi Linked List** untuk memodelkan sistem **Klinik** (Poli – Dokter – Pasien).

---
## 📌 Studi Kasus
Sistem klinik memiliki:
- Beberapa **Poli**
- Setiap poli memiliki **Dokter**
- Setiap poli dapat memiliki **banyak Pasien**

Struktur data yang digunakan:
- **Poli** -> parent (Single Linked List)
- **Pasien** -> child (Double Linked List)

---
## 🧩 Struktur Data
### 🔹 Poli (Parent)
- Single Linked List
- Menyimpan:
  - ID Poli
  - Nama Poli
  - ID Dokter
  - Nama Dokter
- Memiliki pointer ke list pasien

### 🔹 Pasien (Child)
- Double Linked List
- Menyimpan:
  - ID Pasien
  - Nama Pasien
  - Tanggal Kunjungan

---
## Fitur - fitur pada Program
### Operasi Dasar (ADT)
- Alokasi node
- Insert:
  - First
  - Last
  - After
- Delete:
  - First
  - Last
  - After
- Pencarian data (find element)
- Menampilkan data

---
### Menu Admin
- Kelola Poli (insert & delete first/last/after)
- Kelola Pasien pada Poli
- Operasi teknis struktur data
- Laporan statistik

### Menu User
- Melihat semua poli
- Melihat detail poli (dokter & pasien)
- Mencari pasien
- Melihat laporan

---

### Laporan & Komputasi
- Jumlah pasien per poli
- Total pasien seluruh poli

---