#include "Test.h"

int main() {
	Test _test;
	_test.TestThis();
	Test _test2;
	_test2.TestThis();
	return 0;

	// 测试重置 ——其更改节点之后的内容将作为重置——保留更改 的 测试环节
	// 内容一 
	// 内容二
	// 开始对原节点进保留更改的重置

	// 通过测试发现，
	// 经过删除更改下的重置，我们测试的文字没有进行保留
	// 而保留更改下的重置 ， 测试文字得到了保留
	// 测试通过，成功验证它们之间的特性差异

	// 测试还原 原结点
	// 更新新功能一：代码.... over —— commit
	// 又更新一个功能 ， 但此次修改存在BUG
	// 另外一个功能模块的更新，不存在BUG，此次提交不需要被删除 over —— commit

	// test start
	// one
	// two

}  