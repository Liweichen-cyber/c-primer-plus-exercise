cmake_minimum_required(VERSION 3.20)
project(c_primer_plus_exercises C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 递归收集所有章节子目录下的练习 .c 文件（自动跳过构建目录）
file(GLOB_RECURSE EXERCISES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/test*.c")
list(FILTER EXERCISES EXCLUDE REGEX "/cmake-build")

# 每个文件单独编译成一个可执行程序，main 互不冲突。
# 章节文件夹命名规则：第NN章：名字（NN 为两位阿拉伯数字，如"第03章：数组和C"），
# 前缀 chNN 直接从文件夹名提取，以后新建章节无需修改本文件。
foreach(src IN LISTS EXERCISES)
    get_filename_component(dir "${src}" DIRECTORY)
    get_filename_component(base "${src}" NAME_WE)        # test2.c -> test2
    get_filename_component(folder "${dir}" NAME)          # 第03章：数组和C
    if("${folder}" MATCHES "^第[0-9]+章")
        string(REGEX REPLACE "^第([0-9]+)章.*" "\\1" num "${folder}")
        set(prefix "ch${num}")                            # ch03
    else()
        set(prefix "ch_other")                            # 没按规则命名的文件夹
    endif()
    add_executable("${prefix}_${base}" "${src}")          # 如 ch03_test2
endforeach()