Module Module1

    Class being

    End Class

    Class person
        Public name As String
        Private age As Integer
        Public hometown As String

        Public Sub newperson()
            Dim name As String
            Console.WriteLine("Name: ")
            name = Console.ReadLine

            Dim p4 As New person
            Me.name = name
            Console.WriteLine("Hometown: ")
            get_hometown(Console.ReadLine)
            Console.WriteLine("How old are you: ")
            get_age(Console.ReadLine)

        End Sub

        Public Sub get_hometown(ByVal home As String)
            Me.hometown = home
        End Sub

        Private Sub get_age(ByVal age As String)
            Me.age = age
        End Sub

    End Class

    Function get_name()
        Dim name As String
        Console.WriteLine("Enter your name: ")
        name = Console.ReadLine
        Return name
    End Function


    

    Sub Main()

        Dim a As New being
        Console.WriteLine(a.ToString())

        Dim p1 As New person
        p1.name = "ash"

        Dim p2 As New person
        p2.name = "bob"

        Dim p3 As New person
        p3.name = get_name()



        'Console.WriteLine(p1.name)
        '  Console.WriteLine(p2.name)
        ' Console.WriteLine(p3.name)




        Console.WriteLine()


        Console.ReadLine()

    End Sub

End Module
