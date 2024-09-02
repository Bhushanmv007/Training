public class demo {
      demo() {
            y = 30;
      }

      // Where is a static final variable initialized? static{} block
      static {
            x = 10;
      }
      static final int x;
      // Where do we initialize a final variable? constructor()
      final int y;

      public static void main(String[] args) {
            // System.out.println(y); // Not allowed - Object needed
            System.out.println(x); // Static var - Direct Access
      }
}