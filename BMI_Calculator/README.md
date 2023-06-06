## Welcome to the BMI Calculator. 

In order to use this software and install the application onto your desktop follow these steps:

  1- Ensure you have python installed on your device along with a Editor with that. 
  
  2- Download both the .py file and .jpg to a folder of your choosing.
  
  3- Open your comand promt (CMD) and add these installations:
      **pip install Pillow
      pip install openpyxl**
      
  4- Once these are installed you will be able to run the code. 


If you would like to create a desktop application for easier use, follow these steps:
  1- Install PyInstaller
        **pip install pyinstaller**
        
  2- Create a spec file
      Navigate to the directory where your .py file is located and open a command prompt or terminal. Then run the following command to generate a spec file for your script:
          **pyi-makespec --onefile your_script.py**
      Replace your_script.py with the name of your Tkinter file.

  3-Customize the spec file (optional)
      Open the generated spec file (your_script.spec) in a text editor. You can modify it to include any additional files or data your script requires. For example, if your script uses images or other resources, you can specify them in the datas parameter.

  4- Build the executable
      Run the following command to build the executable from the spec file:
        **pyinstaller your_script.spec**
      This will create a dist directory containing the bundled executable file.

  5- Test the executable
      Navigate to the dist directory and run the generated executable file to test your application.
