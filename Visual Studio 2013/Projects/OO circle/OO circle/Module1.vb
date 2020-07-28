Module Module1

    MustInherit Class shape

        Public x As Integer
        Public y As Integer
        Public Const pi As Double = Math.PI
        Public area As Double
        Public MustOverride Function calc_area()

        Public Function GetCoordinates() As String
            Return String.Format("x: {0}, y: {1}", _
                Me.x, Me.y)
        End Function


    End Class

    Class circle
        Inherits shape

        Private r As Double


        Public Overrides Function calc_area() As Object
            Return Me.r * Me.r * shape.pi
        End Function

        Public Sub get_area()
            Me.area = Me.calc_area()
            Console.WriteLine(Me.area)
        End Sub

        Public Sub New(ByVal x As Integer, ByVal y As Integer, ByVal r As Double)
            Me.x = x
            Me.y = y
            Me.r = r
        End Sub

    End Class

    Sub Main()

        Dim c As New circle(6, 7, 15)

        c.get_area()
        Console.ReadLine()

    End Sub

End Module
