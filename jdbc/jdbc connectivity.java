package jdbc;

import java.sql.*;
import java.util.*;
public class jdbcprogram {

	public static void main(String[] args)throws Exception {
		
          Class.forName("com.mysql.jdbc.Driver");
          //step 2
          Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/testdata","root","");
          Statement stmt=conn.createStatement();
          ResultSet rs=stmt.executeQuery("select * from student");
          //PreparedStatment ps=conn.preparedStatment("insert into Student(name,age)values(?,?)");
          while(rs.next())
          {
        	  System.out.println(rs.getInt(1));
        	  System.out.println(rs.getString(2));
        	  System.out.println(rs.getInt(3));
          }

         /*reparedStatement ps=conn.prepareStatement("insert into Student(name,age)values(?,?)");
          ps.setString(1,"abb");
          ps.setInt(2,27);
          ps.executeUpdate();*/
          ResultSetMetaData rss=rs.getMetaData();
          System.out.println(rss.getColumnCount());
          System.out.println(rss.getColumnName(1));    
          System.out.println(rss.getColumnTypeName(2));
          conn.close();
          
	}

}
