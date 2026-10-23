PROGRAM TEST
  implicit none
  integer :: x, y, i, j
  character(len=5) :: arg
  ! <- type.builtin
  !             ^ number

  IF (x < 7) y = 9
  ! <- keyword
  !   ^ variable
  !     ^ operator
  !        ^ punctuation.bracket
  !          ^ variable
  !              ^ number

  if(x > 1 .and. 2 <= x) x = 4
  ! <- keyword
  !    ^ operator
  !      ^ number
  !         ^ operator
  !              ^ number
  !                ^ operator

  IF (arg(1:1) == ADJUSTL(' r')) THEN
  ! <- keyword
  !                        ^ string
  !                               ^ keyword
    x = 0
  ELSE IF (arg(1:1) .NE. CHAR(x)) THEN
    ! <- keyword
    !  ^ keyword
    !                ^ operator
    !                             ^ keyword
    x = 2
  elseif (arg(1:1) /= "x") then
    ! <- keyword
    !                       ^ keyword
    x = 3
  ELSE
    ! <- keyword
    x = 4
  ENDIF
  ! <- keyword

  do i = 1, 10
  ! <- keyword
    x = 6**x
    OPEN(i, FILE="qwerty")
    ! <- keyword
    !    ^ variable
    !              ^ string
    CALL MYSUB(i, .TRUE.)
    ! <- keyword
    !                ^ boolean
  end do
  ! <- keyword
  !    ^ keyword

  DO i = 1, 10
    CONTINUE
    ! <- keyword
  ENDDO
  ! <- keyword

  out44: DO i = 1,INT(SIN(9.0*i))
    ! <- attribute
    DO WHILE (.false.)
     ! <- keyword
     ! ^ keyword
     !        ^ boolean
      cycle out44
      ! <- keyword
      !      ^ attribute
    END DO
    ! <- keyword
    !   ^ keyword
  enddo out44
  ! <- keyword
  !      ^ attribute

  do i = 1, 10
    if (.true.) go to 100
    !                  ^ number
100 end do
! <- number

  SELECT CASE (c)
    ! <- keyword
    !      ^ keyword
    !          ^ variable
  CASE ('a' : 'm', 'n' : 'z')
    ! <- keyword
    !       ^ punctuation.delimiter
    WRITE(*,*) 'lowercase letter'
  CASE ('A' : 'Z')
    WRITE(*,*) 'uppercase letter'
  CASE (WILDCARD_CHAR)
    WRITE(*,*) 'wildcard letter'
  CASE DEFAULT
    WRITE(*,*)  'Other characters, which may not be letters'
  END SELECT

END PROGRAM TEST
