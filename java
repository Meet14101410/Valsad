import java.util.ArrayList;

public class ValsadCity {
    private String name = "Valsad";
    private String region = "South Gujarat";
    private boolean isCoastal = true;

    public void displayProfile() {
        System.out.println("Exploring " + name);
        System.out.println("-------------------------");
        System.out.println("Region:    " + region);
        System.out.println("Geography: " + (isCoastal ? "Coastal (Arabian Sea)" : "Inland"));
        System.out.println("Note:      Home to Atul Ltd, India's first chemical complex.");
    }

    public static void main(String[] args) {
        new ValsadCity().displayProfile();
    }
}
