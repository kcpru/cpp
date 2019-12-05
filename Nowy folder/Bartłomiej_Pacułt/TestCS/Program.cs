//Example of using:
//  dotnet run modified_date C:/Users/Admin/Desktop/test.txt 1800 7 23 14 36 55
//  dotnet run creation_date C:/Users/Admin/Desktop/test.txt 1800 7 23 14 36 55
//  dotnet run access_date C:/Users/Admin/Desktop/test.txt 1800 7 23 14 36 55

using System;
using System.IO;

namespace TestCS
{
    class Program
    {
        static void Main(string[] args)
        {
            int year, month, day, hour, minute, second;

            try
            {
                year = int.Parse(args[2]);
                month = int.Parse(args[3]);
                day = int.Parse(args[4]);
                hour = int.Parse(args[5]);
                minute = int.Parse(args[6]);
                second = int.Parse(args[7]);

                if (args[0] == "modified_date")
                {
                    ChangeModifiedDate(args[1], year, month, day, hour, minute, second);
                }
                else if (args[0] == "creation_date")
                {
                    ChangeCreationDate(args[1], year, month, day, hour, minute, second);
                }
                else if (args[0] == "access_date")
                {
                    ChangeAccessDate(args[1], year, month, day, hour, minute, second);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                throw;
            }
            
        }

        public static void ChangeModifiedDate (string path, int year, int month, int day, int hour, int minute, int second)
        {
            try
            {
                DateTime date = new DateTime(year, month, day, hour, minute, second);
                File.SetLastWriteTime(path, date);
                Console.WriteLine("Changed modified date");
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);                
                throw;
            }
        }

        public static void ChangeCreationDate (string path, int year, int month, int day, int hour, int minute, int second)
        {
            try
            {
                DateTime date = new DateTime(year, month, day, hour, minute, second);
                File.SetCreationTime(path, date);
                Console.WriteLine("Changed creation date");
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);                
                throw;
            }
        }

        public static void ChangeAccessDate (string path, int year, int month, int day, int hour, int minute, int second)
        {
            try
            {
                DateTime date = new DateTime(year, month, day, hour, minute, second);
                File.SetLastAccessTime(path, date);
                Console.WriteLine("Changed access date");
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);                
                throw;
            }
        }

    }
}
