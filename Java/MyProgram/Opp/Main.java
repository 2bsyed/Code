
class Pen{
    String color;
    String type;

    public void write(){
        System.out.println("Write something...");
    }
    public void printColor(){
        System.out.println(this.color);
    }
}
class Std{
    String name;
    int id;
    
    public void printStd(){
        System.out.println(this.name);
        System.out.println(this.id);
        
    }
    Std(){}
    Std(Std s2){
        this.name=s2.name;
        this.id=s2.id;
    }
}
public class Main{
    public static void main(String[] args){
        Pen pen1=new Pen();
        pen1.color="blue";
        pen1.type="gel";
        pen1.write();
        pen1.printColor();
        Std std1=new Std();
        std1.name="Syed";
        std1.id=6082;
        std1.printStd();
        Std s2= new Std(std1);
        s2.printStd();
    }
}