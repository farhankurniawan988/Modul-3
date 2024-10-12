
import com.method.Student;

public class Main {
    public static void main(String[] args) {
        // Membuat objek Student
        Student student = new Student("Ganes", "2311104075", 85, 90, 88);

        // Menampilkan informasi lengkap siswa
        System.out.println(student.getStudentInfo());

        // Menghitung dan menampilkan rata-rata nilai siswa
        System.out.println("Rata-rata nilai: " + student.calculateAverage());

        // Mengubah nomor mata kuliah siswa
        student.changeStudentId("2311104099");

        // Menampilkan informasi setelah perubahan nomor mata kuliah
        System.out.println("\nSetelah perubahan nomor mata kuliah:");
        System.out.println(student.getStudentInfo());
    }
}
