# 添加 winget 到环境变量

## 问题描述
需要将 winget 命令添加到系统环境变量中，以便在命令行中直接使用。

## 解决方案

### 方法一：通过系统设置添加
1. 按 `Win + X`，选择"系统"
2. 点击"关于"页面底部的"高级系统设置"
3. 点击"环境变量"按钮
4. 在"系统变量"部分，找到并选择"Path"变量
5. 点击"编辑"
6. 点击"新建"
7. 添加以下路径：
   ```
   %LOCALAPPDATA%\Microsoft\WindowsApps
   ```
8. 点击"确定"保存所有更改

### 方法二：通过命令行添加
可以使用以下 PowerShell 命令添加环境变量：
```powershell
$path = [Environment]::GetEnvironmentVariable('Path', 'Machine')
$wingetPath = "$env:LOCALAPPDATA\Microsoft\WindowsApps"
if ($path -notlike "*$wingetPath*") {
    [Environment]::SetEnvironmentVariable('Path', "$path;$wingetPath", 'Machine')
}
```

## 验证安装
添加环境变量后，打开新的命令提示符或 PowerShell 窗口，输入以下命令验证：
```bash
winget --version
```

## 注意事项
1. 添加环境变量后需要重新打开命令提示符或 PowerShell 窗口才能生效
2. 确保使用管理员权限运行命令行工具来修改系统环境变量
3. 如果 WindowsApps 目录不存在，需要先安装应用安装程序（App Installer）

## 相关链接
- [Microsoft Store - App Installer](https://www.microsoft.com/store/productId/9NBLGGH4NNS1)
- [winget 官方文档](https://docs.microsoft.com/windows/package-manager/winget/)
