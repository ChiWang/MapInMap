
        Project:    mapInMap
>--------------------------------------------

Note:
-------------

Compilation:
-------------
    scons       // will create executable file sss at ./, and temporary files in ./Scons
    scons -c    // clean up
    more details in SConstruct

Tips:
-------------
How to use Cscope and Ctags? It help your coding more efficiency.

    ## Cscope:

    1.  cd into "RootDir of this project"(where holds src and include, etc)
    
    2.  create cscope* files
      cscope -Rbq
    
    3.  then, while you use vim open a source file,
      3.1     :cs add /SomePathTo/cscope.out /SomePath
      3.2     :cs find g anyThing
      3.3     :cs find c anyThing
    
    4.  show the outputs of 1.3 in a window, do in vim
            :cw
            (if report errors, be sure that this line ":set cscopequickfix=s-,c-,d-,i-,t-,e-" in your ~/.vimrc)

    ## Ctags:

    1.  cd into "RootDir of this project"(where holds src and include, etc)
    
    2.  create tags file
      ctags -R
    
    3.  then, while you use vim open a source file,
      3.1   :set tags=/SomePathTo/tags
      3.2   Ctrl+] OR Ctrl+T to find something

    ## Valgrind

    1.  add option -g while compiling codes

    2.  run: valgrind [valgrind-options] your-prog [your-prog-options]


