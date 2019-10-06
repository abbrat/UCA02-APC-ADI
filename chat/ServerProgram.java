import java.net.*;
import java.io.*;
class ServerProgram implements Runnable
{
	int clientport=10,serverport=20;
	DatagramSocket ds;
	Thread receiveThread;
	ServerProgram() throws Exception
	{
receiveThread=new Thread(this);
	ds=new DatagramSocket(serverport);
	receiveThread.start();
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		while(true)
		{
	try{
			String data=br.readLine();
			if(data.equals("EXIT"))
			break;
			DatagramPacket dp=new DatagramPacket(data.getBytes(),data.length(),InetAddress.getLocalHost(),clientport);
			ds.send(dp);
	}catch(Exception e){}
		}
	}
public void run()
{
	byte b[]=new byte[1000];
	while(true)
	{
	try{
		DatagramPacket dp=new DatagramPacket(b,b.length);
		ds.receive(dp);
		String x=new String (b,0,dp.getLength());
		System.out.println("Client:"+x);
	}catch(Exception ee){}
	}
}
public static void main(String args[] ) throws Exception
{
	ServerProgram sp=new ServerProgram();
}

}


