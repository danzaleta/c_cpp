public class StringReverse{

    public String reverseString(String str)
    {
        if(str.isEmpty())
        {
            return str;
        }
        else
        {
            System.out.println((str.substring(1))+str.charAt(0));
            return reverseString(str.substring(1))+str.charAt(0);
        }
    }
    public static void main(String[] args)
    {
        StringReverse obj = new StringReverse();
        String result = obj.reverseString("Hola mi parcero");
        System.out.println(result);
    }
}