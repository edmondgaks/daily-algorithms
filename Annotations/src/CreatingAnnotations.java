import java.lang.reflect.Method;
public class CreatingAnnotations {
    public static void main(String[] args) {
        @SuppressWarnings("unused")
        Cat myCat = new Cat("Stella");
        if(myCat.getClass().isAnnotationPresent(VeryImportant.class)) {
            System.out.println("This thing is very important");
        } else {
            System.out.println("This thing is not important");
        }
        for(Method method : myCat.getClass().getDeclaredMethods()) {
            if(method.isAnnotationPresent(RunImmediately.class)) {
                try {
                    method.invoke(myCat);
                } catch (Exception e) {
                    System.out.println(e);
                }

            }
        }
    }
}
