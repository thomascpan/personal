import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;
 
@WebServlet("/test")
public class TestServlet extends HttpServlet {
   @Override
   public void doGet(HttpServletRequest request, HttpServletResponse response)
         throws IOException, ServletException {
 
      // Set the response MIME type of the response message
      response.setContentType("text/html");
      // Allocate a output writer to write the response message into the network socket
      PrintWriter out = response.getWriter();
 
      // Write the response message, in an HTML page
      try {
         String userName = request.getParameter("name");
         HttpSession session = request.getSession();
         ServletContext context = request.getServletContext();
         if (userName != "" && userName != null) {
            session.setAttribute("savedUserName", userName);
            context.setAttribute("savedUserName", userName);
         }
         out.println("Request parameter has username as " + userName);
         out.println("Session parameter has username as " + (String) session.getAttribute("savedUserName"));
         out.println("Context parameter has username as " + (String) context.getAttribute("savedUserName"));
      } finally {
         out.close();  // Always close the output writer
      }
   }

   @Override
   public void doPost(HttpServletRequest request, HttpServletResponse response)
         throws IOException, ServletException {
 
      // Set the response MIME type of the response message
      response.setContentType("text/html");
      // Allocate a output writer to write the response message into the network socket
      PrintWriter out = response.getWriter();
 
      // Write the response message, in an HTML page
      try {
         out.println(request.getParameter("userName"));
         out.println("post test");
      } finally {
         out.close();  // Always close the output writer
      }
   }
}