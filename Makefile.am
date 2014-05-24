# サブディレクトリが include と src の 2 つあることを示します。
SUBDIRS = include src

# TESTS という変数が真の場合は tests もサブディレクトリとして追加します。
if TESTS
  SUBDIRS += tests
endif

# 
ACLOCAL_AMFILES = -I builds/m4

# changelog というターゲットを使えるようにします。
dist-hook: changelog

# git のログから ChangeLog を生成します。
changelog: $(top_src)/.git/HEAD
	git log --stat > ChangeLog

# doxygen を使ってドキュメントを生成します。
doc: Doxygenfile
	doxygen Doxygenfile
