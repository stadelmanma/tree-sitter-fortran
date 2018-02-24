PROGRAM TEST_PROGRAM !Testing comment after program
  !
  ! Basic Program that is used to test parser development. Eventually
  ! I'll get some more complex formal examples in here
  !
  !
  INTEGER :: l(300), M(200, 200, 200)
  LOGICAL :: check
  CHARACTER(LEN=255) :: arg
  DIMENSION :: rr(1:15), f(1:15)

  ! various types of simple assignment
  r = +5.678
  i = -0
  j = 1
  k = -2
  j = k; j =k
  r = -r
  r = +r
  x = -1D9
  x = .134E5
  x = 5.e5
  x = 1.566e+5
  x = 1.566d-5
  xc = (   1.0D0   ,   -.14   )
  y = 5
  check = (.NOT. x == y)
  check = (0 > 1 .AND. (2 > 1) .EQV. 2 .LT. 3)
  arg = "rtt''eq\efqe\fqete""qqrqe\efqfqgrerrqerqrq"
  arg = 'efa"gwg\ffqf2551c^2531efefef''fafaefa"%^@2 rgwgqrfefef'//'dd'//arg
  arg = ""
1 arg = ''

  ! pointer assignment
  N => M

  ! complex math
  g = r**j / k**2 * 7
  M = 14 + (i - j)**3

  ! array slices
  l (:) = 4
  l(1:4:2) = 6
  l(::3) = 3
  l(1) = 1
  l(INT(x):j:1*j) = 8
  M(1, j, INT(SIN(r))) = 5
  l(INT(r/3.0):j) = 4

  ! call expressions
  nargs = command_argument_count()
  r = SIN (1.0 + i + j/k)
  r = CEILING(SIN(1.0 + i + j/k) * 100) / 2.0
  CALL get_command_argument (i, arg)
  OPEN (UNIT=7)
  f = SIN(rr(1:i))

  ! derived type member access
  r = one%two
  r = one%two%three
  l(1:10) = one%two(141)
  one%four => one%two
  r = INT(one%three) + one%two(5)
  rr(5:10) = -zz(5:10)%five

  ! Conditional statements
  ! IF (x < 7) y = 9
  !
  ! IF (SIN(x) .GT. r) THEN
  !   r = 0
  ! ENDIF
  !
  ! IF (arg(1:1) == ADJUSTL(' r')) THEN
  !   r = 0
  ! ELSE
  !   n = 0
  ! ENDIF
  !
  ! IF (arg(1:1) == ADJUSTL(' r')) THEN
  !   r = 0
  ! ELSEIF (arg(1:1) .NE. CHAR(l(1))) THEN
  !   l = 67
  ! ELSE
  !   n = 0
  ! ENDIF
  !
  ! test: IF (y < 0) THEN
  !    y = 9
  !  ELSE  IF (x > 0) THEN test
  !    r = 9
  !  ELSE test
  !   y = 10
  !  END IF test

  !IF (g == 0) THEN; f = 0; ELSE; IF (M > 5) y = 0; END IF

  !;;;;

  ! do i = 1,100
  !   n(i) = i
  ! enddo
  ! k = 5
  ! PRINT *, n(1:10:k)

  !PRINT *, n(40:40)
  !PRINT *, n(40:)
  ! PRINT *, data(5			:       9)
  ! data(1) = 4
  ! !
  ! PRINT *, xc
  ! !
  !x = TEST
END PROGRAM TEST_PROGRAM
