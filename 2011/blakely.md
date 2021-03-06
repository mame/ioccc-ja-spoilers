---
id: 2011/blakely
year: 2011
order: 1
authors: "Philip_Blakely"
orig_url: "https://www.ioccc.org/2011/blakely/blakely.c"
hint_url: "https://www.ioccc.org/2011/blakely/hint.html"
title: "IOCCC 2011: Most devolving"
award_ja: "もっとも退化的"
---

## 動作

基本的な動作は[ライフゲーム](https://ja.wikipedia.org/wiki/%E3%83%A9%E3%82%A4%E3%83%95%E3%82%B2%E3%83%BC%E3%83%A0)。

{: .wrap }
```
$ cat glider
         
         
         
         
    ##   
    # #  
    #    
         
         

$ gcc -Do=char -Dn=return -Dd=int -Dz=memset -Dk=sizeof -include stdio.h -include string.h -include unistd.h -o blakely blakely.c

$ ./blakely < glider
---------




    ##
    # #
    #


---------




    ##
   ##
     #


---------




   ###
   #
    #


---------



    #
   ##
   # #



---------



   ##
   # #
   #



...
```

何かコマンドライン引数を指定すると、指定された状態になる直前の状態を逆計算していくモードになる。

```
$ ./blakely - < glider
---------




    ##
    # #
    #


---------




     #
    ##
    # #


---------





    ###
    #
       #

```

ソースコードをライフゲームの状態として順方向にシミュレーションすると、4世代進んだところで円周率になる。

```
$ ./blakely < blakely.c
------------------------------------------------------------
# ####### #################### ### ########################
####  #   #  ##############################################
#      #     ####### # # # ####### # # # # ##### # # # # ##
#         #                 # # #         # # # #
#  # #  # #     #
####### #            #  # #         ##       #     #  # #
#  #  ##  #  ##   ## # ## #  #   #  ### #  #    ## # ## #
#     #      ### #     ##      ### # #  #      #     ##
#  #  ## # #       #      #      ##     ##  #    #      #
#  ###                 ## #       ## # ###           ## #
#    ## #  #   #  ##  #      ##    # #  #       ##  #
# # #                   ##        # #### # #          ##  #
      ##    # #             # #     ####
#       #                          # ## #   # # # # # ##  #
### #     # # ### # # # # ### # #            #######
# ## #     ########## #### #####           #### # # ##
### #       ## ###  # # ####### # #              #     ##
             # ###       # # #          #   ##            #
#         #               #        # ####           #     #
#    ## # #           #           #    #   ##     # # #
##   #  #    ##    #  #  #      #   #  # #        #
   ## #          # # #   #       #     #       # # ###   ##
    #    ##       #    #          #   ###     # ## ##   ###
##     #       #   ##  ##   #  # # ##  #        #
#  # ### # #   #  # # ## #       ###  ###       #   ###
       ##           #    #      #    # # #          ##
   # #     #   #      ##     #   #            # # #####
#                # #                                ## #
##    # # # # #  ##  #    # # # # # # # # ##  #
## #   ############# # #######################          # #
###   ### # # ########### ########### # #   ###          ##
## #            ## # # #   ####### #                    #
                             ####             #      #
##        #   #          #     ##       #          # #
 #   ## # #       # #  # #         ## # #      # #      #
#    #  #     # ###### #    # #    #  #    #    #  #  ##
#  ## #           #  ##  #  #    ## #          ###   ####
#   #    ##          #            #    ##  #   ## #    # #
##     #       #  #  ## # #   ##     #       #  ### #  #
#  # ### # #   #  ###            # ### # #      ##  # # #
#      ##           ## #  #  #       ##          #  #
#  # #     #     # #             # #     #            ##
#                    ##                           #       #
#       # #                 # #       #     # #           #
   # # ##### # # # #     # ##### # #       ### # # #
  ###### ######### ## #############################   #   #
  ### ################## ################# #######        #
#### #  #  # #   #  #        # # # ##  # # # # #   #      #
###                           #                        #
#       #         #    # #            #         # #  # #
     #  #  #       #  #  #   ###   #  #  #    ###### #    #
#  # # #   #  ## #   # #    ##   # # #   #      #  ##  #  #
#   #    #       # #  ##  #       #    #           #
##   ##  ##           #            ##  ##       #  ## # #
#   # # ## #      ## ### ##  ##   # # ## #      ###
      #    #          #             #    #        ## #  #
#       ##        # #  #        ###   ##       # #        #
#           # # #         #                        ##   ###
##          ## #     #                      #             #
##### ################################################## ##
------------------------------------------------------------
 #           ############################################
  #          #       # # #         # # # #       # # # #  #
  #          #       # # #         # # #           # # #  #
         #    #   #        ## # ##        # # # #
   # ###                                     #
        #           # ###           # #           # ###
   #         # #  # #            ###  ##        # #
     #  # # ## #   ## ###          # ## #        ## ###
   #  ##      #                       #
   #    # #       ##   # #       # #  ##        ##   # #
      #                                   #
                              #
       #                                             #
       #   #  #             #  #              # # #
 ## #       #     # # # # #   #            #          #
     #              # #         ##          #       #
 ## #      #        # #                    #  #  #
            ## # #      #    ##       # #                #
         #      #         #           # #  # #     # #
     ###                           ###               #
         #        # ###          #    ##         ##
   ##    #         ## # #        #             # #   #  # #
   ###            #   ##        ####  # #        # # #  # #
    ## # #        # ##          ##  ##          #  #     #
                    # ## #       # # #              # #
     # ## #        #            #      #       # #

           #    ##    #      #   #             #
  #     # # # #       # # # # # # # # # #    #
##                                                        #
## #  #   # #                         # # #   #         # #
 #     #           # # ## #        ##         #          #
  #                                                 #
         #              #       #      #            #
     ###       #  # ###        #   ###          # # # ##
         #             #     #         #          #  #
   ##    #        #          #   ##    #          #  #
   ###              #  # #       ###          #   ## #
    ## # #        #  ##           ## # #          #  ###
                  #    # #    #                     #  #
     # ## #          #             # ## #       ##    #


       ## ##               ## ##           ## #   #
  ## #       # # # ##  # #       # #    ##       #

                                                         ##
     ## #  # # # #  # #   ##     #     # # # # #
 # #                          #                       #
                        #    # #                # ###
    # ###         #   ##    ###   # ###              #
     ## # #     #   ## ##   ##     ## # #       #
    #   ##      # #  # #          #   ##          #  # #
    # ##           ##   ###       # ##          #  ##
      # ## #         # #            # ## #      #    # #
     #            # #   #         #                #
                                 #                      # #
            # ##                 #                        #
            ####                                          #

------------------------------------------------------------

                                        #         #
             ##           #       #     #         #
      #                                      #
      ###              #                     #       #
    # ##           # # #          ## ###         # # #
         #  ##      #             ##              #
    # ##    ## #   ### #           ###           ### #
    # ###  # ##   # # #           # #           # # #
      #                               ##




                   #   #       ##
    ##              # #                    ##
            #          #
            #   #                           #
      #         #                   # #             #
      # #            #              ##            # #
    ### #           # ##          # ###         ###
   # #            # #                 #          #  #
      # #         #   ##           ###           #      # #
   # ##             #   #            ##           ## #   #
    ## # #          # #          ##  ##         #

                                                #
           #           #     #   #
           #           #     #   #
 #       #   #                       #   #               #
##                                                        #
 #                                                       #
                       ###
      #              #              #               #
      # #            ###            # #          #  # #
    ### #          # ##       #   ### #           # ##
   # #                  #        # #             ##  ##
      # #          # ##             # #          ### #
   # ##            # ###         # ##             #  # #
    ## # #           #            ## # #         #     #








                              #                    #
       #               #    #  #     #             ###
      # ##           ##             # ##         # ##
    # #            ###  #   # #   # #                 #
    #   ##       #   # #          #   ##         # ##
      #   #        ### ###          #   #        # ###
      # #            # #            # #            #

                                 ##                      #
            #  #                                          #
            #  #
             ##
------------------------------------------------------------



      #
        #             #               #             #
     ##             # #           ### #           # #
        #   ###
      #    #          #              #              #
        #    ##     # #             # #           # #
     ##





                      ##
                                           ##

       #                            #              #
      #              ##                           #
    # #            ## #            ## #         # #
                                      #
      ##             # #            #            # ##    #
        #          #  #           ##             ##      #
    ##               #               ##



          # #

###                                                      ##
                        #
                        #
       #             #               #               #
      #                #            #               #
    # #             ##            # #             # #
                       #                              #
      ##             #              ##             # #
        #              #              #            ##
    ##              ##            ##                  #








                                                   #
       ##             #              ##              #
     ## #            ###     #     ## #           ##
                       #                             #
       # #        #    # #           # #           #
     #  #            # #           #  #              #
       #             # #             #            ##





------------------------------------------------------------




     ###             #             # #             #
       #     #       #             # #             #
     ###    ##       #             ###             #
       #             #               #             #
     ###             #               #             #










     ###            ###            ###           ###
     #              # #              #           #
     ###            ###            ##            ###
       #              #            #             # #
     ###            ###            ###           ###










     ###            ###            ###             ###
     #                #            #               # #
     ###            ###            ###             ###
       #              #              #             # #
     ###            ###            ###             ###










      ###            ###            ###           ###
      # #            # #            # #             #
      ###              #            ###           ###
        #              #              #             #
      ###              #            ###           ###







```

## 解説

入力する初期状態は正方形である必要がある。
スペースが空きセル、改行は行の区切り、それ以外の文字は生きているセルとして扱われる。

逆方向に計算するのは基本的にブルートフォースとのこと。

コード形状は動作で示した通り、4世代後に円周率を生成するライフゲームの配置になっている。
60x60で計算するのは無理なので、数字ごとに16個のパーツに分割し、それぞれに逆計算をして結合したとのこと。
ただしそれだけでは文字の数が足りないので、実行直後に死ぬ部分をたくさん入れてどうにか詰め込んだらしい。

賞名のdevolvingは「譲り渡す」という意味だが、ここではevolving（進化する）の反対という意味で使っている洒落。
