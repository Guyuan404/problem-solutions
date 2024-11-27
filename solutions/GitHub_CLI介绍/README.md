# GitHub CLI (gh) 介绍

## 什么是 GitHub CLI？

GitHub CLI (命令行界面)，简称 `gh`，是 GitHub 官方开发的命令行工具。它允许你直接在终端中访问和管理 GitHub，而不需要打开浏览器。

## 主要功能

1. **仓库管理**
   - 创建新仓库
   - 克隆仓库
   - 查看仓库信息
   - 管理仓库设置

2. **Issues 和 Pull Requests**
   - 创建、查看、管理 Issues
   - 创建、查看、管理 Pull Requests
   - 进行代码审查

3. **GitHub Actions**
   - 查看工作流运行状态
   - 管理 GitHub Actions

4. **其他功能**
   - 管理 Gists
   - 查看项目发布
   - 管理仓库协作者

## 常用命令示例

```bash
# 创建新仓库
gh repo create

# 克隆仓库
gh repo clone 用户名/仓库名

# 查看仓库列表
gh repo list

# 创建 Issue
gh issue create

# 查看 Pull Requests
gh pr list
```

## 为什么使用 GitHub CLI？

1. **提高效率**
   - 无需切换到浏览器
   - 命令行操作更快捷
   - 支持脚本自动化

2. **更好的工作流**
   - 直接在终端中完成 GitHub 操作
   - 与其他命令行工具无缝集成
   - 支持批量操作

3. **功能完整**
   - 支持几乎所有 GitHub 网页版功能
   - 提供额外的命令行特有功能

## 安装方法

### Windows
```bash
# 使用 winget
winget install GitHub.cli

# 或使用 scoop
scoop install gh
```

### macOS
```bash
# 使用 Homebrew
brew install gh
```

### Linux
```bash
# Debian/Ubuntu
sudo apt install gh

# Fedora
sudo dnf install gh
```

## 使用前的准备

1. **安装完成后进行身份认证**
```bash
gh auth login
```

2. **配置默认编辑器**
```bash
gh config set editor "你喜欢的编辑器"
```

## 与 Git 的区别

- Git 是版本控制系统，用于管理代码版本
- GitHub CLI 是 GitHub 平台的命令行工具，用于管理 GitHub 特有的功能
- 两者互补，通常一起使用

## 学习资源

1. [GitHub CLI 官方文档](https://cli.github.com/manual/)
2. [GitHub CLI 仓库](https://github.com/cli/cli)
3. [GitHub CLI 命令参考](https://cli.github.com/manual/gh_help_reference)

## 注意事项

1. 需要先安装 Git
2. 需要 GitHub 账号
3. 首次使用需要进行身份认证
4. 某些操作可能需要特定权限
