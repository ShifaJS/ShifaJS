public class DemoEnum {
    public static void main(String[] args) {
        // 1. switch with enumeration
        // 2. use of values() and valueOf()
        // 3. using constructor , instance variable, method
        // 4. three methods: ordinal(), compareTo(), equals()
        // 5. replacing interface with enum


        // 1. switch with enumeration
        Apple apple;
        apple=Apple.WINESAP;
        System.out.println("value of apple is "+apple);
        switch (apple){
            case JONATHAN :
                System.out.println("Jonathan is red");
                break;
            case GOLDENDEL:
                System.out.println("golden delicious is yellow");
                break;
            case REDDEL:
                System.out.println("Red delicious is red");
                break;
            case WINESAP:
                System.out.println("Winesap is red");
                break;
            case CORTLAND:
                System.out.println("Cortland is red");
                break;
        }


        // 2. use of values() and valueOf()
        System.out.println("here are all of the Apple constants : ");
        for (var apple1:Apple.values()){
            System.out.println(apple1);
        }
        Apple apple2=Apple.valueOf("CORTLAND");
        System.out.println("the value of apple2 = "+apple2);


        // 3. using constructor , instance variable, method
        System.out.println("the price of all apples: ");
        for (var apple3:Apple.values()){
            System.out.println("the price of "+apple3+" is = "+apple3.getPrice());
        }


        // 4. three methods: ordinal(), compareTo(), equals()
        System.out.println("the ordinal number of the apples constant: ");
        for (var apple4: Apple.values()){
            System.out.println(apple4+" = "+apple4.ordinal());
        }
        // valid comparison, within an enum
        Apple apple5=Apple.CORTLAND;
        Apple apple6=Apple.REDDEL;
        if(apple5.compareTo(apple6)<0)
            System.out.println(apple5+" comes before "+apple6);
        if(apple5.compareTo(apple6)>0)
            System.out.println(apple5+" comes after "+apple6);

        // invalid comparison
        //  if (apple5.compareTo(Mango.FAZLI));

        int ordinalValueOfApple=apple6.ordinal();
        int ordinalValueOfMango=Mango.GOPALBHOG.ordinal();
        if (apple5.equals(Apple.CORTLAND))
            System.out.println(apple5+" == "+Apple.CORTLAND);
        // why should we use equal methods for equality instead of ordinal number
        if(ordinalValueOfApple==ordinalValueOfMango)
            System.out.println(apple6+" == "+Mango.GOPALBHOG);
        if(apple5.equals(Mango.GOPALBHOG))
            System.out.println(apple5+" == "+Mango.GOPALBHOG);


        // 5. replacing interface with enum
        Question question=new Question();
        System.out.println("the answer is : "+question.ask());
        System.out.println("the answer is : "+question.ask());
        System.out.println("the answer is : "+question.ask());
        System.out.println("the answer is : "+question.ask());
    }
}
