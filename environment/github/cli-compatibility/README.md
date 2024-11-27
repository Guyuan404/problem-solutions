# GitHub CLI 命令行兼容性问题

## 问题描述
GitHub CLI (gh) 命令在 PowerShell 中可以正常运行，但在 CMD（命令提示符）中无法识别。

## 原因分析
这种情况通常有以下几个可能的原因：
1. PowerShell 和 CMD 使用不同的环境变量加载机制
2. PowerShell 可能有其特定的模块路径
3. 安装程序可能只配置了 PowerShell 的路径

## 解决方案

### 实际解决步骤
1. 在 PowerShell 中找到 gh.exe 的位置：`C:\Program Files\GitHub CLI\gh.exe`
2. 将路径 `C:\Program Files\GitHub CLI` 添加到系统环境变量 Path 中
3. 重启 CMD 使环境变量生效

### 方案1：使用 PowerShell
既然 gh 在 PowerShell 中可以正常工作，最简单的解决方案是使用 PowerShell 来运行 GitHub CLI 命令。

### 方案2：手动添加 PATH（推荐）
1. 找到 gh.exe 的实际位置：
   ```powershell
   # 在 PowerShell 中运行
   Get-Command gh | Select-Object Source
   ```

2. 将找到的路径添加到系统环境变量：
   - 打开系统属性（Win + X，然后选择系统）
   - 点击"高级系统设置"
   - 点击"环境变量"
   - 在"系统变量"中找到 Path
   - 添加 gh.exe 所在的目录路径

3. 重启 CMD 测试

### 方案3：创建命令别名
在 CMD 中创建一个指向 gh.exe 完整路径的别名：
```cmd
doskey gh=完整路径\gh.exe $*
```

## 验证方法
在 CMD 中运行：
```cmd
gh --version
```

## 最佳实践
1. 推荐使用 PowerShell 作为主要的命令行工具
2. 如果必须使用 CMD，建议采用方案2，将路径添加到系统环境变量
3. 记录 gh.exe 的实际安装位置，以便后续排查问题

## 相关命令
```powershell
# 在 PowerShell 中查看 gh 命令位置
Get-Command gh

# 查看环境变量
echo %PATH%

# 验证安装
gh --version
```

## 注意事项
1. 修改系统环境变量需要管理员权限
2. 修改环境变量后需要重启终端才能生效
3. 不同版本的 Windows 可能有略微不同的行为

## 延伸阅读
- [PowerShell vs CMD 环境变量差异](https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_environment_variables)
- [GitHub CLI 官方文档](https://cli.github.com/manual/)
