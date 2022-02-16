using System;
using System.IO;

namespace Print_ImageFolderName
{
    class Program
    {
        static void Main(string[] args)
        {

            string path = @"..\..\..\Images";
            string[] files = Directory.GetFiles(path);
            string ext;
            for (int x = 0; x < files.Length;x++)
            {
                ext = Path.GetExtension(Path.GetFileName(files[x]));
                if (ext == ".jpg" || ext == ".jpeg")
                {
                    Console.WriteLine(Path.GetFileName(files[x]));
                }
            }



            Console.ReadLine();
            }
        }
    }


