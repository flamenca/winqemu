// WinQemuTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

extern "C"
{
	int __declspec(dllexport) qemu_main(int argc, char **argv, char **envp);
};

extern "C"
{
	void test1 (int a, __int8 b)
	{
		a += b;
	}

	void test2 (int a, __int16 b)
	{
		a += b;
	}

	void test3 (int a, __int32 b)
	{
		a += b;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	//-fda .\M32-085.IMG -boot a -full-screen
	//".\WinQemuTest\qemu-img.exe" create -f qcow2 xp.bin 12G
	//-L . -m 1024 -hda xp.bin -cdrom D:\windowsxp.iso -localtime -boot c -full-screen
	//-L . -m 1024 -hda xp.bin -cdrom E: -localtime -boot c -full-screen
	//".\WinQemuTest\qemu-img.exe" create -f vmdk D:\windowsxp.vmdk 12G
	//-L . -m 1024 -hda D:\windowsxp.vmdk -cdrom I:\DEEPIN_GHOST_XPSP3_V9F_NTFS.iso -localtime -boot c -full-screen
	//-L . -m 1024 -hda D:\windowsxp.vmdk -cdrom E: -localtime -boot c -full-screen
	//-L . -m 256 -hda "I:\Windows Server 2003 Standard Edition.img" -localtime -boot c -full-screen
	//-L . -m 256 -hda D:\Developer\Developer.vmdk -cdrom D:\KNOPPIX_V6.4.4DVD-2011-01-30-EN_KNOPPIX_V6.4.4DVD-2011-01-30-EN.iso -localtime -boot d -full-screen
	//test1 (0, 1);
	//test2 (0, 2);
	//test3 (0, 3);
	//$(TargetPath)
	//-L . -m 256 -hda D:\Developer\Developer.vmdk -cdrom D:\KNOPPIX_V6.4.4DVD-2011-01-30-EN_KNOPPIX_V6.4.4DVD-2011-01-30-EN.iso -localtime -boot d -full-screen
	qemu_main(argc, argv, NULL);

	return 0;
}

