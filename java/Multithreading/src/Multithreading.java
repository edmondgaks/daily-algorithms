public class Multithreading implements Runnable {
    public int threadNumber;
    public Multithreading(int threadNumber) {
        this.threadNumber = threadNumber;
    }
    @Override
    public void run() {
        for (int i=1; i <= 5; i++) {
            System.out.println(i + " from thread: " + threadNumber);
            if(threadNumber == 3) {
                System.out.println("URUGAKSSS");
            }
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {

            }
        }
    }
}
