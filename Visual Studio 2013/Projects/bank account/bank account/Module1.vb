Module Module1

    Class person

        Public name As String
        Public address As String
        Public branch As String
        Private DOB As Date
        Public accountNo As String



        Public Sub createUser()
            Console.WriteLine("Name: ")
            Me.name = Console.ReadLine
            Console.WriteLine("address: ")
            Me.address = Console.ReadLine
            Console.WriteLine("Branch: ")
            Me.branch = Console.ReadLine
            Me.get_DOB()
            Console.WriteLine("Acc NO.: ")
            Me.accountNo = Console.ReadLine

        End Sub

        Public Sub Displaydeets()
            Console.WriteLine(p1.name)
            Console.WriteLine(p1.address)
            Console.WriteLine(p1.branch)
            Console.WriteLine(p1.accountNo)


        End Sub

        Private Sub get_DOB()
            Console.WriteLine("DOB: ")
            Me.DOB = Console.ReadLine
        End Sub

        Public Function get_accountNO()
            Return Me.accountNo
        End Function

    End Class

    Class account
        Inherits person

        Private accounttype As String
        Private balance As Double
        Private overdraft As Double

        Public Sub createaccount()

            a1.accountNo = p1.get_accountNO
            a1.balance = 900000
            a1.overdraft = 1500
        End Sub

        Public Sub displayaccdeets(ByVal a1 As account)
            Displaydeets()
            Console.WriteLine(a1.balance)
            Console.WriteLine(a1.accounttype)
            Console.WriteLine(a1.overdraft)


        End Sub

        Public Function getbalance()
            Return Me.balance
        End Function

    End Class

    Dim p1 As New person
    Dim a1 As New account

    Sub Main()


        p1.createUser()
        a1.createaccount()
        a1.displayaccdeets(a1)


        Console.WriteLine(p1.name & " " & p1.address & " " & p1.branch & " " & p1.accountNo)
        Console.ReadLine()
    End Sub

End Module
