> 项目基于唐巧大神对Xcode代码块的脚本用于实现个人开发中积累的Xcode代码块

 1、喜欢的亲可以按照以下步骤clone到本地安装试试哦！
 

	1. check out the project using: git clone https://github.com/kopuCoder/Xcode_tool.git
	2. cd setup_snippets
	3. ./setup_snippets.sh

 2、代码中有：clear\_derived\_data.sh脚本，该脚本是用于清理Xcode的DerivedData文件夹，平时找不到DerivedData文件夹的同学，可以直接运行这个脚本，直接清理掉(对Xcode无任何影响),执行脚本`./clear_derived_data.sh`回车即可:
 
 	1.打开terminal,然后进入到clear_derived_data.sh所在目录
 	2.运行脚本,即可,执行方式: ./clear_derived_data.sh
 	3.推荐一种简便的操作方式，将该脚本直接放在用户目录下(即：/Users/yourUserName),这么做的话，主要是为了方便:打开terminal就能直接调用脚本，而不用每次都cd到某个特定的目录下去执行该脚本
 	
***
The xcode tool project is planed to be a collection of xcode tools.

Now, it contains the following tools:

####1. Code snippets management.

It is used for managing the snippets in xcode.

The default snippets are stored in the ~/Library/Developer/Xcode/UserData/CodeSnippets/

We can check out this git project and use a soft link to the target directory.

Usage:

	1. check out the project using: git clone https://github.com/kopuCoder/Xcode_tool.git
	2. cd setup_snippets
	3. ./setup_snippets.sh


####2. A collection of shell utils

 * removeTailBlank.sh

It can remove tailing blank space in the .h & .m & .mm source file.

####3. NSString Wrapper

NSString Wrapper is a wrapper class to decorate NSString methods to java String style.

####4. Macro Utils

  * VersionCompare.h 

Macros used for version comparison.

* MacroUtils.h

Macros used for debuging and I18N.

* UIContants.h     

Macros used for UI.

####5. Encoding Utils

* Base64 

The author is Matt Gallagher. I got the code from [http://cocoawithlove.com/2009/06/base64-encoding-options-on-mac-and.     html](http://cocoawithlove.com/2009/06/base64-encoding-options-on-mac-and.html) . The copyright info is in the header of the relevant source file.

* JSON         

If you want a json lib, I recommend [JSONKit](https://github.com/johnezang/JSONKit) .As I know, it's faster than any other open source json libraries. You can get it using: 

    ```
    git clone https://github.com/johnezang/JSONKit.git
    ```

 * 再次感谢唐巧大神的分享，有需要者可以看原作者github:https://github.com/tangqiaoboy/xcode_tool