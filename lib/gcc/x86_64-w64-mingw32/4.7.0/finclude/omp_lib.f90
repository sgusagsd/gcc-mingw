!  Copyright (C) 2005, 2007, 2008, 2009, 2011 Free Software Foundation, Inc.
!  Contributed by Jakub Jelinek <jakub@redhat.com>.

!  This file is part of the GNU OpenMP Library (libgomp).

!  Libgomp is free software; you can redistribute it and/or modify it
!  under the terms of the GNU General Public License as published by
!  the Free Software Foundation; either version 3, or (at your option)
!  any later version.

!  Libgomp is distributed in the hope that it will be useful, but WITHOUT ANY
!  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
!  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
!  more details.

!  Under Section 7 of GPL version 3, you are granted additional
!  permissions described in the GCC Runtime Library Exception, version
!  3.1, as published by the Free Software Foundation.

!  You should have received a copy of the GNU General Public License and
!  a copy of the GCC Runtime Library Exception along with this program;
!  see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
!  <http://www.gnu.org/licenses/>.

      module omp_lib_kinds
        implicit none
        integer, parameter :: omp_lock_kind = 8
        integer, parameter :: omp_nest_lock_kind = 8
        integer, parameter :: omp_sched_kind = 4
      end module

      module omp_lib
        use omp_lib_kinds
        implicit none
        integer, parameter :: openmp_version = 201107
        integer (omp_sched_kind), parameter :: omp_sched_static = 1
        integer (omp_sched_kind), parameter :: omp_sched_dynamic = 2
        integer (omp_sched_kind), parameter :: omp_sched_guided = 3
        integer (omp_sched_kind), parameter :: omp_sched_auto = 4

        interface
          subroutine omp_init_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (out) :: lock
          end subroutine omp_init_lock
        end interface

        interface
          subroutine omp_init_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (out) :: lock
          end subroutine omp_init_nest_lock
        end interface

        interface
          subroutine omp_destroy_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_destroy_lock
        end interface

        interface
          subroutine omp_destroy_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_destroy_nest_lock
        end interface

        interface
          subroutine omp_set_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_set_lock
        end interface

        interface
          subroutine omp_set_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_set_nest_lock
        end interface

        interface
          subroutine omp_unset_lock (lock)
            use omp_lib_kinds
            integer (omp_lock_kind), intent (inout) :: lock
          end subroutine omp_unset_lock
        end interface

        interface
          subroutine omp_unset_nest_lock (lock)
            use omp_lib_kinds
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end subroutine omp_unset_nest_lock
        end interface

        interface omp_set_dynamic
          subroutine omp_set_dynamic (set)
            logical (4), intent (in) :: set
          end subroutine omp_set_dynamic
          subroutine omp_set_dynamic_8 (set)
            logical (8), intent (in) :: set
          end subroutine omp_set_dynamic_8
        end interface

        interface omp_set_nested
          subroutine omp_set_nested (set)
            logical (4), intent (in) :: set
          end subroutine omp_set_nested
          subroutine omp_set_nested_8 (set)
            logical (8), intent (in) :: set
          end subroutine omp_set_nested_8
        end interface

        interface omp_set_num_threads
          subroutine omp_set_num_threads (set)
            integer (4), intent (in) :: set
          end subroutine omp_set_num_threads
          subroutine omp_set_num_threads_8 (set)
            integer (8), intent (in) :: set
          end subroutine omp_set_num_threads_8
        end interface

        interface
          function omp_get_dynamic ()
            use omp_lib_kinds
            logical (4) :: omp_get_dynamic
          end function omp_get_dynamic
        end interface

        interface
          function omp_get_nested ()
            use omp_lib_kinds
            logical (4) :: omp_get_nested
          end function omp_get_nested
        end interface

        interface
          function omp_in_parallel ()
            use omp_lib_kinds
            logical (4) :: omp_in_parallel
          end function omp_in_parallel
        end interface

        interface
          function omp_test_lock (lock)
            use omp_lib_kinds
            logical (4) :: omp_test_lock
            integer (omp_lock_kind), intent (inout) :: lock
          end function omp_test_lock
        end interface

        interface
          function omp_get_max_threads ()
            use omp_lib_kinds
            integer (4) :: omp_get_max_threads
          end function omp_get_max_threads
        end interface

        interface
          function omp_get_num_procs ()
            use omp_lib_kinds
            integer (4) :: omp_get_num_procs
          end function omp_get_num_procs
        end interface

        interface
          function omp_get_num_threads ()
            use omp_lib_kinds
            integer (4) :: omp_get_num_threads
          end function omp_get_num_threads
        end interface

        interface
          function omp_get_thread_num ()
            use omp_lib_kinds
            integer (4) :: omp_get_thread_num
          end function omp_get_thread_num
        end interface

        interface
          function omp_test_nest_lock (lock)
            use omp_lib_kinds
            integer (4) :: omp_test_nest_lock
            integer (omp_nest_lock_kind), intent (inout) :: lock
          end function omp_test_nest_lock
        end interface

        interface
          function omp_get_wtick ()
            double precision :: omp_get_wtick
          end function omp_get_wtick
        end interface

        interface
          function omp_get_wtime ()
            double precision :: omp_get_wtime
          end function omp_get_wtime
        end interface

        interface omp_set_schedule
          subroutine omp_set_schedule (kind, modifier)
            use omp_lib_kinds
            integer (omp_sched_kind), intent (in) :: kind
            integer (4), intent (in) :: modifier
          end subroutine omp_set_schedule
          subroutine omp_set_schedule_8 (kind, modifier)
            use omp_lib_kinds
            integer (omp_sched_kind), intent (in) :: kind
            integer (8), intent (in) :: modifier
          end subroutine omp_set_schedule_8
         end interface

        interface omp_get_schedule
          subroutine omp_get_schedule (kind, modifier)
            use omp_lib_kinds
            integer (omp_sched_kind), intent (out) :: kind
            integer (4), intent (out) :: modifier
          end subroutine omp_get_schedule
          subroutine omp_get_schedule_8 (kind, modifier)
            use omp_lib_kinds
            integer (omp_sched_kind), intent (out) :: kind
            integer (8), intent (out) :: modifier
          end subroutine omp_get_schedule_8
         end interface

        interface
          function omp_get_thread_limit ()
            use omp_lib_kinds
            integer (4) :: omp_get_thread_limit
          end function omp_get_thread_limit
        end interface

        interface omp_set_max_active_levels
          subroutine omp_set_max_active_levels (max_levels)
            use omp_lib_kinds
            integer (4), intent (in) :: max_levels
          end subroutine omp_set_max_active_levels
          subroutine omp_set_max_active_levels_8 (max_levels)
            use omp_lib_kinds
            integer (8), intent (in) :: max_levels
          end subroutine omp_set_max_active_levels_8
        end interface

        interface
          function omp_get_max_active_levels ()
            use omp_lib_kinds
            integer (4) :: omp_get_max_active_levels
          end function omp_get_max_active_levels
        end interface

        interface
          function omp_get_level ()
            use omp_lib_kinds
            integer (4) :: omp_get_level
          end function omp_get_level
        end interface

        interface omp_get_ancestor_thread_num
          function omp_get_ancestor_thread_num (level)
            use omp_lib_kinds
            integer (4), intent (in) :: level
            integer (4) :: omp_get_ancestor_thread_num
          end function omp_get_ancestor_thread_num
          function omp_get_ancestor_thread_num_8 (level)
            use omp_lib_kinds
            integer (8), intent (in) :: level
            integer (4) :: omp_get_ancestor_thread_num_8
          end function omp_get_ancestor_thread_num_8
        end interface

        interface omp_get_team_size
          function omp_get_team_size (level)
            use omp_lib_kinds
            integer (4), intent (in) :: level
            integer (4) :: omp_get_team_size
          end function omp_get_team_size
          function omp_get_team_size_8 (level)
            use omp_lib_kinds
            integer (8), intent (in) :: level
            integer (4) :: omp_get_team_size_8
          end function omp_get_team_size_8
        end interface

        interface
          function omp_get_active_level ()
            use omp_lib_kinds
            integer (4) :: omp_get_active_level
          end function omp_get_active_level
        end interface

        interface
          function omp_in_final ()
            use omp_lib_kinds
            logical (4) :: omp_in_final
          end function omp_in_final
        end interface

      end module omp_lib
