// Class Vehicle
public class Vehicle {
    private String plateNumber;
    private double speed; // Kecepatan dalam km/jam
    private int numWheels;
    private String vehicleType;

    // Konstruktor pertama (hanya menerima plateNumber dan speed)
    public Vehicle(String plateNumber, double speed) {
        this.plateNumber = plateNumber;
        this.speed = speed;
    }

    // Konstruktor kedua (menerima plateNumber, speed, numWheels, vehicleType)
    public Vehicle(String plateNumber, double speed, int numWheels, String vehicleType) {
        this.plateNumber = plateNumber;
        this.speed = speed;
        this.numWheels = numWheels;
        this.vehicleType = vehicleType;
    }

    // Method untuk menghitung waktu perjalanan berdasarkan jarak dan speed
    public double calculateTravelTime(double distance) {
        return distance / speed;
    }

    // Method overloading untuk menghitung waktu perjalanan dengan customSpeed
    public double calculateTravelTime(double distance, double customSpeed) {
        return distance / customSpeed;
    }

    // Method untuk menampilkan informasi kendaraan
    public void displayInfo() {
        System.out.println("Plate Number: " + plateNumber);
        System.out.println("Speed: " + speed + " km/h");
        System.out.println("Number of Wheels: " + numWheels);
        System.out.println("Vehicle Type: " + vehicleType);
    }
}

// Class Main
public class Main {
    public static void main(String[] args) {
        // Membuat objek Car dengan konstruktor pertama
        Vehicle car = new Vehicle("B1234ABC", 100);

        // Membuat objek Truck dengan konstruktor kedua
        Vehicle truck = new Vehicle("T5678XYZ", 80, 6, "Truck");

        // Menampilkan informasi dan perhitungan waktu perjalanan untuk Car
        car.displayInfo();
        System.out.println("Travel time for 500 km: " + car.calculateTravelTime(500) + " hours");

        System.out.println(); // Spasi antar output

        // Menampilkan informasi dan perhitungan waktu perjalanan untuk Truck
        truck.displayInfo();
        System.out.println("Travel time for 500 km: " + truck.calculateTravelTime(500) + " hours");
        System.out.println("Travel time for 500 km with custom speed 60 km/h: " + truck.calculateTravelTime(500, 60) + " hours");
    }
}
