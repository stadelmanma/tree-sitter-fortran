PROGRAM TEST_PROGRAM !Testing comment after program
  !
  ! Basic Program that is used to test parser development. Eventually
  ! I'll get some more complex formal examples in here
  !
  !
  ! USE ISO_C_BINDING
  !IMPLICIT NONE
  !INTEGER, PARAMETER :: szt = 4
  INTEGER i, j, k, l(9), n(0:szt)
  INTEGER, DIMENSION(:), ALLOCATABLE :: m
  TYPE :: myStruct
    REAL(8) :: value
    CHARACTER :: name(20)
  END TYPE myStruct
  !
  TYPE(myStruct), DIMENSION(:, :, :), ALLOCATABLE :: mst
  REAL(szt), DIMENSION(0:100, szt) :: f
  REAL*8 r
  DOUBLE PRECISION :: g
  !CHARACTER(LEN=20) :: line
  !CHARACTER*(5) line1
  !CHARACTER(LEN=:), POINTER :: line2
  !CHARACTER(LEN=*) :: line3
  !CHARACTER(*) :: line4

  ! do i = 1,100
  !   n(i) = i
  ! enddo
  ! k = 5
  ! PRINT *, n(1:10:k)

  !PRINT *, n(40:40)
  !PRINT *, n(40:)

  ! REAL (szt), DIMENSION(szt) :: f
  ! REAL*8 r
  ! DOUBLE PRECISION :: g
  ! CHARACTER(LEN=20) :: line
  ! CHARACTER*(5) line1
  !CHARACTER(LEN=:) :: line2
  !CHARACTER(LEN=*) :: line3
  !CHARACTER(*) :: line4
  ! !
  ! REAL(8) :: x, test
  ! COMPLEX :: xc
  ! INTEGER :: data(10) = (/ 1,2,3,4,5,6,7,8,9,10 /)
  ! PRINT *, data(5			:       9)
  ! data(1) = 4
  ! !
  ! x = -1D9
  ! PRINT *, x
  ! x = .134E5
  ! PRINT *, x
  ! x = 5.e5
  ! PRINT *, x
  ! x = 1.566e+5
  ! PRINT *, x
  ! x = 1.566d-5
  ! xc = (1.0D0, -.14)
  ! PRINT *, xc
  ! !
  !x = TEST
END PROGRAM TEST_PROGRAM
!
! SUBROUTINE TEST_SUBROUTINE_NO_ARGS()
!   !
!   ! IMPLICIT NONE
!   ! INTEGER, INTENT(IN)    :: arg1
!   ! INTEGER, INTENT(INOUT) :: arg2
!   ! INTEGER, INTENT(OUT)   :: arg3
!   ! !
!   ! REAL(8) :: local_val
!   !
!   RETURN
! END SUBROUTINE
!
! SUBROUTINE TEST_SUBROUTINE(arg1, arg2, arg3)
!   !
!   ! IMPLICIT NONE
!   ! INTEGER, INTENT(IN)    :: arg1
!   ! INTEGER, INTENT(INOUT) :: arg2
!   ! INTEGER, INTENT(OUT)   :: arg3
!   ! !
!   ! REAL(8) :: local_val
!   !
!   RETURN
! END SUBROUTINE
!
! REAL(8) FUNCTION test()
!   PRINT *, 'grahh'
!   test = 1.0D0
! END FUNCTION
