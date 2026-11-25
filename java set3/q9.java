import java.io.IOException;

class FileProcessor {

    void process(String filename) throws IOException {
        System.out.println("Processing File: " + filename);
    }

    void process(String filename, String mode) throws IOException {
        System.out.println("File: " + filename);
        System.out.println("Mode: " + mode);
    }
}

class TextProcessor extends FileProcessor {

    @Override
    void process(String filename) {
        System.out.println("Text File Processed: " + filename);
    }
}

class ImageProcessor extends FileProcessor {

    @Override
    void process(String filename) throws IOException {

        if (!filename.endsWith(".jpg")) {
            throw new IOException("Invalid Image File");
        }

        System.out.println("Image Processed: " + filename);
    }
}

public class Problem9 {
    public static void main(String[] args) {

        FileProcessor[] files = {
            new TextProcessor(),
            new ImageProcessor()
        };

        for (FileProcessor f : files) {
            try {
                if (f instanceof TextProcessor) {
                    f.process("notes.txt");
                } else {
                    f.process("photo.jpg");
                }
            } catch (IOException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}