import java.util.Random;

public class Question {
    Random random=new Random();

    public Answers ask()
    {
        int probability=(int) (100* random.nextDouble());
        if(probability<15)
            return Answers.MAYBE;
        else if(probability<30)
            return Answers.NO;
        else if(probability<60)
            return Answers.YES;
        else if(probability<75)
            return Answers.LATER;
        else if(probability<98)
            return Answers.SOON;
        else
            return Answers.NEVER;
    }
}
