PROGRAM TEST_PROGRAM !Testing comment after program
  !
  ! Basic Program that is used to test parser development. Eventually
  ! I'll get some more complex formal examples in here
  !
  !
  TYPE myStruct
    INTEGER :: i
    REAL    :: f
  END TYPE myStruct
  !
  REAL(8) :: x, test
  COMPLEX :: xc
  INTEGER :: data(10) = (/ 1,2,3,4,5,6,7,8,9,10 /)
  PRINT *, data(5			:       9)
  data(1) = 4
  !
  x = -1D9
  PRINT *, x
  x = .134E5
  PRINT *, x
  x = 5.e5
  PRINT *, x
  x = 1.566e+5
  PRINT *, x
  x = 1.566d-5
  xc = (1.0D0, -.14)
  PRINT *, xc
  !
  x = TEST()
END PROGRAM TEST_PROGRAM

SUBROUTINE TEST_SUBROUTINE_NO_ARGS()
  !
  ! IMPLICIT NONE
  ! INTEGER, INTENT(IN)    :: arg1
  ! INTEGER, INTENT(INOUT) :: arg2
  ! INTEGER, INTENT(OUT)   :: arg3
  ! !
  ! REAL(8) :: local_val
  !
  RETURN
END SUBROUTINE

SUBROUTINE TEST_SUBROUTINE(arg1, arg2, arg3)
  !
  ! IMPLICIT NONE
  ! INTEGER, INTENT(IN)    :: arg1
  ! INTEGER, INTENT(INOUT) :: arg2
  ! INTEGER, INTENT(OUT)   :: arg3
  ! !
  ! REAL(8) :: local_val
  !
  RETURN
END SUBROUTINE

REAL(8) FUNCTION test()
  PRINT *, 'grahh'
  test = 1.0D0
END FUNCTION
