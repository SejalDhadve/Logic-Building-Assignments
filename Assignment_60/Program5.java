
import java.io.*;

public class Program5
{
    public static void main(String A[]) throws IOException
    {
        String path = "file.txt";
        
        BufferedReader reader = new BufferedReader(new FileReader(path));

        String line;

        int countWord = 0;
        int sentenceCount = 0;
        int characterCount= 0;
        int paragraphCount = 1;
        int whitespaceCount = 0;

        while((line = reader.readLine()) != null)
        {
                if (line.trim().isEmpty()) 
                {
                    paragraphCount++;
                    continue;
                }

                paragraphCount = paragraphCount == 0 ? 1 : paragraphCount;

                characterCount = characterCount + line.length();
                whitespaceCount = whitespaceCount + (int)line.chars().filter(c -> c == ' ' || c == '\t').count();

                String[] words = line.trim().split("\\s+");
                countWord = countWord + words.length;

                sentenceCount += line.split("[.!?]").length;
        }

        reader.close();

        System.out.println("Total word count : "+countWord);
        System.out.println("Total number of sentence : "+sentenceCount);
        System.out.println("Total number of characters : "+characterCount);
        System.out.println("Number of paragraphs : "+paragraphCount);
        System.out.println("Total number of whitespaces : "+whitespaceCount);
    }
}