public class Wrapper {
    public static void main(String[] args) {
        //1. character wrapper
        //2. boolean wrapper
        //3. integer wrapper

        //1. character wrapper
        Character character=Character.valueOf('s');
        char ch=character.charValue();
        System.out.println(character+" "+ch);

        //2. boolean wrapper
        Boolean bool=Boolean.valueOf(true);
        boolean boolGet=bool.booleanValue();
        System.out.println(bool+" "+boolGet);

        //3. integer wrapper
        Integer integer=Integer.valueOf(100);
        int ivalue=integer.intValue();
        System.out.println(integer+" "+ivalue);
        String string=Integer.toString(ivalue);
        System.out.println(string+" and length= "+string.length());
    }
}
