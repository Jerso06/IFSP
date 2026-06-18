public class Main {
    public static void main(String[] args){
        int i = 10;
        long l = 20L;
        float f = 30.5f;
        double d = 40.75;

        // ==========================
        // Conversões implícitas
        // ==========================

        long long1 = i;      // int -> long
        float float1 = i;    // int -> float
        double double1 = i;  // int -> double

        float float2 = l;    // long -> float
        double double2 = l;  // long -> double

        double double3 = f;  // float -> double

        // ==========================
        // Conversões com casting
        // ==========================

        int int1 = (int) l;      // long -> int
        int int2 = (int) f;      // float -> int
        int int3 = (int) d;      // double -> int

        long long2 = (long) f;   // float -> long
        long long3 = (long) d;   // double -> long

        float float3 = (float) d; // double -> float

        // Exibindo alguns resultados
        System.out.println("long1 = " + long1);
        System.out.println("float1 = " + float1);
        System.out.println("double1 = " + double1);

        System.out.println("int1 = " + int1);
        System.out.println("int2 = " + int2);
        System.out.println("int3 = " + int3);

        System.out.println("long2 = " + long2);
        System.out.println("long3 = " + long3);

        System.out.println("float3 = " + float3);
    }
}
