program block_demo
  ! <- keyword
  !      ^ variable
  implicit none
  ! <- keyword
  !        ^ attribute
  real :: y = 1
  ! <- type.builtin
  !    ^ punctuation.delimiter
  !       ^ variable
  print *, y
  ! <- keyword
  !        ^ variable
  block
    ! <- keyword
    real :: x = 3.142
    ! <- type.builtin
    !       ^ variable
    !            ^ number
    print *, x
    y = x
    inner: block
      ! <- attribute
      real :: y = 12.1
      print *, y
    end block inner
    ! <- keyword
    !         ^ attribute
  end block
  print *, y
end program block_demo
